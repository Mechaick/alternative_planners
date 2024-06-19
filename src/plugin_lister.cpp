#include <iostream>
#include <pluginlib/class_loader.hpp>
#include <nav2_core/global_planner.hpp>

int main(int argc, char** argv)
{
  rclcpp::init(argc, argv);
  rclcpp::Node::SharedPtr node = rclcpp::Node::make_shared("plugin_test_node");

  pluginlib::ClassLoader<nav2_core::GlobalPlanner> planner_loader("nav2_core", "nav2_core::GlobalPlanner");

  std::vector<std::string> classes = planner_loader.getDeclaredClasses();
  std::cout << "Available plugins:" << std::endl;
  for (const auto& class_name : classes)
  {
    std::cout << " - " << class_name << std::endl;
  }

  rclcpp::shutdown();
  return 0;
}
