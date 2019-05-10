
(cl:in-package :asdf)

(defsystem "optimise-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "CostFunction" :depends-on ("_package_CostFunction"))
    (:file "_package_CostFunction" :depends-on ("_package"))
  ))