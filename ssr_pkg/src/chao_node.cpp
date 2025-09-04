#include <ros/ros.h>
#include<std_msgs/String.h>

int main(int argc, char  *argv[])
{
    ros::init(argc,argv,"chao_node");
    printf("Hello world");
    ros::NodeHandle nh;
    ros::Publisher pub = nh.advertise<std_msgs::String>("ENGLISH",10);
    ros::Rate loop_rate(10);

    while(ros::ok())
    {
        printf("1\n");
        std_msgs::String msg;
        msg.data = "成败一时，不可丧志";
        pub.publish(msg);
        loop_rate.sleep();
    }
    return 0;
}
