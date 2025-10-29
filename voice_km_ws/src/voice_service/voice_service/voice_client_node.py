import threading
import rclpy
from rclpy.node import Node
from voice_interfaces.srv import VoiceCommand


class VoiceRecoClient(Node):
    def __init__(self):
        super().__init__('voice_client_node')
        self.get_logger().info('音声認識クライアント起動')
        self.client = self.create_client(VoiceCommand, 'voice_reco')
        # サーバ待機時間　適宜変更可能
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('サーバ待機中...')
        self.request = VoiceCommand.Request()
        # threadingモジュールを使ったフラグ管理　サーバからのレスポンスがない状態で進まないようにしてる
        self.response_received_event = threading.Event()

    # リクエストとして空白のstrを送信　機能追加したい場合は適宜変更推奨   
    def send_request(self, s):
        self.request.command = s
        self.response_received_event.clear()
        self.future = self.client.call_async(self.request)
        self.future.add_done_callback(self.get_result_callback)
        self.get_logger().info('リクエストを送信しました')

    def get_result_callback(self, future):
        try:
            response = future.result()
            self.get_logger().info(f'結果:{response.answer}')
        except Exception as e:
            self.get_logger().error(f'サービスコール失敗: {e}')
        finally:
            # threadingモジュールを使ったフラグ管理
            self.response_received_event.set()


def main():
    rclpy.init()
    node = VoiceRecoClient()
    thread = threading.Thread(target=rclpy.spin, args=(node,))
    thread.start()

    try:
        while rclpy.ok():
            s = input('enterで録音開始 (qで終了): ')
            
            if s == '':
                node.send_request(s) 
                print('サーバにて録音・認識処理中です')
                # threadingモジュールを使ったフラグ管理
                node.response_received_event.wait()
            elif s == 'q':
                print('終了します...')
                break 
            else:
                print('無効なコマンドです')
    except KeyboardInterrupt:
        print('Ctrl+Cが押されました')
    node.destroy_node()
    rclpy.try_shutdown()
    thread.join()
    print('プログラム終了')

