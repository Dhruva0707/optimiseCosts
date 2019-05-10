
(cl:in-package :asdf)

(defsystem "optimise-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "parameter_values" :depends-on ("_package_parameter_values"))
    (:file "_package_parameter_values" :depends-on ("_package"))
  ))