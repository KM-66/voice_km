import rclpy
from rclpy.node import Node
from rclpy.executors import MultiThreadedExecutor 
from rclpy.callback_groups import ReentrantCallbackGroup
from voice_interfaces.srv import VoiceCommand
from ctypes import CFUNCTYPE, c_char_p, c_int, c_char_p, c_int, c_char_p, cdll
from speech_recognition import (Recognizer, Microphone, UnknownValueError, RequestError, WaitTimeoutError)


# pyaudio の警告表示　これにより、pyaudioが出すエラーを表示できないようにする　 もしデバックしたい場合はコメントアウト推奨
ERROR_HANDLER_FUNC = CFUNCTYPE(None, c_char_p, c_int, c_char_p, c_int, c_char_p)
def py_error_handler(filename, line, function, err, fmt):
    pass
c_error_handler = ERROR_HANDLER_FUNC(py_error_handler)
asound = cdll.LoadLibrary('libasound.so')
asound.snd_lib_error_set_handler(c_error_handler)

class VoiceRecoServer(Node):
    def __init__(self):
        super().__init__('voice_service_node')
        self.get_logger().info('音声認識サーバを起動します')
        self.lang = 'ja' # 日本語に設定　あまりにもネイティブな場合は英語として認識されることも
        self.recognizer = Recognizer()
        self.callback_group = ReentrantCallbackGroup()
        self.service = self.create_service(VoiceCommand, 'voice_reco', self.callback, callback_group=self.callback_group)

    # requestは使用してない　使用した機能付け足したい場合は変更可
    def callback(self,request, response):
        self.get_logger().info('実行...')
        response.answer = 'NG'
        try:
            with Microphone() as source:
                self.get_logger().info('音声入力')
                # ノイズ測定　少しラグくなるためノイズないときはinitのほうに移動推奨
                self.recognizer.adjust_for_ambient_noise(source)
                try:
                    audio_data = self.recognizer.listen(
                        # タイムアウトまでの時間　適宜変更推奨
                        source, timeout=10.0, phrase_time_limit=10.0) 
                except WaitTimeoutError:
                    self.get_logger().info('タイムアウト')
                    return response
                
                try:
                    self.get_logger().info('音声認識')
                    # Whisper の設定　重い場合はここのmodelを変更する
                    text = self.recognizer.recognize_whisper(audio_data, model="tiny", language=self.lang) 
                except RequestError:
                    self.get_logger().info('API無効')
                    return response
                except UnknownValueError:
                    self.get_logger().info('認識できない')
                    return response

                response.answer = text
                self.get_logger().info(f'認識結果:{text}')
                return response
        except Exception as e:
            # マイクへのアクセス失敗など、予期せぬエラー
            self.get_logger().error(f"コールバック中に予期せぬエラー: {e}")
            return response
            
    

def main():
    rclpy.init()
    node = VoiceRecoServer()
    executor = MultiThreadedExecutor()
    executor.add_node(node)
    try:
        executor.spin()
    except KeyboardInterrupt:
        print('Ctrl+Cが押されました')
    node.destroy_node()
    rclpy.try_shutdown()
    print('プログラムが終了しました')
