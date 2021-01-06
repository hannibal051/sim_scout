// Auto-generated. Do not edit!

// (in-package sick_scan.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let RadarPreHeader = require('./RadarPreHeader.js');
let RadarObject = require('./RadarObject.js');
let sensor_msgs = _finder('sensor_msgs');
let std_msgs = _finder('std_msgs');

//-----------------------------------------------------------

class RadarScan {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.radarPreHeader = null;
      this.targets = null;
      this.objects = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('radarPreHeader')) {
        this.radarPreHeader = initObj.radarPreHeader
      }
      else {
        this.radarPreHeader = new RadarPreHeader();
      }
      if (initObj.hasOwnProperty('targets')) {
        this.targets = initObj.targets
      }
      else {
        this.targets = new sensor_msgs.msg.PointCloud2();
      }
      if (initObj.hasOwnProperty('objects')) {
        this.objects = initObj.objects
      }
      else {
        this.objects = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type RadarScan
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [radarPreHeader]
    bufferOffset = RadarPreHeader.serialize(obj.radarPreHeader, buffer, bufferOffset);
    // Serialize message field [targets]
    bufferOffset = sensor_msgs.msg.PointCloud2.serialize(obj.targets, buffer, bufferOffset);
    // Serialize message field [objects]
    // Serialize the length for message field [objects]
    bufferOffset = _serializer.uint32(obj.objects.length, buffer, bufferOffset);
    obj.objects.forEach((val) => {
      bufferOffset = RadarObject.serialize(val, buffer, bufferOffset);
    });
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type RadarScan
    let len;
    let data = new RadarScan(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [radarPreHeader]
    data.radarPreHeader = RadarPreHeader.deserialize(buffer, bufferOffset);
    // Deserialize message field [targets]
    data.targets = sensor_msgs.msg.PointCloud2.deserialize(buffer, bufferOffset);
    // Deserialize message field [objects]
    // Deserialize array length for message field [objects]
    len = _deserializer.uint32(buffer, bufferOffset);
    data.objects = new Array(len);
    for (let i = 0; i < len; ++i) {
      data.objects[i] = RadarObject.deserialize(buffer, bufferOffset)
    }
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    length += RadarPreHeader.getMessageSize(object.radarPreHeader);
    length += sensor_msgs.msg.PointCloud2.getMessageSize(object.targets);
    object.objects.forEach((val) => {
      length += RadarObject.getMessageSize(val);
    });
    return length + 4;
  }

  static datatype() {
    // Returns string type for a message object
    return 'sick_scan/RadarScan';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'db9483dce93673bbf6148baa3d967315';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    #
    # The message is divided into three parts:
    # 1. Header: containing information about general radar parameters
    # 2. RawTargets: List of targets containing maximum values in the range-doppler-matrix - used for tracking
    # 3. Objects: List of objects generated by the internal tracking algorithm - based on raw targets
    Header header
    RadarPreHeader radarPreHeader
    sensor_msgs/PointCloud2 targets
    sick_scan/RadarObject[] objects
    ================================================================================
    MSG: std_msgs/Header
    # Standard metadata for higher-level stamped data types.
    # This is generally used to communicate timestamped data 
    # in a particular coordinate frame.
    # 
    # sequence ID: consecutively increasing ID 
    uint32 seq
    #Two-integer timestamp that is expressed as:
    # * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
    # * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
    # time-handling sugar is provided by the client library
    time stamp
    #Frame this data is associated with
    # 0: no frame
    # 1: global frame
    string frame_id
    
    ================================================================================
    MSG: sick_scan/RadarPreHeader
    # Version information for this whole structure (MeasurementData)
    uint16 uiVersionNo
    sick_scan/RadarPreHeaderDeviceBlock radarPreHeaderDeviceBlock
    sick_scan/RadarPreHeaderStatusBlock radarPreHeaderStatusBlock
    sick_scan/RadarPreHeaderMeasurementParam1Block radarPreHeaderMeasurementParam1Block
    sick_scan/RadarPreHeaderEncoderBlock[] radarPreHeaderArrayEncoderBlock
    
    
    ================================================================================
    MSG: sick_scan/RadarPreHeaderDeviceBlock
    #
    #
    #
    #
    
    # Logical number of the device"
    uint32 uiIdent
    # Serial number of the device
    uint32 udiSerialNo
    # State of the device
    bool bDeviceError
    # Contamination Warning
    bool bContaminationWarning
    # Contamination Error
    bool bContaminationError
    ================================================================================
    MSG: sick_scan/RadarPreHeaderStatusBlock
    #
    #
    #
    uint32 uiTelegramCount # telegram number
    uint32 uiCycleCount # "scan number"
    uint32 udiSystemCountScan # system time since power on of scan gen. [us]
    uint32 udiSystemCountTransmit # system time since power on of scan transmission [us]
    uint16 uiInputs # state of digital inputs
    uint16 uiOutputs # state of digital outputs
    
    ================================================================================
    MSG: sick_scan/RadarPreHeaderMeasurementParam1Block
    uint32 uiCycleDuration # Time in microseconds to detect this items
    uint32 uiNoiseLevel # [1/100dB]
    
    ================================================================================
    MSG: sick_scan/RadarPreHeaderEncoderBlock
    # Array with connected encoder sensors
    uint32 udiEncoderPos  # encoder position [inc]
    int16 iEncoderSpeed   # encoder speed [inc/mm]
    ================================================================================
    MSG: sensor_msgs/PointCloud2
    # This message holds a collection of N-dimensional points, which may
    # contain additional information such as normals, intensity, etc. The
    # point data is stored as a binary blob, its layout described by the
    # contents of the "fields" array.
    
    # The point cloud data may be organized 2d (image-like) or 1d
    # (unordered). Point clouds organized as 2d images may be produced by
    # camera depth sensors such as stereo or time-of-flight.
    
    # Time of sensor data acquisition, and the coordinate frame ID (for 3d
    # points).
    Header header
    
    # 2D structure of the point cloud. If the cloud is unordered, height is
    # 1 and width is the length of the point cloud.
    uint32 height
    uint32 width
    
    # Describes the channels and their layout in the binary data blob.
    PointField[] fields
    
    bool    is_bigendian # Is this data bigendian?
    uint32  point_step   # Length of a point in bytes
    uint32  row_step     # Length of a row in bytes
    uint8[] data         # Actual point data, size is (row_step*height)
    
    bool is_dense        # True if there are no invalid points
    
    ================================================================================
    MSG: sensor_msgs/PointField
    # This message holds the description of one point entry in the
    # PointCloud2 message format.
    uint8 INT8    = 1
    uint8 UINT8   = 2
    uint8 INT16   = 3
    uint8 UINT16  = 4
    uint8 INT32   = 5
    uint8 UINT32  = 6
    uint8 FLOAT32 = 7
    uint8 FLOAT64 = 8
    
    string name      # Name of field
    uint32 offset    # Offset from start of point struct
    uint8  datatype  # Datatype enumeration, see above
    uint32 count     # How many elements in the field
    
    ================================================================================
    MSG: sick_scan/RadarObject
    int32 id
    
    time tracking_time                          # since when the object is tracked
    time last_seen
    
    geometry_msgs/TwistWithCovariance velocity
    
    geometry_msgs/Pose bounding_box_center
    geometry_msgs/Vector3 bounding_box_size
    
    geometry_msgs/PoseWithCovariance object_box_center
    geometry_msgs/Vector3 object_box_size
    
    geometry_msgs/Point[] contour_points
    
    ================================================================================
    MSG: geometry_msgs/TwistWithCovariance
    # This expresses velocity in free space with uncertainty.
    
    Twist twist
    
    # Row-major representation of the 6x6 covariance matrix
    # The orientation parameters use a fixed-axis representation.
    # In order, the parameters are:
    # (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)
    float64[36] covariance
    
    ================================================================================
    MSG: geometry_msgs/Twist
    # This expresses velocity in free space broken into its linear and angular parts.
    Vector3  linear
    Vector3  angular
    
    ================================================================================
    MSG: geometry_msgs/Vector3
    # This represents a vector in free space. 
    # It is only meant to represent a direction. Therefore, it does not
    # make sense to apply a translation to it (e.g., when applying a 
    # generic rigid transformation to a Vector3, tf2 will only apply the
    # rotation). If you want your data to be translatable too, use the
    # geometry_msgs/Point message instead.
    
    float64 x
    float64 y
    float64 z
    ================================================================================
    MSG: geometry_msgs/Pose
    # A representation of pose in free space, composed of position and orientation. 
    Point position
    Quaternion orientation
    
    ================================================================================
    MSG: geometry_msgs/Point
    # This contains the position of a point in free space
    float64 x
    float64 y
    float64 z
    
    ================================================================================
    MSG: geometry_msgs/Quaternion
    # This represents an orientation in free space in quaternion form.
    
    float64 x
    float64 y
    float64 z
    float64 w
    
    ================================================================================
    MSG: geometry_msgs/PoseWithCovariance
    # This represents a pose in free space with uncertainty.
    
    Pose pose
    
    # Row-major representation of the 6x6 covariance matrix
    # The orientation parameters use a fixed-axis representation.
    # In order, the parameters are:
    # (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)
    float64[36] covariance
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new RadarScan(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.radarPreHeader !== undefined) {
      resolved.radarPreHeader = RadarPreHeader.Resolve(msg.radarPreHeader)
    }
    else {
      resolved.radarPreHeader = new RadarPreHeader()
    }

    if (msg.targets !== undefined) {
      resolved.targets = sensor_msgs.msg.PointCloud2.Resolve(msg.targets)
    }
    else {
      resolved.targets = new sensor_msgs.msg.PointCloud2()
    }

    if (msg.objects !== undefined) {
      resolved.objects = new Array(msg.objects.length);
      for (let i = 0; i < resolved.objects.length; ++i) {
        resolved.objects[i] = RadarObject.Resolve(msg.objects[i]);
      }
    }
    else {
      resolved.objects = []
    }

    return resolved;
    }
};

module.exports = RadarScan;
