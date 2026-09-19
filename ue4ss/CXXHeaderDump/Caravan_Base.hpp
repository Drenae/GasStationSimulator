#ifndef UE4SS_SDK_Caravan_Base_HPP
#define UE4SS_SDK_Caravan_Base_HPP

class ACaravan_Base_C : public ACaravan
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0590 (size: 0x8)
    class UArrowComponent* ChairArrow;                                                // 0x0598 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x05A0 (size: 0x8)
    class AInteractableActor* InteractableRef;                                        // 0x05A8 (size: 0x8)

    bool CanBeInteractable(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    bool DisplayInteractionInfo(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent, class UStaticMeshComponent*& StaticMeshComponent);
    void DisableInteractionInfo(class APawn* Pawn);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Caravan_Base(int32 EntryPoint);
}; // Size: 0x5B0

#endif
