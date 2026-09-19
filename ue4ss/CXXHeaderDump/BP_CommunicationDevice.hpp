#ifndef UE4SS_SDK_BP_CommunicationDevice_HPP
#define UE4SS_SDK_BP_CommunicationDevice_HPP

class ABP_CommunicationDevice_C : public ACommunicationDevice
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    class UWidgetComponent* Widget;                                                   // 0x0358 (size: 0x8)
    FName Section;                                                                    // 0x0360 (size: 0x8)
    class USoundOnOff_WBP_C* As Sound On Off WBP;                                     // 0x0368 (size: 0x8)
    class UAirportManager_C* AirportManager;                                          // 0x0370 (size: 0x8)
    class UWBP_CommunicationDevice_C* CommunicationDeviceWidgetInstance;              // 0x0378 (size: 0x8)
    EInteractionOutput Branches;                                                      // 0x0380 (size: 0x1)

    void OnNotifyEnd_049BD48A4A22651D6D9C649EE894068E(FName NotifyName);
    void OnNotifyBegin_049BD48A4A22651D6D9C649EE894068E(FName NotifyName);
    void OnInterrupted_049BD48A4A22651D6D9C649EE894068E(FName NotifyName);
    void OnBlendOut_049BD48A4A22651D6D9C649EE894068E(FName NotifyName);
    void OnCompleted_049BD48A4A22651D6D9C649EE894068E(FName NotifyName);
    void OnNotifyEnd_C2F79D7D4AB34BE8BDF2D6927EF124A0(FName NotifyName);
    void OnNotifyBegin_C2F79D7D4AB34BE8BDF2D6927EF124A0(FName NotifyName);
    void OnInterrupted_C2F79D7D4AB34BE8BDF2D6927EF124A0(FName NotifyName);
    void OnBlendOut_C2F79D7D4AB34BE8BDF2D6927EF124A0(FName NotifyName);
    void OnCompleted_C2F79D7D4AB34BE8BDF2D6927EF124A0(FName NotifyName);
    void OnNotifyEnd_F4FFB8054A9340E7AF4B72963FEAB4B3(FName NotifyName);
    void OnNotifyBegin_F4FFB8054A9340E7AF4B72963FEAB4B3(FName NotifyName);
    void OnInterrupted_F4FFB8054A9340E7AF4B72963FEAB4B3(FName NotifyName);
    void OnBlendOut_F4FFB8054A9340E7AF4B72963FEAB4B3(FName NotifyName);
    void OnCompleted_F4FFB8054A9340E7AF4B72963FEAB4B3(FName NotifyName);
    void InpActEvt_CircularMenu_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_CircularMenu_Gamepad_K2Node_InputActionEvent_0(FKey Key);
    void ReceiveBeginPlay();
    void DeviceOnOff(bool bIsPressed);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_BP_CommunicationDevice(int32 EntryPoint);
}; // Size: 0x381

#endif
