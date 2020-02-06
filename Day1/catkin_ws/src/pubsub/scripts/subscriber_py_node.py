#!/usr/bin/env python

import rospy
from std_msgs.msg import Int32

def callback(data):
    rospy.loginfo("Hello ROS {}".format(data.data))

def listener():
    rospy.init_node('subscriber_node', anonymous=True)
    rospy.Subscriber("/helloros_topic", Int32, callback)
    rospy.spin()

if __name__ == '__main__':
    listener()
