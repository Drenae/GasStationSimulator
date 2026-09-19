#ifndef UE4SS_SDK_GasStation_Door1_HPP
#define UE4SS_SDK_GasStation_Door1_HPP

class AGasStation_Door1_C : public ACustomizationHousePart_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C8 (size: 0x8)
    float Timeline_0_angle_64F30F22415E534E85059EBF324C64A4;                          // 0x03D0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_64F30F22415E534E85059EBF324C64A4; // 0x03D4 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x03D8 (size: 0x8)
    FTransform StartTransform;                                                        // 0x03E0 (size: 0x30)
    FTransform EndTransform;                                                          // 0x0410 (size: 0x30)

    bool SimpleInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void OpenDoorR();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_GasStation_Door1(int32 EntryPoint);
}; // Size: 0x440

#endif
