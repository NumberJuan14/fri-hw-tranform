#include <tf_homework/TFSolution.h>
#include <ros/console.h>
#include <ros/ros.h>

using namespace ros;


TFSolution::TFSolution() : _tfListener(_tfBuffer) {}
TFSolution::~TFSolution() {}

Eigen::MatrixXd TFSolution::getTransformMatrix(geometry_msgs::TransformStamped transformStamped) {
    //Use transformStamped to fill in a 4x4 rigid transformation matrix
    //DO NOT USE the ROS package tf2_eigen for your solution.
    //Write your solution in Eigen. Use Eigen::MatrixXd as your 4x4 rigid
    //  transformation
    //Use Eigen::Quaterniond to get the rotation matrix portion of the 
    //  rigid transformation.
    Eigen::MatrixXd p(3,1);
    return p;
}

Eigen::MatrixXd TFSolution::oneMeterForwardOnX() {
    //Use Eigen::MatrixXd to create a 4x4 rigid transformation matrix that
    //  translates 1 meter forward on the X axis
    Eigen::MatrixXd p(3,1);
    return p;
}

Eigen::MatrixXd TFSolution::oneMeterUpOnZ() {
    //Use Eigen::MatrixXd to create a 4x4 rigid transformation matrix that
    //  translates 1 meter up on the Z axis
    Eigen::MatrixXd p(3,1);
    return p;
}

Eigen::MatrixXd TFSolution::rotate180DegreesOnZ() {
    //Use Eigen::MatrixXd + Eigen::AngleAxisd to create a 4x4 rigid
    //  transformation matrix that rotates 180 degrees about the Z axis
    Eigen::MatrixXd p(3,1);
    return p;
}

void TFSolution::broadcastTransform(std::string parent, std::string child, Eigen::MatrixXd transform) {
    //Use Eigen (matrix functions + Eigen::Quaterniond) to fill in the fields
    //  of a geometry_msgs::TransformStamped
    //Then use a tf2_ros::TransformBroadcaster to broadcast the transform
    //Do NOT make a new tf2_ros::TransformBroadcaster every time this function is called
}

void TFSolution::printTransformStamped(geometry_msgs::TransformStamped transformStamped) {
    //Use ROS_INFO_STREAM to print every field in transformStamped
}

void TFSolution::update() {
    try{
        geometry_msgs::TransformStamped transformStamped;
        //Fill in transformStamped with the transform between fixed_link and
        //  base_link using TF2's lookupTransform.

        //Make it so this prints out the fields of the transformStamped message
        printTransformStamped(transformStamped);

        //Make these broadcastTransform calls broadcast 3 transforms:
        //  forward_x -> One meter forward on the X axis of base_link
        //  forward_x_up_z -> forward_x, then up 1 meter on the Z axis
        //  forward_x_up_z_180z -> forward_x_up_z, then rotated 180 degrees
        //      on the Z axis
        //Note that each of these should be broadcast relative to fixed_link
        
        // broadcastTransform("fixed_link", "forward_x", );
        // broadcastTransform("fixed_link", "forward_x_up_z", );
        // broadcastTransform("fixed_link", "forward_x_up_z_180z", );

    } catch (tf2::TransformException &ex) {
    }
}