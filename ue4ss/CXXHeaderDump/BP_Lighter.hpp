#ifndef UE4SS_SDK_BP_Lighter_HPP
#define UE4SS_SDK_BP_Lighter_HPP

class ABP_Lighter_C : public APickableTool
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UNiagaraComponent* fire;                                                    // 0x0270 (size: 0x8)
    class UNiagaraComponent* sparks;                                                  // 0x0278 (size: 0x8)
    int32 SparksCount;                                                                // 0x0280 (size: 0x4)
    class USpaSettings* SpaSettings;                                                  // 0x0288 (size: 0x8)
    float HoldTime;                                                                   // 0x0290 (size: 0x4)
    bool bLighting;                                                                   // 0x0294 (size: 0x1)
    class UWBP_Lighter_C* LighterWidget;                                              // 0x0298 (size: 0x8)
    FRotator PreviousPlayerRotation;                                                  // 0x02A0 (size: 0xC)
    bool bOn;                                                                         // 0x02AC (size: 0x1)

    void TurnOffLighter();
    void TryLightLighter();
    void IsLighterOn(bool& bOn);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void OnPutDown();
    void OnPickUp(class APawn* PickedUpPawn);
    void CancelLighter(bool bOn);
    void CustomEvent_0(bool bIsPressed);
    void ExecuteUbergraph_BP_Lighter(int32 EntryPoint);
}; // Size: 0x2AD

#endif
