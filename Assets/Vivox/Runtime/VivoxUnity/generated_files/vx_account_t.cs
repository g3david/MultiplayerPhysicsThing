//------------------------------------------------------------------------------
// <auto-generated />
//
// This file was automatically generated by SWIG (http://www.swig.org).
// Version 4.0.2
//
// Do not make changes to this file unless you know what you are doing--modify
// the SWIG interface file instead.
//------------------------------------------------------------------------------


public class vx_account_t : global::System.IDisposable {
  private global::System.Runtime.InteropServices.HandleRef swigCPtr;
  protected bool swigCMemOwn;

  internal vx_account_t(global::System.IntPtr cPtr, bool cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = new global::System.Runtime.InteropServices.HandleRef(this, cPtr);
  }

  internal static global::System.Runtime.InteropServices.HandleRef getCPtr(vx_account_t obj) {
    return (obj == null) ? new global::System.Runtime.InteropServices.HandleRef(null, global::System.IntPtr.Zero) : obj.swigCPtr;
  }

  ~vx_account_t() {
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
          VivoxCoreInstancePINVOKE.delete_vx_account_t(swigCPtr);
        }
        swigCPtr = new global::System.Runtime.InteropServices.HandleRef(null, global::System.IntPtr.Zero);
      }
    }
  }

  public string uri {
    set {
      VivoxCoreInstancePINVOKE.vx_account_t_uri_set(swigCPtr, value);
    } 
    get {
      string ret = VivoxCoreInstancePINVOKE.vx_account_t_uri_get(swigCPtr);
      return ret;
    } 
  }

  public string firstname {
    set {
      VivoxCoreInstancePINVOKE.vx_account_t_firstname_set(swigCPtr, value);
    } 
    get {
      string ret = VivoxCoreInstancePINVOKE.vx_account_t_firstname_get(swigCPtr);
      return ret;
    } 
  }

  public string lastname {
    set {
      VivoxCoreInstancePINVOKE.vx_account_t_lastname_set(swigCPtr, value);
    } 
    get {
      string ret = VivoxCoreInstancePINVOKE.vx_account_t_lastname_get(swigCPtr);
      return ret;
    } 
  }

  public string username {
    set {
      VivoxCoreInstancePINVOKE.vx_account_t_username_set(swigCPtr, value);
    } 
    get {
      string ret = VivoxCoreInstancePINVOKE.vx_account_t_username_get(swigCPtr);
      return ret;
    } 
  }

  public string displayname {
    set {
      VivoxCoreInstancePINVOKE.vx_account_t_displayname_set(swigCPtr, value);
    } 
    get {
      string ret = VivoxCoreInstancePINVOKE.vx_account_t_displayname_get(swigCPtr);
      return ret;
    } 
  }

  public string email {
    set {
      VivoxCoreInstancePINVOKE.vx_account_t_email_set(swigCPtr, value);
    } 
    get {
      string ret = VivoxCoreInstancePINVOKE.vx_account_t_email_get(swigCPtr);
      return ret;
    } 
  }

  public string phone {
    set {
      VivoxCoreInstancePINVOKE.vx_account_t_phone_set(swigCPtr, value);
    } 
    get {
      string ret = VivoxCoreInstancePINVOKE.vx_account_t_phone_get(swigCPtr);
      return ret;
    } 
  }

  public string carrier {
    set {
      VivoxCoreInstancePINVOKE.vx_account_t_carrier_set(swigCPtr, value);
    } 
    get {
      string ret = VivoxCoreInstancePINVOKE.vx_account_t_carrier_get(swigCPtr);
      return ret;
    } 
  }

  public string created_date {
    set {
      VivoxCoreInstancePINVOKE.vx_account_t_created_date_set(swigCPtr, value);
    } 
    get {
      string ret = VivoxCoreInstancePINVOKE.vx_account_t_created_date_get(swigCPtr);
      return ret;
    } 
  }

  public vx_account_t() : this(VivoxCoreInstancePINVOKE.new_vx_account_t(), true) {
  }

}
