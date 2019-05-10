;; Auto-generated. Do not edit!


(when (boundp 'optimise::parameter_values)
  (if (not (find-package "OPTIMISE"))
    (make-package "OPTIMISE"))
  (shadow 'parameter_values (find-package "OPTIMISE")))
(unless (find-package "OPTIMISE::PARAMETER_VALUES")
  (make-package "OPTIMISE::PARAMETER_VALUES"))

(in-package "ROS")
;;//! \htmlinclude parameter_values.msg.html


(defclass optimise::parameter_values
  :super ros::object
  :slots (_x _y ))

(defmethod optimise::parameter_values
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

(setf (get optimise::parameter_values :md5sum-) "209f516d3eb691f0663e25cb750d67c1")
(setf (get optimise::parameter_values :datatype-) "optimise/parameter_values")
(setf (get optimise::parameter_values :definition-)
      "float64 x
float64 y


")



(provide :optimise/parameter_values "209f516d3eb691f0663e25cb750d67c1")


