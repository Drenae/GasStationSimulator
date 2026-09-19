#ifndef UE4SS_SDK_SewerLadder_HPP
#define UE4SS_SDK_SewerLadder_HPP

class ASewerLadder_C : public AGSSLadder
{
    class UStaticMeshComponent* Part5;                                                // 0x0590 (size: 0x8)
    class UStaticMeshComponent* Part4;                                                // 0x0598 (size: 0x8)
    class UStaticMeshComponent* Part3;                                                // 0x05A0 (size: 0x8)
    class UStaticMeshComponent* Part2;                                                // 0x05A8 (size: 0x8)

    bool DisplayInteractionInfo(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent, class UStaticMeshComponent*& StaticMeshComponent);
    bool CanBeInteractable(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
}; // Size: 0x5B0

#endif
