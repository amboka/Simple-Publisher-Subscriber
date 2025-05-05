import rclpy
from rclpy.node import Node
from rclpy.time import Time

from custom_msg_pkg.msg import TextStamped  


class TextSubscriber(Node):

    def __init__(self):
        super().__init__('text_subscriber')
        self.subscription = self.create_subscription(
            TextStamped,                 
            'TextStamped',                
            self.listener_callback,
            10)
        self.subscription  

    def listener_callback(self, msg):
        self.get_logger().info(f'Received text: "{msg.text}"')

        msg_time = Time.from_msg(msg.timestamp)
        self.get_logger().info(f'Message timestamp: {msg_time.to_msg()}')

        current_time = self.get_clock().now()
        self.get_logger().info(f'Current ROS time: {current_time.to_msg()}')

        delay = current_time - msg_time
        self.get_logger().info(f'Delivery delay: {delay.nanoseconds / 1e9:.6f} seconds/n')


def main(args=None):
    rclpy.init(args=args)
    subscriber = TextSubscriber()
    rclpy.spin(subscriber)
    subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()

