# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from abb_rapid_msgs/ConfData.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class ConfData(genpy.Message):
  _md5sum = "21f1129f94cd63dd0cdf33be2bddc75e"
  _type = "abb_rapid_msgs/ConfData"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """#-------------------------------------------------------------------------------
# Description:
#   The purpose of this message definition, is to represent the
#   RAPID data type "confdata" (robot configuration data).
#
# Note:
#   Please see the "Technical reference manual - RAPID Instructions,
#   Functions and Data types" for more details.
#-------------------------------------------------------------------------------

#-------------------------------------------------------------------------------
# Message fields
#-------------------------------------------------------------------------------
# Rotating axis:
# - The current quadrant of axis 1, 4 and 6,
#   expressed as a positive or negative integer.
# Linear axis:
# - The current meter interval of axis 1, 4 and 6,
#   expressed as a positive or negative integer.
float32 cf1
float32 cf4
float32 cf6

# Rotating axis:
# - For serial link robots, the current robot configuration,
#   expressed as an integer in the range from 0 to 7.
# - For SCARA robots, the current robot configuration,
#   expressed as an integer in the range from 0 to 1.
# - For 7-axis robots, the current robot configuration,
#   expressed as an integer in the range from 0 to 7.
# - For paint robots, the current quadrant of axis 5,
#   expressed as a positive or negative integer.
# - For other robots, using the current quadrant of axis 2,
#   expressed as a positive or negative integer.
# Linear axis:
# - The current meter interval of axis 2,
#   expressed as a positive or negative integer.
float32 cfx
"""
  __slots__ = ['cf1','cf4','cf6','cfx']
  _slot_types = ['float32','float32','float32','float32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       cf1,cf4,cf6,cfx

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ConfData, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.cf1 is None:
        self.cf1 = 0.
      if self.cf4 is None:
        self.cf4 = 0.
      if self.cf6 is None:
        self.cf6 = 0.
      if self.cfx is None:
        self.cfx = 0.
    else:
      self.cf1 = 0.
      self.cf4 = 0.
      self.cf6 = 0.
      self.cfx = 0.

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
      buff.write(_get_struct_4f().pack(_x.cf1, _x.cf4, _x.cf6, _x.cfx))
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
      end = 0
      _x = self
      start = end
      end += 16
      (_x.cf1, _x.cf4, _x.cf6, _x.cfx,) = _get_struct_4f().unpack(str[start:end])
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
      buff.write(_get_struct_4f().pack(_x.cf1, _x.cf4, _x.cf6, _x.cfx))
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
      end = 0
      _x = self
      start = end
      end += 16
      (_x.cf1, _x.cf4, _x.cf6, _x.cfx,) = _get_struct_4f().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_4f = None
def _get_struct_4f():
    global _struct_4f
    if _struct_4f is None:
        _struct_4f = struct.Struct("<4f")
    return _struct_4f
