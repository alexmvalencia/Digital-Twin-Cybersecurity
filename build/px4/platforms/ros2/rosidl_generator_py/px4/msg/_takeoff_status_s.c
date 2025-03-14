// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4:msg/TakeoffStatus.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "px4/msg/detail/takeoff_status__struct.h"
#include "px4/msg/detail/takeoff_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4__msg__takeoff_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[38];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("px4.msg._takeoff_status.TakeoffStatus", full_classname_dest, 37) == 0);
  }
  px4__msg__TakeoffStatus * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // takeoff_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "takeoff_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->takeoff_state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // tilt_limit
    PyObject * field = PyObject_GetAttrString(_pymsg, "tilt_limit");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tilt_limit = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4__msg__takeoff_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TakeoffStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4.msg._takeoff_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TakeoffStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4__msg__TakeoffStatus * ros_message = (px4__msg__TakeoffStatus *)raw_ros_message;
  {  // timestamp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // takeoff_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->takeoff_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "takeoff_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tilt_limit
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tilt_limit);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tilt_limit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
