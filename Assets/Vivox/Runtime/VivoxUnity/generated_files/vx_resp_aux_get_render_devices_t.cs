//------------------------------------------------------------------------------
// <auto-generated />
//
// This file was automatically generated by SWIG (http://www.swig.org).
// Version 4.0.2
//
// Do not make changes to this file unless you know what you are doing--modify
// the SWIG interface file instead.
//------------------------------------------------------------------------------


public class vx_resp_aux_get_render_devices_t : global::System.IDisposable {
  private global::System.Runtime.InteropServices.HandleRef swigCPtr;
  protected bool swigCMemOwn;

  internal vx_resp_aux_get_render_devices_t(global::System.IntPtr cPtr, bool cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = new global::System.Runtime.InteropServices.HandleRef(this, cPtr);
  }

  internal static global::System.Runtime.InteropServices.HandleRef getCPtr(vx_resp_aux_get_render_devices_t obj) {
    return (obj == null) ? new global::System.Runtime.InteropServices.HandleRef(null, global::System.IntPtr.Zero) : obj.swigCPtr;
  }

  ~vx_resp_aux_get_render_devices_t() {
    Dispose(false);
  }

  public void Dispose() {
    Dispose(true);
    global::System.GC.SuppressFinalize(this);
  }

  protected virtual void Dispose(bool disposing) {
    lock(this) {
      if (swigCPtr.Handle != global::System.IntPtr.Zero) {
        if (swigCMemOwn) {
          swigCMemOwn = false;
          VivoxCoreInstancePINVOKE.delete_vx_resp_aux_get_render_devices_t(swigCPtr);
        }
        swigCPtr = new global::System.Runtime.InteropServices.HandleRef(null, global::System.IntPtr.Zero);
      }
    }
  }

  public vx_resp_base_t base_ {
    set {
      VivoxCoreInstancePINVOKE.vx_resp_aux_get_render_devices_t_base__set(swigCPtr, vx_resp_base_t.getCPtr(value));
    } 
    get {
      global::System.IntPtr cPtr = VivoxCoreInstancePINVOKE.vx_resp_aux_get_render_devices_t_base__get(swigCPtr);
      vx_resp_base_t ret = (cPtr == global::System.IntPtr.Zero) ? null : new vx_resp_base_t(cPtr, false);
      return ret;
    } 
  }

  public int count {
    set {
      VivoxCoreInstancePINVOKE.vx_resp_aux_get_render_devices_t_count_set(swigCPtr, value);
    } 
    get {
      int ret = VivoxCoreInstancePINVOKE.vx_resp_aux_get_render_devices_t_count_get(swigCPtr);
      return ret;
    } 
  }

  public SWIGTYPE_p_p_vx_device render_devices {
    set {
      VivoxCoreInstancePINVOKE.vx_resp_aux_get_render_devices_t_render_devices_set(swigCPtr, SWIGTYPE_p_p_vx_device.getCPtr(value));
    } 
    get {
      global::System.IntPtr cPtr = VivoxCoreInstancePINVOKE.vx_resp_aux_get_render_devices_t_render_devices_get(swigCPtr);
      SWIGTYPE_p_p_vx_device ret = (cPtr == global::System.IntPtr.Zero) ? null : new SWIGTYPE_p_p_vx_device(cPtr, false);
      return ret;
    } 
  }

  public vx_device_t current_render_device {
    set {
      VivoxCoreInstancePINVOKE.vx_resp_aux_get_render_devices_t_current_render_device_set(swigCPtr, vx_device_t.getCPtr(value));
    } 
    get {
      global::System.IntPtr cPtr = VivoxCoreInstancePINVOKE.vx_resp_aux_get_render_devices_t_current_render_device_get(swigCPtr);
      vx_device_t ret = (cPtr == global::System.IntPtr.Zero) ? null : new vx_device_t(cPtr, false);
      return ret;
    } 
  }

  public vx_device_t effective_render_device {
    set {
      VivoxCoreInstancePINVOKE.vx_resp_aux_get_render_devices_t_effective_render_device_set(swigCPtr, vx_device_t.getCPtr(value));
    } 
    get {
      global::System.IntPtr cPtr = VivoxCoreInstancePINVOKE.vx_resp_aux_get_render_devices_t_effective_render_device_get(swigCPtr);
      vx_device_t ret = (cPtr == global::System.IntPtr.Zero) ? null : new vx_device_t(cPtr, false);
      return ret;
    } 
  }

  public vx_device_t default_render_device {
    set {
      VivoxCoreInstancePINVOKE.vx_resp_aux_get_render_devices_t_default_render_device_set(swigCPtr, vx_device_t.getCPtr(value));
    } 
    get {
      global::System.IntPtr cPtr = VivoxCoreInstancePINVOKE.vx_resp_aux_get_render_devices_t_default_render_device_get(swigCPtr);
      vx_device_t ret = (cPtr == global::System.IntPtr.Zero) ? null : new vx_device_t(cPtr, false);
      return ret;
    } 
  }

  public vx_device_t default_communication_render_device {
    set {
      VivoxCoreInstancePINVOKE.vx_resp_aux_get_render_devices_t_default_communication_render_device_set(swigCPtr, vx_device_t.getCPtr(value));
    } 
    get {
      global::System.IntPtr cPtr = VivoxCoreInstancePINVOKE.vx_resp_aux_get_render_devices_t_default_communication_render_device_get(swigCPtr);
      vx_device_t ret = (cPtr == global::System.IntPtr.Zero) ? null : new vx_device_t(cPtr, false);
      return ret;
    } 
  }

  public vx_resp_aux_get_render_devices_t() : this(VivoxCoreInstancePINVOKE.new_vx_resp_aux_get_render_devices_t(), true) {
  }

}
