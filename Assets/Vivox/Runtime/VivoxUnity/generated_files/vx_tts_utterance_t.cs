//------------------------------------------------------------------------------
// <auto-generated />
//
// This file was automatically generated by SWIG (http://www.swig.org).
// Version 4.0.2
//
// Do not make changes to this file unless you know what you are doing--modify
// the SWIG interface file instead.
//------------------------------------------------------------------------------


public class vx_tts_utterance_t : global::System.IDisposable {
  private global::System.Runtime.InteropServices.HandleRef swigCPtr;
  protected bool swigCMemOwn;

  internal vx_tts_utterance_t(global::System.IntPtr cPtr, bool cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = new global::System.Runtime.InteropServices.HandleRef(this, cPtr);
  }

  internal static global::System.Runtime.InteropServices.HandleRef getCPtr(vx_tts_utterance_t obj) {
    return (obj == null) ? new global::System.Runtime.InteropServices.HandleRef(null, global::System.IntPtr.Zero) : obj.swigCPtr;
  }

  ~vx_tts_utterance_t() {
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
          VivoxCoreInstancePINVOKE.delete_vx_tts_utterance_t(swigCPtr);
        }
        swigCPtr = new global::System.Runtime.InteropServices.HandleRef(null, global::System.IntPtr.Zero);
      }
    }
  }

  public SWIGTYPE_p_vx_tts_utterance_impl utterance_obj {
    get {
      global::System.IntPtr cPtr = VivoxCoreInstancePINVOKE.vx_tts_utterance_t_utterance_obj_get(swigCPtr);
      SWIGTYPE_p_vx_tts_utterance_impl ret = (cPtr == global::System.IntPtr.Zero) ? null : new SWIGTYPE_p_vx_tts_utterance_impl(cPtr, false);
      return ret;
    } 
  }

  public SWIGTYPE_p_short speech_buffer {
    set {
      VivoxCoreInstancePINVOKE.vx_tts_utterance_t_speech_buffer_set(swigCPtr, SWIGTYPE_p_short.getCPtr(value));
    } 
    get {
      global::System.IntPtr cPtr = VivoxCoreInstancePINVOKE.vx_tts_utterance_t_speech_buffer_get(swigCPtr);
      SWIGTYPE_p_short ret = (cPtr == global::System.IntPtr.Zero) ? null : new SWIGTYPE_p_short(cPtr, false);
      return ret;
    } 
  }

  public int sample_rate {
    set {
      VivoxCoreInstancePINVOKE.vx_tts_utterance_t_sample_rate_set(swigCPtr, value);
    } 
    get {
      int ret = VivoxCoreInstancePINVOKE.vx_tts_utterance_t_sample_rate_get(swigCPtr);
      return ret;
    } 
  }

  public int num_frames {
    set {
      VivoxCoreInstancePINVOKE.vx_tts_utterance_t_num_frames_set(swigCPtr, value);
    } 
    get {
      int ret = VivoxCoreInstancePINVOKE.vx_tts_utterance_t_num_frames_get(swigCPtr);
      return ret;
    } 
  }

  public int num_channels {
    set {
      VivoxCoreInstancePINVOKE.vx_tts_utterance_t_num_channels_set(swigCPtr, value);
    } 
    get {
      int ret = VivoxCoreInstancePINVOKE.vx_tts_utterance_t_num_channels_get(swigCPtr);
      return ret;
    } 
  }

  public vx_tts_utterance_t() : this(VivoxCoreInstancePINVOKE.new_vx_tts_utterance_t(), true) {
  }

}
