; Auto-generated. Do not edit!


(cl:in-package optimise-srv)


;//! \htmlinclude CostFunction-request.msg.html

(cl:defclass <CostFunction-request> (roslisp-msg-protocol:ros-message)
  ((x
    :reader x
    :initarg :x
    :type cl:float
    :initform 0.0)
   (y
    :reader y
    :initarg :y
    :type cl:float
    :initform 0.0))
)

(cl:defclass CostFunction-request (<CostFunction-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <CostFunction-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'CostFunction-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name optimise-srv:<CostFunction-request> is deprecated: use optimise-srv:CostFunction-request instead.")))

(cl:ensure-generic-function 'x-val :lambda-list '(m))
(cl:defmethod x-val ((m <CostFunction-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader optimise-srv:x-val is deprecated.  Use optimise-srv:x instead.")
  (x m))

(cl:ensure-generic-function 'y-val :lambda-list '(m))
(cl:defmethod y-val ((m <CostFunction-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader optimise-srv:y-val is deprecated.  Use optimise-srv:y instead.")
  (y m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <CostFunction-request>) ostream)
  "Serializes a message object of type '<CostFunction-request>"
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'x))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'y))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <CostFunction-request>) istream)
  "Deserializes a message object of type '<CostFunction-request>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'x) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'y) (roslisp-utils:decode-double-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<CostFunction-request>)))
  "Returns string type for a service object of type '<CostFunction-request>"
  "optimise/CostFunctionRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'CostFunction-request)))
  "Returns string type for a service object of type 'CostFunction-request"
  "optimise/CostFunctionRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<CostFunction-request>)))
  "Returns md5sum for a message object of type '<CostFunction-request>"
  "3f4f5634292139671f479e48c91f474f")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'CostFunction-request)))
  "Returns md5sum for a message object of type 'CostFunction-request"
  "3f4f5634292139671f479e48c91f474f")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<CostFunction-request>)))
  "Returns full string definition for message of type '<CostFunction-request>"
  (cl:format cl:nil "float64 x~%float64 y~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'CostFunction-request)))
  "Returns full string definition for message of type 'CostFunction-request"
  (cl:format cl:nil "float64 x~%float64 y~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <CostFunction-request>))
  (cl:+ 0
     8
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <CostFunction-request>))
  "Converts a ROS message object to a list"
  (cl:list 'CostFunction-request
    (cl:cons ':x (x msg))
    (cl:cons ':y (y msg))
))
;//! \htmlinclude CostFunction-response.msg.html

(cl:defclass <CostFunction-response> (roslisp-msg-protocol:ros-message)
  ((cost
    :reader cost
    :initarg :cost
    :type cl:float
    :initform 0.0))
)

(cl:defclass CostFunction-response (<CostFunction-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <CostFunction-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'CostFunction-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name optimise-srv:<CostFunction-response> is deprecated: use optimise-srv:CostFunction-response instead.")))

(cl:ensure-generic-function 'cost-val :lambda-list '(m))
(cl:defmethod cost-val ((m <CostFunction-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader optimise-srv:cost-val is deprecated.  Use optimise-srv:cost instead.")
  (cost m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <CostFunction-response>) ostream)
  "Serializes a message object of type '<CostFunction-response>"
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'cost))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <CostFunction-response>) istream)
  "Deserializes a message object of type '<CostFunction-response>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'cost) (roslisp-utils:decode-double-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<CostFunction-response>)))
  "Returns string type for a service object of type '<CostFunction-response>"
  "optimise/CostFunctionResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'CostFunction-response)))
  "Returns string type for a service object of type 'CostFunction-response"
  "optimise/CostFunctionResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<CostFunction-response>)))
  "Returns md5sum for a message object of type '<CostFunction-response>"
  "3f4f5634292139671f479e48c91f474f")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'CostFunction-response)))
  "Returns md5sum for a message object of type 'CostFunction-response"
  "3f4f5634292139671f479e48c91f474f")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<CostFunction-response>)))
  "Returns full string definition for message of type '<CostFunction-response>"
  (cl:format cl:nil "float64 cost~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'CostFunction-response)))
  "Returns full string definition for message of type 'CostFunction-response"
  (cl:format cl:nil "float64 cost~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <CostFunction-response>))
  (cl:+ 0
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <CostFunction-response>))
  "Converts a ROS message object to a list"
  (cl:list 'CostFunction-response
    (cl:cons ':cost (cost msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'CostFunction)))
  'CostFunction-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'CostFunction)))
  'CostFunction-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'CostFunction)))
  "Returns string type for a service object of type '<CostFunction>"
  "optimise/CostFunction")