# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_img_recognition_resources_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED img_recognition_resources_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(img_recognition_resources_FOUND FALSE)
  elseif(NOT img_recognition_resources_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(img_recognition_resources_FOUND FALSE)
  endif()
  return()
endif()
set(_img_recognition_resources_CONFIG_INCLUDED TRUE)

# output package information
if(NOT img_recognition_resources_FIND_QUIETLY)
  message(STATUS "Found img_recognition_resources: 0.0.0 (${img_recognition_resources_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'img_recognition_resources' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${img_recognition_resources_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(img_recognition_resources_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "rosidl_cmake-extras.cmake;ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_libraries-extras.cmake;ament_cmake_export_targets-extras.cmake;rosidl_cmake_export_typesupport_targets-extras.cmake;ament_cmake_export_dependencies-extras.cmake;rosidl_cmake_export_typesupport_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${img_recognition_resources_DIR}/${_extra}")
endforeach()
