#ifndef VEL_OPT_ROS2_NODE_HPP_
#define VEL_OPT_ROS2_NODE_HPP_

#include <rclcpp/rclcpp.hpp>

namespace vel_opt_ros2
{
    class VelocityOptimizerROS2 : public rclcpp::Node
    {
        public:
        explicit VelocityOptimizerROS2(rclcpp::NodeOptions options= rclcpp::NodeOptions());

        private:
        void topic_callback();
    };
}

#endif