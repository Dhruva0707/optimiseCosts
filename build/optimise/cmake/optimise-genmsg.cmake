# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "optimise: 1 messages, 1 services")

set(MSG_I_FLAGS "-Ioptimise:/home/dhruva/optimiseCosts/src/optimise/msg;-Istd_msgs:/opt/ros/kinetic/share/std_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(geneus REQUIRED)
find_package(genlisp REQUIRED)
find_package(gennodejs REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(optimise_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/dhruva/optimiseCosts/src/optimise/msg/parameter_values.msg" NAME_WE)
add_custom_target(_optimise_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "optimise" "/home/dhruva/optimiseCosts/src/optimise/msg/parameter_values.msg" ""
)

get_filename_component(_filename "/home/dhruva/optimiseCosts/src/optimise/srv/CostFunction.srv" NAME_WE)
add_custom_target(_optimise_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "optimise" "/home/dhruva/optimiseCosts/src/optimise/srv/CostFunction.srv" ""
)

#
#  langs = gencpp;geneus;genlisp;gennodejs;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(optimise
  "/home/dhruva/optimiseCosts/src/optimise/msg/parameter_values.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/optimise
)

### Generating Services
_generate_srv_cpp(optimise
  "/home/dhruva/optimiseCosts/src/optimise/srv/CostFunction.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/optimise
)

### Generating Module File
_generate_module_cpp(optimise
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/optimise
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(optimise_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(optimise_generate_messages optimise_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/dhruva/optimiseCosts/src/optimise/msg/parameter_values.msg" NAME_WE)
add_dependencies(optimise_generate_messages_cpp _optimise_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/dhruva/optimiseCosts/src/optimise/srv/CostFunction.srv" NAME_WE)
add_dependencies(optimise_generate_messages_cpp _optimise_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(optimise_gencpp)
add_dependencies(optimise_gencpp optimise_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS optimise_generate_messages_cpp)

### Section generating for lang: geneus
### Generating Messages
_generate_msg_eus(optimise
  "/home/dhruva/optimiseCosts/src/optimise/msg/parameter_values.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/optimise
)

### Generating Services
_generate_srv_eus(optimise
  "/home/dhruva/optimiseCosts/src/optimise/srv/CostFunction.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/optimise
)

### Generating Module File
_generate_module_eus(optimise
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/optimise
  "${ALL_GEN_OUTPUT_FILES_eus}"
)

add_custom_target(optimise_generate_messages_eus
  DEPENDS ${ALL_GEN_OUTPUT_FILES_eus}
)
add_dependencies(optimise_generate_messages optimise_generate_messages_eus)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/dhruva/optimiseCosts/src/optimise/msg/parameter_values.msg" NAME_WE)
add_dependencies(optimise_generate_messages_eus _optimise_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/dhruva/optimiseCosts/src/optimise/srv/CostFunction.srv" NAME_WE)
add_dependencies(optimise_generate_messages_eus _optimise_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(optimise_geneus)
add_dependencies(optimise_geneus optimise_generate_messages_eus)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS optimise_generate_messages_eus)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(optimise
  "/home/dhruva/optimiseCosts/src/optimise/msg/parameter_values.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/optimise
)

### Generating Services
_generate_srv_lisp(optimise
  "/home/dhruva/optimiseCosts/src/optimise/srv/CostFunction.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/optimise
)

### Generating Module File
_generate_module_lisp(optimise
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/optimise
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(optimise_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(optimise_generate_messages optimise_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/dhruva/optimiseCosts/src/optimise/msg/parameter_values.msg" NAME_WE)
add_dependencies(optimise_generate_messages_lisp _optimise_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/dhruva/optimiseCosts/src/optimise/srv/CostFunction.srv" NAME_WE)
add_dependencies(optimise_generate_messages_lisp _optimise_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(optimise_genlisp)
add_dependencies(optimise_genlisp optimise_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS optimise_generate_messages_lisp)

### Section generating for lang: gennodejs
### Generating Messages
_generate_msg_nodejs(optimise
  "/home/dhruva/optimiseCosts/src/optimise/msg/parameter_values.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/optimise
)

### Generating Services
_generate_srv_nodejs(optimise
  "/home/dhruva/optimiseCosts/src/optimise/srv/CostFunction.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/optimise
)

### Generating Module File
_generate_module_nodejs(optimise
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/optimise
  "${ALL_GEN_OUTPUT_FILES_nodejs}"
)

add_custom_target(optimise_generate_messages_nodejs
  DEPENDS ${ALL_GEN_OUTPUT_FILES_nodejs}
)
add_dependencies(optimise_generate_messages optimise_generate_messages_nodejs)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/dhruva/optimiseCosts/src/optimise/msg/parameter_values.msg" NAME_WE)
add_dependencies(optimise_generate_messages_nodejs _optimise_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/dhruva/optimiseCosts/src/optimise/srv/CostFunction.srv" NAME_WE)
add_dependencies(optimise_generate_messages_nodejs _optimise_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(optimise_gennodejs)
add_dependencies(optimise_gennodejs optimise_generate_messages_nodejs)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS optimise_generate_messages_nodejs)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(optimise
  "/home/dhruva/optimiseCosts/src/optimise/msg/parameter_values.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/optimise
)

### Generating Services
_generate_srv_py(optimise
  "/home/dhruva/optimiseCosts/src/optimise/srv/CostFunction.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/optimise
)

### Generating Module File
_generate_module_py(optimise
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/optimise
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(optimise_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(optimise_generate_messages optimise_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/dhruva/optimiseCosts/src/optimise/msg/parameter_values.msg" NAME_WE)
add_dependencies(optimise_generate_messages_py _optimise_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/dhruva/optimiseCosts/src/optimise/srv/CostFunction.srv" NAME_WE)
add_dependencies(optimise_generate_messages_py _optimise_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(optimise_genpy)
add_dependencies(optimise_genpy optimise_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS optimise_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/optimise)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/optimise
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_cpp)
  add_dependencies(optimise_generate_messages_cpp std_msgs_generate_messages_cpp)
endif()

if(geneus_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/optimise)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/optimise
    DESTINATION ${geneus_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_eus)
  add_dependencies(optimise_generate_messages_eus std_msgs_generate_messages_eus)
endif()

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/optimise)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/optimise
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_lisp)
  add_dependencies(optimise_generate_messages_lisp std_msgs_generate_messages_lisp)
endif()

if(gennodejs_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/optimise)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/optimise
    DESTINATION ${gennodejs_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_nodejs)
  add_dependencies(optimise_generate_messages_nodejs std_msgs_generate_messages_nodejs)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/optimise)
  install(CODE "execute_process(COMMAND \"/usr/bin/python\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/optimise\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/optimise
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_py)
  add_dependencies(optimise_generate_messages_py std_msgs_generate_messages_py)
endif()
