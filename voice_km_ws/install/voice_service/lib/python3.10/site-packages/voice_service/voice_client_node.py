import threading
import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node
from action_msgs.msg import GoalStatus
from voice_interfaces.action import VoiceCommand


class VoiceRecoClient(Node):
    def __init__(self):
        super().__init__('voice_client_node')
        self.get_logger().info('音声認識クライアント起動')
        self.goal_handle = None
        self.action_client = ActionClient(self, VoiceCommand, "voice_reco")


    def hear(self):
        self.get_logger().info('サーバ待機中...')
        self.action_client.wait_for_server()
        goal_msg = VoiceCommand.Goal()
        self.get_logger().info("ゴール送信...")
        self.send_goal_future = self.action_client.send_goal_async(goal_msg)
        self.send_goal_future.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info("ゴール拒否")
            return
        self.goal_handle = goal_handle
        self.get_logger().info("ゴール受諾")
        self.get_result_future = goal_handle.get_result_async()
        self.get_result_future.add_done_callback(self.get_result_callback)

    def get_result_callback(self, future):
        result = future.result().result
        status = future.result().status
        if status == GoalStatus.STATUS_SUCCEEDED: #　ゴールについて勉強してから
            self.get_logger().info(f"結果:{result.answer}")
            self.goal_handle = None
        else:
            self.get_logger().info("失敗ステータス:{status}")

    def cancel_done(self, future):
        cancel_response = future.result()
        if len(cancel_response.goals_canceling) > 0:
            self.get_logger.info('キャンセル成功')
        else:
            self.get_logger.info('キャンセル成功')

    def cancel(self):
        if self.goal_handle is None:
            self.get_logger().info('キャンセル対象なし')
            return
        self.get_logger().info('キャンセル')
        future = self.goal_handle.cancel_goal_async()
        future.add_done_callback(self.cancel_done)


def main():
    # ROSクライアントの初期化
    rclpy.init()

    # ノードクラスのインスタンス
    node = VoiceRecoClient()

    # 別のスレッドでrclpy.spin()を実行する
    thread = threading.Thread(target=rclpy.spin, args=(node,))
    threading.excepthook = lambda x: ()
    thread.start()

    try:
        while True:
            s = input('>')
            if s == '':
                node.hear()
            elif s == 'c':
                node.cancel()
            else:
                print('無効なコマンドです')
    except KeyboardInterrupt:
        pass

        rclpy.try_shutdown()

