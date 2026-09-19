#ifndef UE4SS_SDK_CarWash_Trash_01_HPP
#define UE4SS_SDK_CarWash_Trash_01_HPP

class ACarWash_Trash_01_C : public ACarWashTrash
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    TArray<FLinearColor> Tint Array;                                                  // 0x03C8 (size: 0x10)

    bool DisplayInteractionInfo(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent, class UStaticMeshComponent*& StaticMeshComponent);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void DisableInteractionInfo(class APawn* Pawn);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_CarWash_Trash_01(int32 EntryPoint);
}; // Size: 0x3D8

#endif
