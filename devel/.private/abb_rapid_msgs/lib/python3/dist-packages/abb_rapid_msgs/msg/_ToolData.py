# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from abb_rapid_msgs/ToolData.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import abb_rapid_msgs.msg

class ToolData(genpy.Message):
  _md5sum = "2d526e4dd17e28147b27f746cf88c5b6"
  _type = "abb_rapid_msgs/ToolData"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """#-------------------------------------------------------------------------------
# Description:
#   The purpose of this message definition, is to represent the
#   RAPID data type "tooldata" (tool data).
#
# Note:
#   Please see the "Technical reference manual - RAPID Instructions,
#   Functions and Data types" for more details.
#-------------------------------------------------------------------------------

#-------------------------------------------------------------------------------
# Message fields
#-------------------------------------------------------------------------------
# Defines whether or not the robot is holding the tool:
# - TRUE: The robot is holding the tool.
# - FALSE: The robot is not holding the tool, that is, a stationary tool.
bool robhold

# The tool coordinate system, that is:
# - The position of the TCP (x, y and z) in mm,
#   expressed in the wrist coordinate system (tool0).
# - The orientation of the tool coordinate system,
#   expressed in the wrist coordinate system.
Pose tframe

# The load of the tool (if robot held tool).
# The load of the gripper holding the work object (if stationary tool).
LoadData tload

================================================================================
MSG: abb_rapid_msgs/Pose
#-------------------------------------------------------------------------------
# Description:
#   The purpose of this message definition, is to represent the
#   RAPID data type "pose" (coordinate transformations).
#
# Note:
#   Please see the "Technical reference manual - RAPID Instructions,
#   Functions and Data types" for more details.
#-------------------------------------------------------------------------------

#-------------------------------------------------------------------------------
# Message fields
#-------------------------------------------------------------------------------
# The displacement in position (x, y, and z) of the coordinate system.
Pos trans

# The rotation of the coordinate system.
Orient rot

================================================================================
MSG: abb_rapid_msgs/Pos
#-------------------------------------------------------------------------------
# Description:
#   The purpose of this message definition, is to represent the
#   RAPID data type "pos" (positions (only X, Y and Z)).
#
# Note:
#   Please see the "Technical reference manual - RAPID Instructions,
#   Functions and Data types" for more details.
#-------------------------------------------------------------------------------

#-------------------------------------------------------------------------------
# Message fields
#-------------------------------------------------------------------------------
# The x-, y- and z-value of the position.
float32 x
float32 y
float32 z

================================================================================
MSG: abb_rapid_msgs/Orient
#-------------------------------------------------------------------------------
# Description:
#   The purpose of this message definition, is to represent the
#   RAPID data type "orient" (orientation).
#
# Note:
#   Please see the "Technical reference manual - RAPID Instructions,
#   Functions and Data types" for more details.
#-------------------------------------------------------------------------------

#-------------------------------------------------------------------------------
# Message fields
#-------------------------------------------------------------------------------
# Quaternion 1-4.
float32 q1
float32 q2
float32 q3
float32 q4

================================================================================
MSG: abb_rapid_msgs/LoadData
#-------------------------------------------------------------------------------
# Description:
#   The purpose of this message definition, is to represent the
#   RAPID data type "loaddata" (load data).
#
# Note:
#   Please see the "Technical reference manual - RAPID Instructions,
#   Functions and Data types" for more details.
#-------------------------------------------------------------------------------

#-------------------------------------------------------------------------------
# Message fields
#-------------------------------------------------------------------------------
# The mass (weight) of the load in kg.
float32 mass

# The center of gravity of the payload, expressed in mm,
# in the tool coordinate system if the robot is holding the tool.
#
# If a stationary tool is used then the center of gravity for the payload
# held by the gripper is expressed in the object frame of the work object
# coordinate system moved by the robot.
Pos cog

# The orientation of the axes of moment.
#
# These are the principal axes of the payload
# moment of inertia with origin in cog.
#
# If the robot is holding the tool, the axes of moment
# are expressed in the tool coordinate system.
Orient aom

# The moment of inertia of the load around the x-, y- and z-axis,
# expressed in kgm^2.
float32 ix
float32 iy
float32 iz
"""
  __slots__ = ['robhold','tframe','tload']
  _slot_types = ['bool','abb_rapid_msgs/Pose','abb_rapid_msgs/LoadData']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       robhold,tframe,tload

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ToolData, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.robhold is None:
        self.robhold = False
      if self.tframe is None:
        self.tframe = abb_rapid_msgs.msg.Pose()
      if self.tload is None:
        self.tload = abb_rapid_msgs.msg.LoadData()
    else:
      self.robhold = False
      self.tframe = abb_rapid_msgs.msg.Pose()
      self.tload = abb_rapid_msgs.msg.LoadData()

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
      buff.write(_get_struct_B18f().pack(_x.robhold, _x.tframe.trans.x, _x.tframe.trans.y, _x.tframe.trans.z, _x.tframe.rot.q1, _x.tframe.rot.q2, _x.tframe.rot.q3, _x.tframe.rot.q4, _x.tload.mass, _x.tload.cog.x, _x.tload.cog.y, _x.tload.cog.z, _x.tload.aom.q1, _x.tload.aom.q2, _x.tload.aom.q3, _x.tload.aom.q4, _x.tload.ix, _x.tload.iy, _x.tload.iz))
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
      if self.tframe is None:
        self.tframe = abb_rapid_msgs.msg.Pose()
      if self.tload is None:
        self.tload = abb_rapid_msgs.msg.LoadData()
      end = 0
      _x = self
      start = end
      end += 73
      (_x.robhold, _x.tframe.trans.x, _x.tframe.trans.y, _x.tframe.trans.z, _x.tframe.rot.q1, _x.tframe.rot.q2, _x.tframe.rot.q3, _x.tframe.rot.q4, _x.tload.mass, _x.tload.cog.x, _x.tload.cog.y, _x.tload.cog.z, _x.tload.aom.q1, _x.tload.aom.q2, _x.tload.aom.q3, _x.tload.aom.q4, _x.tload.ix, _x.tload.iy, _x.tload.iz,) = _get_struct_B18f().unpack(str[start:end])
      self.robhold = bool(self.robhold)
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
      buff.write(_get_struct_B18f().pack(_x.robhold, _x.tframe.trans.x, _x.tframe.trans.y, _x.tframe.trans.z, _x.tframe.rot.q1, _x.tframe.rot.q2, _x.tframe.rot.q3, _x.tframe.rot.q4, _x.tload.mass, _x.tload.cog.x, _x.tload.cog.y, _x.tload.cog.z, _x.tload.aom.q1, _x.tload.aom.q2, _x.tload.aom.q3, _x.tload.aom.q4, _x.tload.ix, _x.tload.iy, _x.tload.iz))
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
      if self.tframe is None:
        self.tframe = abb_rapid_msgs.msg.Pose()
      if self.tload is None:
        self.tload = abb_rapid_msgs.msg.LoadData()
      end = 0
      _x = self
      start = end
      end += 73
      (_x.robhold, _x.tframe.trans.x, _x.tframe.trans.y, _x.tframe.trans.z, _x.tframe.rot.q1, _x.tframe.rot.q2, _x.tframe.rot.q3, _x.tframe.rot.q4, _x.tload.mass, _x.tload.cog.x, _x.tload.cog.y, _x.tload.cog.z, _x.tload.aom.q1, _x.tload.aom.q2, _x.tload.aom.q3, _x.tload.aom.q4, _x.tload.ix, _x.tload.iy, _x.tload.iz,) = _get_struct_B18f().unpack(str[start:end])
      self.robhold = bool(self.robhold)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_B18f = None
def _get_struct_B18f():
    global _struct_B18f
    if _struct_B18f is None:
        _struct_B18f = struct.Struct("<B18f")
    return _struct_B18f
