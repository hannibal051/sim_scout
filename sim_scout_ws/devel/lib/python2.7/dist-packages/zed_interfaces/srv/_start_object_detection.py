# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from zed_interfaces/start_object_detectionRequest.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class start_object_detectionRequest(genpy.Message):
  _md5sum = "d390c3c6cd39e296e71a58be92b33ec6"
  _type = "zed_interfaces/start_object_detectionRequest"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """


float32 confidence


bool tracking


bool people


bool vehicles



"""
  __slots__ = ['confidence','tracking','people','vehicles']
  _slot_types = ['float32','bool','bool','bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       confidence,tracking,people,vehicles

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(start_object_detectionRequest, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.confidence is None:
        self.confidence = 0.
      if self.tracking is None:
        self.tracking = False
      if self.people is None:
        self.people = False
      if self.vehicles is None:
        self.vehicles = False
    else:
      self.confidence = 0.
      self.tracking = False
      self.people = False
      self.vehicles = False

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
      buff.write(_get_struct_f3B().pack(_x.confidence, _x.tracking, _x.people, _x.vehicles))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 7
      (_x.confidence, _x.tracking, _x.people, _x.vehicles,) = _get_struct_f3B().unpack(str[start:end])
      self.tracking = bool(self.tracking)
      self.people = bool(self.people)
      self.vehicles = bool(self.vehicles)
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
      buff.write(_get_struct_f3B().pack(_x.confidence, _x.tracking, _x.people, _x.vehicles))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 7
      (_x.confidence, _x.tracking, _x.people, _x.vehicles,) = _get_struct_f3B().unpack(str[start:end])
      self.tracking = bool(self.tracking)
      self.people = bool(self.people)
      self.vehicles = bool(self.vehicles)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_f3B = None
def _get_struct_f3B():
    global _struct_f3B
    if _struct_f3B is None:
        _struct_f3B = struct.Struct("<f3B")
    return _struct_f3B
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from zed_interfaces/start_object_detectionResponse.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class start_object_detectionResponse(genpy.Message):
  _md5sum = "89bb254424e4cffedbf494e7b0ddbfea"
  _type = "zed_interfaces/start_object_detectionResponse"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """bool done

"""
  __slots__ = ['done']
  _slot_types = ['bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       done

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(start_object_detectionResponse, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.done is None:
        self.done = False
    else:
      self.done = False

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
      _x = self.done
      buff.write(_get_struct_B().pack(_x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      start = end
      end += 1
      (self.done,) = _get_struct_B().unpack(str[start:end])
      self.done = bool(self.done)
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
      _x = self.done
      buff.write(_get_struct_B().pack(_x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      start = end
      end += 1
      (self.done,) = _get_struct_B().unpack(str[start:end])
      self.done = bool(self.done)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_B = None
def _get_struct_B():
    global _struct_B
    if _struct_B is None:
        _struct_B = struct.Struct("<B")
    return _struct_B
class start_object_detection(object):
  _type          = 'zed_interfaces/start_object_detection'
  _md5sum = '3dc3fed99897ebf70695916b3c7b7cdd'
  _request_class  = start_object_detectionRequest
  _response_class = start_object_detectionResponse
