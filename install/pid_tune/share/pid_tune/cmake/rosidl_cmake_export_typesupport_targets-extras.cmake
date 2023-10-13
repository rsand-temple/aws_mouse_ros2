# generated from
# rosidl_cmake/cmake/template/rosidl_cmake_export_typesupport_targets.cmake.in

set(_exported_typesupport_targets
  "__rosidl_generator_c:pid_tune__rosidl_generator_c;__rosidl_typesupport_fastrtps_c:pid_tune__rosidl_typesupport_fastrtps_c;__rosidl_typesupport_introspection_c:pid_tune__rosidl_typesupport_introspection_c;__rosidl_typesupport_c:pid_tune__rosidl_typesupport_c;__rosidl_generator_cpp:pid_tune__rosidl_generator_cpp;__rosidl_typesupport_fastrtps_cpp:pid_tune__rosidl_typesupport_fastrtps_cpp;__rosidl_typesupport_introspection_cpp:pid_tune__rosidl_typesupport_introspection_cpp;__rosidl_typesupport_cpp:pid_tune__rosidl_typesupport_cpp;__rosidl_generator_py:pid_tune__rosidl_generator_py")

# populate pid_tune_TARGETS_<suffix>
if(NOT _exported_typesupport_targets STREQUAL "")
  # loop over typesupport targets
  foreach(_tuple ${_exported_typesupport_targets})
    string(REPLACE ":" ";" _tuple "${_tuple}")
    list(GET _tuple 0 _suffix)
    list(GET _tuple 1 _target)

    set(_target "pid_tune::${_target}")
    if(NOT TARGET "${_target}")
      # the exported target must exist
      message(WARNING "Package 'pid_tune' exports the typesupport target '${_target}' which doesn't exist")
    else()
      list(APPEND pid_tune_TARGETS${_suffix} "${_target}")
    endif()
  endforeach()
endif()
