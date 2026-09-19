#ifndef UE4SS_SDK_00_Stand_HPP
#define UE4SS_SDK_00_Stand_HPP

class A00_Stand_C : public AShelf
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x06A0 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x06A8 (size: 0x8)
    class UStaticMeshComponent* dupa;                                                 // 0x06B0 (size: 0x8)
    class UUserWidget* ShelnHand;                                                     // 0x06B8 (size: 0x8)
    class UAllertMessage_C* Warning;                                                  // 0x06C0 (size: 0x8)
    FText Allert Message Text;                                                        // 0x06C8 (size: 0x18)

    bool SimpleInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    bool DisplayInteractionInfo(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent, class UStaticMeshComponent*& StaticMeshComponent);
    void ReceiveBeginPlay();
    void EnableGhostMode();
    void CanBeSpawned(const bool bCompatibile, const TArray<AActor*>& OverlapedElements, const FName& Reason);
    void ReceiveDestroyed();
    void ShowProduct();
    void ReFillShelfes();
    void ExecuteUbergraph_00_Stand(int32 EntryPoint);
}; // Size: 0x6E0

#endif
