#ifndef UE4SS_SDK_SewerDoor_01_BP_HPP
#define UE4SS_SDK_SewerDoor_01_BP_HPP

class ASewerDoor_01_BP_C : public ADoor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05A0 (size: 0x8)
    FVector Timeline_0_Rotation_67F4800B4D8D1C5CCC18CBAAB2E4CFB4;                     // 0x05A8 (size: 0xC)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_67F4800B4D8D1C5CCC18CBAAB2E4CFB4; // 0x05B4 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x05B8 (size: 0x8)

    bool DisplayInteractionInfo(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent, class UStaticMeshComponent*& StaticMeshComponent);
    bool SimpleInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    bool CanBeInteractable(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void OnStateUpdated(EDoorState NewState);
    void ExecuteUbergraph_SewerDoor_01_BP(int32 EntryPoint);
}; // Size: 0x5C0

#endif
