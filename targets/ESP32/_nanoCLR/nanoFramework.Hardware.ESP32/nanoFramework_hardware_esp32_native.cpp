#include "nanoFramework_hardware_esp32_native.h"

// clang-format off

static const CLR_RT_MethodHandler method_lookup[] =
{
    NULL,
    NULL,
    NULL,
    NULL,
    Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_Configuration::NativeSetPinFunction___STATIC__VOID__I4__I4,
    Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_Configuration::NativeGetPinFunction___STATIC__I4__I4,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_HighResTimer::NativeEspTimerCreate___I4,
    Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_HighResTimer::NativeEspTimerDispose___VOID,
    Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_HighResTimer::NativeStop___VOID,
    Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_HighResTimer::NativeStartOneShot___VOID__U8,
    Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_HighResTimer::NativeStartPeriodic___VOID__U8,
    NULL,
    Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_HighResTimer::NativeGetCurrent___STATIC__U8,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_Logging::NativeSetLogLevel___STATIC__VOID__STRING__I4,
    NULL,
    NULL,
    Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_NativeMemory::NativeGetMemoryTotalSize___STATIC__U4__I4,
    Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_NativeMemory::NativeGetMemoryTotalFreeSize___STATIC__U4__I4,
    Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_NativeMemory::NativeGetMemoryLargestFreeBlock___STATIC__U4__I4,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_Sleep::NativeEnableWakeupByTimer___STATIC__nanoFrameworkHardwareEsp32EspNativeError__U8,
    Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_Sleep::NativeEnableWakeupByPin___STATIC__nanoFrameworkHardwareEsp32EspNativeError__nanoFrameworkHardwareEsp32SleepWakeupGpioPin__I4,
    Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_Sleep::NativeEnableWakeupByMultiPins___STATIC__nanoFrameworkHardwareEsp32EspNativeError__nanoFrameworkHardwareEsp32SleepWakeupGpioPin__nanoFrameworkHardwareEsp32SleepWakeupMode,
    Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_Sleep::NativeEnableWakeupByTouchPad___STATIC__nanoFrameworkHardwareEsp32EspNativeError,
    Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_Sleep::NativeStartLightSleep___STATIC__nanoFrameworkHardwareEsp32EspNativeError,
    Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_Sleep::NativeStartDeepSleep___STATIC__nanoFrameworkHardwareEsp32EspNativeError,
    Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_Sleep::NativeGetWakeupCause___STATIC__nanoFrameworkHardwareEsp32SleepWakeupCause,
    Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_Sleep::NativeGetWakeupGpioPin___STATIC__nanoFrameworkHardwareEsp32SleepWakeupGpioPin,
    Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_Sleep::NativeGetWakeupTouchpad___STATIC__nanoFrameworkHardwareEsp32SleepTouchPad,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_Touch_TouchPad::NativeInit___VOID,
    Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_Touch_TouchPad::NativeDeinit___VOID,
    Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_Touch_TouchPad::NativeRead___I4,
    Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_Touch_TouchPad::NativeGetThreshold___U2,
    Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_Touch_TouchPad::NativeSetThreshold___VOID__U2,
    Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_Touch_TouchPad::NativeGetTouchSpeed___VOID__BYREF_I4__BYREF_I4,
    Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_Touch_TouchPad::NativeSetChargeSpeed___VOID__I4__I4,
    Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_Touch_TouchPad::NativeCalibrate___I4__I4,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_Touch_TouchPad::NativeGetGpioNumberFromTouchNumber___STATIC__I4__I4,
    Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_Touch_TouchPad::NativeGetTriggerMode___STATIC__nanoFrameworkHardwareEsp32TouchTouchTriggerMode,
    Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_Touch_TouchPad::NativeSetTriggerMode___STATIC__VOID__nanoFrameworkHardwareEsp32TouchTouchTriggerMode,
    Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_Touch_TouchPad::NativeGetTriggerSource___STATIC__nanoFrameworkHardwareEsp32TouchWakeUpSource,
    Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_Touch_TouchPad::NativeSetTriggerSource___STATIC__VOID__nanoFrameworkHardwareEsp32TouchWakeUpSource,
    Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_Touch_TouchPad::NativeGetMeasurementMode___STATIC__nanoFrameworkHardwareEsp32TouchMeasurementMode,
    Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_Touch_TouchPad::NativeSetMeasurementMode___STATIC__VOID__nanoFrameworkHardwareEsp32TouchMeasurementMode,
    Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_Touch_TouchPad::NativeSetVoltage___STATIC__VOID__nanoFrameworkHardwareEsp32TouchTouchHighVoltage__nanoFrameworkHardwareEsp32TouchTouchLowVoltage__nanoFrameworkHardwareEsp32TouchTouchHighVoltageAttenuation,
    Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_Touch_TouchPad::NativeGetVoltage___STATIC__VOID__BYREF_nanoFrameworkHardwareEsp32TouchTouchHighVoltage__BYREF_nanoFrameworkHardwareEsp32TouchTouchLowVoltage__BYREF_nanoFrameworkHardwareEsp32TouchTouchHighVoltageAttenuation,
    Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_Touch_TouchPad::NativeStartFilter___STATIC__VOID__U4,
    Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_Touch_TouchPad::NativeStopFilter___STATIC__VOID,
    Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_Touch_TouchPad::NativeSetMeasurementTime___STATIC__VOID__U2__U2,
    Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_Touch_TouchPad::NativeGetMeasurementTime___STATIC__VOID__BYREF_U2__BYREF_U2,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
};

const CLR_RT_NativeAssemblyData g_CLR_AssemblyNative_nanoFramework_Hardware_Esp32 =
{
    "nanoFramework.Hardware.Esp32",
    0x5063582B,
    method_lookup,
    { 100, 0, 7, 3 }
};

// clang-format on
