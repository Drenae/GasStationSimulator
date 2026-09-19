#ifndef UE4SS_SDK_TrashBinSmall_In_HPP
#define UE4SS_SDK_TrashBinSmall_In_HPP

class ATrashBinSmall_In_C : public ATrashBinSmall_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05E8 (size: 0x8)
    class UStaticMeshComponent* NPCIndicatorArrow;                                    // 0x05F0 (size: 0x8)
    class UBoxComponent* Box1;                                                        // 0x05F8 (size: 0x8)
    FText Allert Message Text;                                                        // 0x0600 (size: 0x18)
    class UAllertMessage_C* Warning;                                                  // 0x0618 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0620 (size: 0x8)
    class UUserWidget* ShelnHand;                                                     // 0x0628 (size: 0x8)

    FName GetInteractionName();
    bool DisplayInteractionInfo(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent, class UStaticMeshComponent*& StaticMeshComponent);
    void ReceiveBeginPlay();
    void CanBeSpawned(const bool bCompatibile, const TArray<AActor*>& OverlapedElements, const FName& Reason);
    void ReceiveDestroyed();
    void ExecuteUbergraph_TrashBinSmall_In(int32 EntryPoint);
}; // Size: 0x630

#endif
