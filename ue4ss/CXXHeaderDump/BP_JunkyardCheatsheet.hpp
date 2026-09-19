#ifndef UE4SS_SDK_BP_JunkyardCheatsheet_HPP
#define UE4SS_SDK_BP_JunkyardCheatsheet_HPP

class ABP_JunkyardCheatsheet_C : public AInteractableActor
{

    bool SimpleInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    bool CanBeInteractable(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    bool DisplayInteractionInfo(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent, class UStaticMeshComponent*& StaticMeshComponent);
}; // Size: 0x400

#endif
