#ifndef UE4SS_SDK_CommonInput_HPP
#define UE4SS_SDK_CommonInput_HPP

#include "CommonInput_enums.hpp"

struct FCommonInputKeyBrushConfiguration
{
    FKey Key;                                                                         // 0x0000 (size: 0x18)
    FSlateBrush KeyBrush;                                                             // 0x0018 (size: 0x88)

}; // Size: 0xA0

struct FCommonInputKeySetBrushConfiguration
{
    TArray<FKey> Keys;                                                                // 0x0000 (size: 0x10)
    FSlateBrush KeyBrush;                                                             // 0x0010 (size: 0x88)

}; // Size: 0x98

struct FCommonInputPlatformBaseData
{
    bool bSupported;                                                                  // 0x0008 (size: 0x1)
    ECommonInputType DefaultInputType;                                                // 0x0009 (size: 0x1)
    bool bSupportsMouseAndKeyboard;                                                   // 0x000A (size: 0x1)
    bool bSupportsGamepad;                                                            // 0x000B (size: 0x1)
    FName DefaultGamepadName;                                                         // 0x000C (size: 0x8)
    bool bCanChangeGamepadType;                                                       // 0x0014 (size: 0x1)
    bool bSupportsTouch;                                                              // 0x0015 (size: 0x1)
    TArray<TSoftClassPtr<UCommonInputBaseControllerData>> ControllerData;             // 0x0018 (size: 0x10)
    TArray<TSubclassOf<class UCommonInputBaseControllerData>> ControllerDataClasses;  // 0x0028 (size: 0x10)

}; // Size: 0x38

class UCommonInputBaseControllerData : public UObject
{
    ECommonInputType InputType;                                                       // 0x0028 (size: 0x1)
    FName GamepadName;                                                                // 0x002C (size: 0x8)
    TSoftObjectPtr<class UTexture2D> ControllerTexture;                               // 0x0038 (size: 0x28)
    TSoftObjectPtr<class UTexture2D> ControllerButtonMaskTexture;                     // 0x0060 (size: 0x28)
    TArray<FCommonInputKeyBrushConfiguration> InputBrushDataMap;                      // 0x0088 (size: 0x10)
    TArray<FCommonInputKeySetBrushConfiguration> InputBrushKeySets;                   // 0x0098 (size: 0x10)

    TArray<FName> GetRegisteredGamepads();
}; // Size: 0xA8

class UCommonInputSettings : public UObject
{
    TSoftClassPtr<UCommonUIInputData> InputData;                                      // 0x0028 (size: 0x28)
    TMap<FName, FCommonInputPlatformBaseData> CommonInputPlatformData;                // 0x0050 (size: 0x50)
    bool bEnableInputMethodThrashingProtection;                                       // 0x00A0 (size: 0x1)
    int32 InputMethodThrashingLimit;                                                  // 0x00A4 (size: 0x4)
    double InputMethodThrashingWindowInSeconds;                                       // 0x00A8 (size: 0x8)
    double InputMethodThrashingCooldownInSeconds;                                     // 0x00B0 (size: 0x8)
    bool bAllowOutOfFocusDeviceInput;                                                 // 0x00B8 (size: 0x1)
    TSubclassOf<class UCommonUIInputData> InputDataClass;                             // 0x00C0 (size: 0x8)
    FCommonInputPlatformBaseData CurrentPlatform;                                     // 0x00C8 (size: 0x38)

    TArray<FName> GetRegisteredPlatforms();
}; // Size: 0x100

class UCommonInputSubsystem : public ULocalPlayerSubsystem
{
    FCommonInputSubsystemOnInputMethodChanged OnInputMethodChanged;                   // 0x0050 (size: 0x10)
    void InputMethodChangedDelegate(ECommonInputType bNewInputType);
    int32 NumberOfInputMethodChangesRecently;                                         // 0x0060 (size: 0x4)
    double LastInputMethodChangeTime;                                                 // 0x0068 (size: 0x8)
    double LastTimeInputMethodThrashingBegan;                                         // 0x0070 (size: 0x8)
    ECommonInputType LastInputType;                                                   // 0x0078 (size: 0x1)
    ECommonInputType CurrentInputType;                                                // 0x0079 (size: 0x1)
    FName GamepadInputType;                                                           // 0x007C (size: 0x8)
    TMap<FName, ECommonInputType> CurrentInputLocks;                                  // 0x0088 (size: 0x50)
    bool bIsGamepadSimulatedClick;                                                    // 0x00F0 (size: 0x1)

    bool ShouldShowInputKeys();
    void SetGamepadInputType(const FName& InGamepadInputType);
    void SetCurrentInputType(ECommonInputType NewInputType);
    bool IsUsingPointerInput();
    bool IsInputMethodActive(ECommonInputType InputMethod);
    ECommonInputType GetDefaultInputType();
    ECommonInputType GetCurrentInputType();
    FName GetCurrentGamepadName();
}; // Size: 0xF8

class UCommonUIInputData : public UObject
{
    FDataTableRowHandle DefaultClickAction;                                           // 0x0028 (size: 0x10)
    FDataTableRowHandle DefaultBackAction;                                            // 0x0038 (size: 0x10)

}; // Size: 0x48

#endif
