#ifndef UE4SS_SDK_Sewer_SwitchElectro_BP_HPP
#define UE4SS_SDK_Sewer_SwitchElectro_BP_HPP

class ASewer_SwitchElectro_BP_C : public ASwitch
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0590 (size: 0x8)
    FVector Timeline_0_Rotation_E761B9034D494DA06812F2A7BFC549FF;                     // 0x0598 (size: 0xC)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_E761B9034D494DA06812F2A7BFC549FF; // 0x05A4 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x05A8 (size: 0x8)

    bool SimpleInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void OnStateUpdated(ESwitchState NewState);
    void ExecuteUbergraph_Sewer_SwitchElectro_BP(int32 EntryPoint);
}; // Size: 0x5B0

#endif
