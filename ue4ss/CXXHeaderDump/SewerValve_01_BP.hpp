#ifndef UE4SS_SDK_SewerValve_01_BP_HPP
#define UE4SS_SDK_SewerValve_01_BP_HPP

class ASewerValve_01_BP_C : public ASwitch
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0590 (size: 0x8)
    FVector Timeline_0_Rotation_653681CD400D43CF8E7B43B05BB76A42;                     // 0x0598 (size: 0xC)
    float Timeline_0_Time_653681CD400D43CF8E7B43B05BB76A42;                           // 0x05A4 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_653681CD400D43CF8E7B43B05BB76A42; // 0x05A8 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x05B0 (size: 0x8)
    class UAudioComponent* AirSound;                                                  // 0x05B8 (size: 0x8)

    bool SimpleInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void OnStateUpdated(ESwitchState NewState);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_SewerValve_01_BP(int32 EntryPoint);
}; // Size: 0x5C0

#endif
