#ifndef UE4SS_SDK_BP_RVCousinHouse_HPP
#define UE4SS_SDK_BP_RVCousinHouse_HPP

class ABP_RVCousinHouse_C : public ACousinHouse
{

    bool CanBeInteractable(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    bool DisplayInteractionInfo(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent, class UStaticMeshComponent*& StaticMeshComponent);
}; // Size: 0x580

#endif
