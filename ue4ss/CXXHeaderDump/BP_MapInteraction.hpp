#ifndef UE4SS_SDK_BP_MapInteraction_HPP
#define UE4SS_SDK_BP_MapInteraction_HPP

class ABP_MapInteraction_C : public AInteractableActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0400 (size: 0x8)
    class UStaticMeshComponent* SM_papers_stickynote_010;                             // 0x0408 (size: 0x8)
    class UStaticMeshComponent* SM_papers_stickynote_09;                              // 0x0410 (size: 0x8)
    class UStaticMeshComponent* SM_papers_stickynote_08;                              // 0x0418 (size: 0x8)
    class UStaticMeshComponent* SM_papers_stickynote_07;                              // 0x0420 (size: 0x8)
    class UStaticMeshComponent* SM_papers_stickynote_06;                              // 0x0428 (size: 0x8)

    bool DisplayInteractionInfo(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent, class UStaticMeshComponent*& StaticMeshComponent);
    FName GetInteractionName();
    bool CanBeInteractable(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    bool SimpleInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    void OnLoaded_3160DD1440B91E5B7991A38B07F53E9A(UClass* Loaded);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_MapInteraction(int32 EntryPoint);
}; // Size: 0x430

#endif
