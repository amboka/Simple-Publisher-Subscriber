#include <chrono>
#include <memory>
#include <string>
#include <iostream>

#include "rclcpp/rclcpp.hpp"
#include "custom_msg_pkg/msg/text_stamped.hpp"  

class TextPublisher : public rclcpp::Node
{
public:
  TextPublisher()
  : Node("text_publisher")
  {
    publisher_ = this->create_publisher<custom_msg_pkg::msg::TextStamped>("TextStamped", 10);
  }

  void run()
  {
    std::string input_line;
    while (rclcpp::ok()) {
      std::cout << "Enter text to publish: ";
      std::getline(std::cin, input_line);

      if (input_line.empty()) {
        std::cout << "Empty input. Exiting." << std::endl;
        break;
      }

      auto message = custom_msg_pkg::msg::TextStamped();
      message.text = input_line;
      message.timestamp = this->get_clock()->now();  

      RCLCPP_INFO(this->get_logger(), "Publishing: '%s'", message.text.c_str());
      publisher_->publish(message);
    }
  }

private:
  rclcpp::Publisher<custom_msg_pkg::msg::TextStamped>::SharedPtr publisher_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<TextPublisher>();
  node->run();  
  rclcpp::shutdown();
  return 0;
}

