;; Auto-generated. Do not edit!


(when (boundp 'optimise::CostFunction)
  (if (not (find-package "OPTIMISE"))
    (make-package "OPTIMISE"))
  (shadow 'CostFunction (find-package "OPTIMISE")))
(unless (find-package "OPTIMISE::COSTFUNCTION")
  (make-package "OPTIMISE::COSTFUNCTION"))
(unless (find-package "OPTIMISE::COSTFUNCTIONREQUEST")
  (make-package "OPTIMISE::COSTFUNCTIONREQUEST"))
(unless (find-package "OPTIMISE::COSTFUNCTIONRESPONSE")
  (make-package "OPTIMISE::COSTFUNCTIONRESPONSE"))

(in-package "ROS")





(defclass optimise::CostFunctionRequest
  :super ros::object
  :slots (_x _y ))

(defmethod optimise::CostFunctionRequest
  (:init
   (&key
    ((:x __x) 0.0)
    ((:y __y) 0.0)
    )
   (send-super :init)
   (setq _x (float __x))
   (setq _y (float __y))
   self)
  (:x
   (&optional __x)
   (if __x (setq _x __x)) _x)
  (:y
   (&optional __y)
   (if __y (setq _y __y)) _y)
  (:serialization-length
   ()
   (+
    ;; float64 _x
    8
    ;; float64 _y
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float64 _x
       (sys::poke _x (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _y
       (sys::poke _y (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float64 _x
     (setq _x (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _y
     (setq _y (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;;
   self)
  )

(defclass optimise::CostFunctionResponse
  :super ros::object
  :slots (_cost ))

(defmethod optimise::CostFunctionResponse
  (:init
   (&key
    ((:cost __cost) 0.0)
    )
   (send-super :init)
   (setq _cost (float __cost))
   self)
  (:cost
   (&optional __cost)
   (if __cost (setq _cost __cost)) _cost)
  (:serialization-length
   ()
   (+
    ;; float64 _cost
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float64 _cost
       (sys::poke _cost (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float64 _cost
     (setq _cost (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;;
   self)
  )

(defclass optimise::CostFunction
  :super ros::object
  :slots ())

(setf (get optimise::CostFunction :md5sum-) "3f4f5634292139671f479e48c91f474f")
(setf (get optimise::CostFunction :datatype-) "optimise/CostFunction")
(setf (get optimise::CostFunction :request) optimise::CostFunctionRequest)
(setf (get optimise::CostFunction :response) optimise::CostFunctionResponse)

(defmethod optimise::CostFunctionRequest
  (:response () (instance optimise::CostFunctionResponse :init)))

(setf (get optimise::CostFunctionRequest :md5sum-) "3f4f5634292139671f479e48c91f474f")
(setf (get optimise::CostFunctionRequest :datatype-) "optimise/CostFunctionRequest")
(setf (get optimise::CostFunctionRequest :definition-)
      "float64 x
float64 y
---
float64 cost

")

(setf (get optimise::CostFunctionResponse :md5sum-) "3f4f5634292139671f479e48c91f474f")
(setf (get optimise::CostFunctionResponse :datatype-) "optimise/CostFunctionResponse")
(setf (get optimise::CostFunctionResponse :definition-)
      "float64 x
float64 y
---
float64 cost

")



(provide :optimise/CostFunction "3f4f5634292139671f479e48c91f474f")


