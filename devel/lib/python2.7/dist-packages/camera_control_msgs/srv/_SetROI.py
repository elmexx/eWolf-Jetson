# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from camera_control_msgs/SetROIRequest.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import sensor_msgs.msg

class SetROIRequest(genpy.Message):
  _md5sum = "cf55ea464b4556def55bfcda0d3eab55"
  _type = "camera_control_msgs/SetROIRequest"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """# Select a region of interest to get a cropped image.
# The region is defined by four parameters
# roi.width: with of the region
# roi.height: height of the region
# roi.x_offset at which pixel a long the x axis (horizontal) does the
# cropped region start
# roi.y_offset at which pixel a long the y axis (vertical) does the
# cropped region start
# The cropped image will then be Image[y_offset:y_offset+vertical, x_offset:x_offset+horizontal]
# Notice that x_offset cannot be larger than img.width - roi.width
# The same for y_offset, not larger than img.height - roi.height
sensor_msgs/RegionOfInterest target_roi


================================================================================
MSG: sensor_msgs/RegionOfInterest
# This message is used to specify a region of interest within an image.
#
# When used to specify the ROI setting of the camera when the image was
# taken, the height and width fields should either match the height and
# width fields for the associated image; or height = width = 0
# indicates that the full resolution image was captured.

uint32 x_offset  # Leftmost pixel of the ROI
                 # (0 if the ROI includes the left edge of the image)
uint32 y_offset  # Topmost pixel of the ROI
                 # (0 if the ROI includes the top edge of the image)
uint32 height    # Height of ROI
uint32 width     # Width of ROI

# True if a distinct rectified ROI should be calculated from the "raw"
# ROI in this message. Typically this should be False if the full image
# is captured (ROI not used), and True if a subwindow is captured (ROI
# used).
bool do_rectify
"""
  __slots__ = ['target_roi']
  _slot_types = ['sensor_msgs/RegionOfInterest']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       target_roi

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(SetROIRequest, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.target_roi is None:
        self.target_roi = sensor_msgs.msg.RegionOfInterest()
    else:
      self.target_roi = sensor_msgs.msg.RegionOfInterest()

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_4IB().pack(_x.target_roi.x_offset, _x.target_roi.y_offset, _x.target_roi.height, _x.target_roi.width, _x.target_roi.do_rectify))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.target_roi is None:
        self.target_roi = sensor_msgs.msg.RegionOfInterest()
      end = 0
      _x = self
      start = end
      end += 17
      (_x.target_roi.x_offset, _x.target_roi.y_offset, _x.target_roi.height, _x.target_roi.width, _x.target_roi.do_rectify,) = _get_struct_4IB().unpack(str[start:end])
      self.target_roi.do_rectify = bool(self.target_roi.do_rectify)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_4IB().pack(_x.target_roi.x_offset, _x.target_roi.y_offset, _x.target_roi.height, _x.target_roi.width, _x.target_roi.do_rectify))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.target_roi is None:
        self.target_roi = sensor_msgs.msg.RegionOfInterest()
      end = 0
      _x = self
      start = end
      end += 17
      (_x.target_roi.x_offset, _x.target_roi.y_offset, _x.target_roi.height, _x.target_roi.width, _x.target_roi.do_rectify,) = _get_struct_4IB().unpack(str[start:end])
      self.target_roi.do_rectify = bool(self.target_roi.do_rectify)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_4IB = None
def _get_struct_4IB():
    global _struct_4IB
    if _struct_4IB is None:
        _struct_4IB = struct.Struct("<4IB")
    return _struct_4IB
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from camera_control_msgs/SetROIResponse.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import sensor_msgs.msg

class SetROIResponse(genpy.Message):
  _md5sum = "70a557e11203ac25f1a7d115b99d7d9b"
  _type = "camera_control_msgs/SetROIResponse"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """# Exact match can not always reached
sensor_msgs/RegionOfInterest reached_roi
bool success


================================================================================
MSG: sensor_msgs/RegionOfInterest
# This message is used to specify a region of interest within an image.
#
# When used to specify the ROI setting of the camera when the image was
# taken, the height and width fields should either match the height and
# width fields for the associated image; or height = width = 0
# indicates that the full resolution image was captured.

uint32 x_offset  # Leftmost pixel of the ROI
                 # (0 if the ROI includes the left edge of the image)
uint32 y_offset  # Topmost pixel of the ROI
                 # (0 if the ROI includes the top edge of the image)
uint32 height    # Height of ROI
uint32 width     # Width of ROI

# True if a distinct rectified ROI should be calculated from the "raw"
# ROI in this message. Typically this should be False if the full image
# is captured (ROI not used), and True if a subwindow is captured (ROI
# used).
bool do_rectify
"""
  __slots__ = ['reached_roi','success']
  _slot_types = ['sensor_msgs/RegionOfInterest','bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       reached_roi,success

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(SetROIResponse, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.reached_roi is None:
        self.reached_roi = sensor_msgs.msg.RegionOfInterest()
      if self.success is None:
        self.success = False
    else:
      self.reached_roi = sensor_msgs.msg.RegionOfInterest()
      self.success = False

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_4I2B().pack(_x.reached_roi.x_offset, _x.reached_roi.y_offset, _x.reached_roi.height, _x.reached_roi.width, _x.reached_roi.do_rectify, _x.success))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.reached_roi is None:
        self.reached_roi = sensor_msgs.msg.RegionOfInterest()
      end = 0
      _x = self
      start = end
      end += 18
      (_x.reached_roi.x_offset, _x.reached_roi.y_offset, _x.reached_roi.height, _x.reached_roi.width, _x.reached_roi.do_rectify, _x.success,) = _get_struct_4I2B().unpack(str[start:end])
      self.reached_roi.do_rectify = bool(self.reached_roi.do_rectify)
      self.success = bool(self.success)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_4I2B().pack(_x.reached_roi.x_offset, _x.reached_roi.y_offset, _x.reached_roi.height, _x.reached_roi.width, _x.reached_roi.do_rectify, _x.success))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.reached_roi is None:
        self.reached_roi = sensor_msgs.msg.RegionOfInterest()
      end = 0
      _x = self
      start = end
      end += 18
      (_x.reached_roi.x_offset, _x.reached_roi.y_offset, _x.reached_roi.height, _x.reached_roi.width, _x.reached_roi.do_rectify, _x.success,) = _get_struct_4I2B().unpack(str[start:end])
      self.reached_roi.do_rectify = bool(self.reached_roi.do_rectify)
      self.success = bool(self.success)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_4I2B = None
def _get_struct_4I2B():
    global _struct_4I2B
    if _struct_4I2B is None:
        _struct_4I2B = struct.Struct("<4I2B")
    return _struct_4I2B
class SetROI(object):
  _type          = 'camera_control_msgs/SetROI'
  _md5sum = '58d19177e6121352c4bf9021da422622'
  _request_class  = SetROIRequest
  _response_class = SetROIResponse
