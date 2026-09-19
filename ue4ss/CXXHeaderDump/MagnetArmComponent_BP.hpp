#ifndef UE4SS_SDK_MagnetArmComponent_BP_HPP
#define UE4SS_SDK_MagnetArmComponent_BP_HPP

class UMagnetArmComponent_BP_C : public UMagnetArmComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02F8 (size: 0x8)
    class UAudioComponent* SFX_MagnetLoopCue;                                         // 0x0300 (size: 0x8)
    class UAudioComponent* SFX_MagnetStartCue;                                        // 0x0308 (size: 0x8)
    class UAudioComponent* SFX_SnapImpactCue;                                         // 0x0310 (size: 0x8)
    class UAudioComponent* SFX_MagnetAttractCue;                                      // 0x0318 (size: 0x8)
    class UActorComponent* MagnetVFX;                                                 // 0x0320 (size: 0x8)
    bool PreviousIsMagnetAttracting;                                                  // 0x0328 (size: 0x1)

    void InputActionActivateMagnet(bool bPressed);
    void EventAddForceAtSnap();
    void EventMagnetStartsAttracing(bool bIsMagnetOn);
    void ExecuteUbergraph_MagnetArmComponent_BP(int32 EntryPoint);
}; // Size: 0x329

#endif
