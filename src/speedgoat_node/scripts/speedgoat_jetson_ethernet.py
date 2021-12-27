#!/usr/bin/env python
"""speedgoat_jetson_ehternet.py

This script demonstrates how to communicate between speedgoat and jetson with ethernet
"""



# Python libs
import sys
import time
import socket

# numpy and scipy
import numpy as np

# Ros libraries
import roslib
import rospy

# Ros Messages

# speedgoat IP and Port
HOST = '10.10.10.2'
PORT = 8001

class speedgoat(object):

    def __init__(self):
        '''Initialize ros publisher, ros subscriber'''
        # topic where we publish
        self.image_pub = rospy.Publisher("/output/image/compressed", CompressedImage, queue_size = 1)
        # self.bridge = CvBridge()

        # subscribed Topic
        self.subscriber = rospy.Subscriber("/usb_cam/image_raw/compressed",
            CompressedImage, self.callback,  queue_size = 1)
        model = 'yolov3-608'
        category_num = 80
        letter_box = False

        if category_num <= 0:
            raise SystemExit('ERROR: bad category_num (%d)!' % category_num)
        if not os.path.isfile('yolo/%s.trt' % model):
            raise SystemExit('ERROR: file (yolo/%s.trt) not found!' % model)

        self.cls_dict = get_cls_dict(category_num)
        self.vis = BBoxVisualization(self.cls_dict)
        h, w = get_input_shape(model)

        self.cuda_ctx = cuda.Device(0).make_context()
        self.trt_yolo = TrtYOLO(model, (h, w), category_num, letter_box)

        if VERBOSE :
            print("subscribed to /usb_cam/image_raw/compressed")

    def callback(self, ros_data):
        '''Callback function of subscribed topic. 
        Here images get converted and features detected'''
        if VERBOSE :
            print('received image of type: "%s"' % ros_data.format)

        np_arr = np.fromstring(ros_data.data, np.uint8)
        image_cv = cv2.imdecode(np_arr, cv2.IMREAD_COLOR) # OpenCV >= 3.0:
        
        # cv_img = self.bridge.imgmsg_to_cv2(ros_img, desired_encoding="bgr8")
        if image_cv is not None:
            self.cuda_ctx.push()
            boxes, confs, clss = self.trt_yolo.detect(image_cv, conf_th=0.3)
            self.cuda_ctx.pop()
            img = self.vis.draw_bboxes(image_cv, boxes, confs, clss)
            cv2.imshow(WINDOW_NAME, img)
            cv2.waitKey(2)

        #### Create CompressedIamge ####
        msg = CompressedImage()
        msg.header.stamp = rospy.Time.now()
        msg.format = "jpeg"
        msg.data = np.array(cv2.imencode('.jpg', image_cv)[1]).tostring()
        # Publish new image
        self.image_pub.publish(msg)
        
        #self.subscriber.unregister()

def main():
    
    '''Initializes and cleanup ros node'''
    yolo = detect_image()
    rospy.init_node('detect_image', anonymous=True)
    try:
        rospy.spin()
    except KeyboardInterrupt:
        rospy.on_shutdown(yolo.clean_up())
        print("Shutting down ROS Image feature detector module")
        
    cv2.destroyAllWindows()

if __name__ == '__main__':
    main()
