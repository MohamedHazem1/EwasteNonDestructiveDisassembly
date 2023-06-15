#!/usr/bin/env python
# license removed for brevity
import rospy
from std_msgs.msg import String
from std_msgs.msg import Int64
from std_msgs.msg import Bool
from geometry_msgs.msg import Wrench , WrenchStamped


# Delay between previous and current sensor readings
ftSensor_delay = 0.5  # 500 ms

# Variables to store previous and current readings
ftSensor_previousReading = 0
ftSensor_currentReading = 0

# The range of readings that indicates near constant reading
ftSensor_epsilon = 0

# A counter to check failure every specific period without adding an extra rospy.sleep()
unscrewingFailure_counter = 0
# The max number that the counter reaches when unscrewing fails
# ftSensor_delay multiplied by 120
unscrewingFailure_max = (ftSensor_delay) * 60

# .data for publishing
False_data = Bool()
True_data = Bool()
True_data.data = True
False_data.data = False

# Global variable that contains the .data for the start flag
startUnscrewing_Flag = False

def ftCallback(ftSensor_incomingReading):
    
    # Update sensor readings
    ftSensor_currentReading = ftSensor_incomingReading.wrench.force.z
    # rospy.loginfo("ftSensor_currentReading = %f" , ftSensor_currentReading)


def startUnscrewing_Callback(startUnscrewing):
    rospy.loginfo("entered startUnscrewing_Callback")
    global startUnscrewing_Flag
    startUnscrewing_Flag = startUnscrewing.data
    if startUnscrewing_Flag is True:
        # rospy.loginfo("startUnscrewing is True")
        motorPub.publish(True_data)
    else:
        rospy.loginfo("Didn't enter checkReadings")




def checkReadings():
    global unscrewingFailure_counter, unscrewingFailure_max, ftSensor_previousReading, ftSensor_currentReading, ftSensor_epsilon
    rospy.loginfo("entered checkReadings")

    # Check current reading aganist previous readings every "ftSensor_delay" seconds
    rospy.sleep(ftSensor_delay)
    unscrewingFailure_counter += 1
    # If the difference between readings is < epsilon then the bolt isn't going upwards anymore and unscrewing is done
    if abs(ftSensor_currentReading-ftSensor_previousReading) < ftSensor_epsilon:
        rospy.loginfo("Finished Unscrewing <3")

        motorPub.publish(False_data)
        unscrewingPub.publish(True_data)
    if unscrewingFailure_counter == unscrewingFailure_max:
        motorPub.publish(False_data)
        unscrewingPub.publish(False_data)
        unscrewingFailure_counter = 0
        rospy.loginfo("Unscrewing Failed")

    ftSensor_previousReading = ftSensor_currentReading


if __name__ == '__main__':
    try:
        rospy.init_node('unscrewing', anonymous=True)
        unscrewingPub = rospy.Publisher('UnscrewingDone', Bool, queue_size=1)
        motorPub = rospy.Publisher('DCMotorControl', Bool, queue_size=1)
        rospy.Subscriber("ft_sensor_wrench/wrench/raw", WrenchStamped, ftCallback)
        rospy.Subscriber("UnscrewingStartFlag", Bool, startUnscrewing_Callback)
        # rate = rospy.Rate(10)  # 10hz
        while not rospy.is_shutdown():
            if startUnscrewing_Flag is True:
                checkReadings()
           
            # rate.sleep()
        
    except rospy.ROSInterruptException:
        pass
