//------------------------------------------------------------------------------
// <auto-generated />
//
// This file was automatically generated by SWIG (http://www.swig.org).
// Version 4.0.2
//
// Do not make changes to this file unless you know what you are doing--modify
// the SWIG interface file instead.
//------------------------------------------------------------------------------


public class vx_req_aux_diagnostic_state_dump_t : global::System.IDisposable {
  private global::System.Runtime.InteropServices.HandleRef swigCPtr;
  protected bool swigCMemOwn;

  internal vx_req_aux_diagnostic_state_dump_t(global::System.IntPtr cPtr, bool cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = new global::System.Runtime.InteropServices.HandleRef(this, cPtr);
  }

  internal static global::System.Runtime.InteropServices.HandleRef getCPtr(vx_req_aux_diagnostic_state_dump_t obj) {
    return (obj == null) ? new global::System.Runtime.InteropServices.HandleRef(null, global::System.IntPtr.Zero) : obj.swigCPtr;
  }

  ~vx_req_aux_diagnostic_state_dump_t() {
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
          VivoxCoreInstancePINVOKE.delete_vx_req_aux_diagnostic_state_dump_t(swigCPtr);
        }
        swigCPtr = new global::System.Runtime.InteropServices.HandleRef(null, global::System.IntPtr.Zero);
      }
    }
  }

        public static implicit operator vx_req_base_t(vx_req_aux_diagnostic_state_dump_t t) {
            return t.base_;
        }
        
  public vx_req_base_t base_ {
    set {
      VivoxCoreInstancePINVOKE.vx_req_aux_diagnostic_state_dump_t_base__set(swigCPtr, vx_req_base_t.getCPtr(value));
    } 
    get {
      global::System.IntPtr cPtr = VivoxCoreInstancePINVOKE.vx_req_aux_diagnostic_state_dump_t_base__get(swigCPtr);
      vx_req_base_t ret = (cPtr == global::System.IntPtr.Zero) ? null : new vx_req_base_t(cPtr, false);
      return ret;
    } 
  }

  public vx_diagnostic_dump_level level {
    set {
      VivoxCoreInstancePINVOKE.vx_req_aux_diagnostic_state_dump_t_level_set(swigCPtr, (int)value);
    } 
    get {
      vx_diagnostic_dump_level ret = (vx_diagnostic_dump_level)VivoxCoreInstancePINVOKE.vx_req_aux_diagnostic_state_dump_t_level_get(swigCPtr);
      return ret;
    } 
  }

  public vx_req_aux_diagnostic_state_dump_t() : this(VivoxCoreInstancePINVOKE.new_vx_req_aux_diagnostic_state_dump_t(), true) {
  }

}
