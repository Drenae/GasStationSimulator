#ifndef UE4SS_SDK_CarWashPistol_BP_HPP
#define UE4SS_SDK_CarWashPistol_BP_HPP

class ACarWashPistol_BP_C : public ACarWashPistol
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0310 (size: 0x8)
    class UChildActorComponent* VFXNozzle;                                            // 0x0318 (size: 0x8)
    class UStaticMeshComponent* SM_Gauge_Pointer;                                     // 0x0320 (size: 0x8)
    class UStaticMeshComponent* SM_Gauge_Wires;                                       // 0x0328 (size: 0x8)
    class UStaticMeshComponent* SM_Gauge;                                             // 0x0330 (size: 0x8)
    class UStaticMeshComponent* SM_Gauge_Base;                                        // 0x0338 (size: 0x8)
    class USceneComponent* PistolCableLocation;                                       // 0x0340 (size: 0x8)
    class UWBP_CarWash_C* OverlayREF;                                                 // 0x0348 (size: 0x8)
    bool TutorialOnceCreated;                                                         // 0x0350 (size: 0x1)
    class UMiniGames_Tutorial_C* TutorialOnceREF;                                     // 0x0358 (size: 0x8)

    void InpActEvt_Minigame_SpecialAction_01_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_Minigame_SpecialAction_01_K2Node_InputActionEvent_0(FKey Key);
    void OnPickUp();
    void OnDroped();
    void ReceiveDestroyed();
    void ReceiveBeginPlay();
    void UpdatePistolGauge(float Percentage);
    void SetVFXSpread(bool NewSpread);
    void ExecuteUbergraph_CarWashPistol_BP(int32 EntryPoint);
}; // Size: 0x360

#endif
