//------------------------------------------------------------------------------
// <auto-generated />
//
// This file was automatically generated by SWIG (http://www.swig.org).
// Version 4.0.2
//
// Do not make changes to this file unless you know what you are doing--modify
// the SWIG interface file instead.
//------------------------------------------------------------------------------


public class vx_evt_aux_audio_properties_t : global::System.IDisposable {
  private global::System.Runtime.InteropServices.HandleRef swigCPtr;
  protected bool swigCMemOwn;

  internal vx_evt_aux_audio_properties_t(global::System.IntPtr cPtr, bool cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = new global::System.Runtime.InteropServices.HandleRef(this, cPtr);
  }

  internal static global::System.Runtime.InteropServices.HandleRef getCPtr(vx_evt_aux_audio_properties_t obj) {
    return (obj == null) ? new global::System.Runtime.InteropServices.HandleRef(null, global::System.IntPtr.Zero) : obj.swigCPtr;
  }

  ~vx_evt_aux_audio_properties_t() {
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
          VivoxCoreInstancePINVOKE.delete_vx_evt_aux_audio_properties_t(swigCPtr);
        }
        swigCPtr = new global::System.Runtime.InteropServices.HandleRef(null, global::System.IntPtr.Zero);
      }
    }
  }

  public vx_evt_base_t base_ {
    set {
      VivoxCoreInstancePINVOKE.vx_evt_aux_audio_properties_t_base__set(swigCPtr, vx_evt_base_t.getCPtr(value));
    } 
    get {
      global::System.IntPtr cPtr = VivoxCoreInstancePINVOKE.vx_evt_aux_audio_properties_t_base__get(swigCPtr);
      vx_evt_base_t ret = (cPtr == global::System.IntPtr.Zero) ? null : new vx_evt_base_t(cPtr, false);
      return ret;
    } 
  }

  public vx_aux_audio_properties_state state {
    set {
      VivoxCoreInstancePINVOKE.vx_evt_aux_audio_properties_t_state_set(swigCPtr, (int)value);
    } 
    get {
      vx_aux_audio_properties_state ret = (vx_aux_audio_properties_state)VivoxCoreInstancePINVOKE.vx_evt_aux_audio_properties_t_state_get(swigCPtr);
      return ret;
    } 
  }

  public int mic_is_active {
    set {
      VivoxCoreInstancePINVOKE.vx_evt_aux_audio_properties_t_mic_is_active_set(swigCPtr, value);
    } 
    get {
      int ret = VivoxCoreInstancePINVOKE.vx_evt_aux_audio_properties_t_mic_is_active_get(swigCPtr);
      return ret;
    } 
  }

  public int mic_volume {
    set {
      VivoxCoreInstancePINVOKE.vx_evt_aux_audio_properties_t_mic_volume_set(swigCPtr, value);
    } 
    get {
      int ret = VivoxCoreInstancePINVOKE.vx_evt_aux_audio_properties_t_mic_volume_get(swigCPtr);
      return ret;
    } 
  }

  public double mic_energy {
    set {
      VivoxCoreInstancePINVOKE.vx_evt_aux_audio_properties_t_mic_energy_set(swigCPtr, value);
    } 
    get {
      double ret = VivoxCoreInstancePINVOKE.vx_evt_aux_audio_properties_t_mic_energy_get(swigCPtr);
      return ret;
    } 
  }

  public int speaker_volume {
    set {
      VivoxCoreInstancePINVOKE.vx_evt_aux_audio_properties_t_speaker_volume_set(swigCPtr, value);
    } 
    get {
      int ret = VivoxCoreInstancePINVOKE.vx_evt_aux_audio_properties_t_speaker_volume_get(swigCPtr);
      return ret;
    } 
  }

  public double speaker_energy {
    set {
      VivoxCoreInstancePINVOKE.vx_evt_aux_audio_properties_t_speaker_energy_set(swigCPtr, value);
    } 
    get {
      double ret = VivoxCoreInstancePINVOKE.vx_evt_aux_audio_properties_t_speaker_energy_get(swigCPtr);
      return ret;
    } 
  }

  public int speaker_is_active {
    set {
      VivoxCoreInstancePINVOKE.vx_evt_aux_audio_properties_t_speaker_is_active_set(swigCPtr, value);
    } 
    get {
      int ret = VivoxCoreInstancePINVOKE.vx_evt_aux_audio_properties_t_speaker_is_active_get(swigCPtr);
      return ret;
    } 
  }

  public double fast_energy_meter {
    set {
      VivoxCoreInstancePINVOKE.vx_evt_aux_audio_properties_t_fast_energy_meter_set(swigCPtr, value);
    } 
    get {
      double ret = VivoxCoreInstancePINVOKE.vx_evt_aux_audio_properties_t_fast_energy_meter_get(swigCPtr);
      return ret;
    } 
  }

  public double noise_floor_meter {
    set {
      VivoxCoreInstancePINVOKE.vx_evt_aux_audio_properties_t_noise_floor_meter_set(swigCPtr, value);
    } 
    get {
      double ret = VivoxCoreInstancePINVOKE.vx_evt_aux_audio_properties_t_noise_floor_meter_get(swigCPtr);
      return ret;
    } 
  }

  public double speech_threshold_meter {
    set {
      VivoxCoreInstancePINVOKE.vx_evt_aux_audio_properties_t_speech_threshold_meter_set(swigCPtr, value);
    } 
    get {
      double ret = VivoxCoreInstancePINVOKE.vx_evt_aux_audio_properties_t_speech_threshold_meter_get(swigCPtr);
      return ret;
    } 
  }

  public vx_evt_aux_audio_properties_t() : this(VivoxCoreInstancePINVOKE.new_vx_evt_aux_audio_properties_t(), true) {
  }

}
