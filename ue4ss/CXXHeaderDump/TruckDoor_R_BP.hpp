#ifndef UE4SS_SDK_TruckDoor_R_BP_HPP
#define UE4SS_SDK_TruckDoor_R_BP_HPP

class ATruckDoor_R_BP_C : public AVehiclePart
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    float Timeline_0_angle_0487632740D79F884AD06CA2FDCED627;                          // 0x03C8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_0487632740D79F884AD06CA2FDCED627; // 0x03CC (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x03D0 (size: 0x8)
    bool bOpen;                                                                       // 0x03D8 (size: 0x1)

    FName GetInteractionName();
    bool SimpleInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void OpenDoorR();
    void ExecuteUbergraph_TruckDoor_R_BP(int32 EntryPoint);
}; // Size: 0x3D9

#endif
