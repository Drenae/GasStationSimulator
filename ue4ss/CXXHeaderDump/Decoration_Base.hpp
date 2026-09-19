#ifndef UE4SS_SDK_Decoration_Base_HPP
#define UE4SS_SDK_Decoration_Base_HPP

class ADecoration_Base_C : public ADecorationBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0580 (size: 0x8)
    class UUserWidget* DecorationsInHand;                                             // 0x0588 (size: 0x8)

    FName GetInteractionName();
    bool DisplayInteractionInfo(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent, class UStaticMeshComponent*& StaticMeshComponent);
    bool CanBeInteractable(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    void ReceiveTick(float DeltaSeconds);
    void CanBeSpawned(const bool bCompatibile, const TArray<AActor*>& OverlapedElements, const FName& Reason);
    void ReceiveBeginPlay();
    void ReceiveDestroyed();
    void ExecuteUbergraph_Decoration_Base(int32 EntryPoint);
}; // Size: 0x590

#endif
