#ifndef UE4SS_SDK_BP_JunkyardStorage_Shelf_HPP
#define UE4SS_SDK_BP_JunkyardStorage_Shelf_HPP

class ABP_JunkyardStorage_Shelf_C : public AInteractableActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0400 (size: 0x8)

    FName GetInteractionName();
    bool SimpleInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    void OnPartAddedToStorage();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_JunkyardStorage_Shelf(int32 EntryPoint);
}; // Size: 0x408

#endif
