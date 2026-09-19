#ifndef UE4SS_SDK_PopcornMachineButton_BP_HPP
#define UE4SS_SDK_PopcornMachineButton_BP_HPP

class APopcornMachineButton_BP_C : public AInteractableBuilding
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0580 (size: 0x8)
    TArray<FVector> RemovedActorsPositions;                                           // 0x0588 (size: 0x10)
    TArray<APawn*> RemovedActors;                                                     // 0x0598 (size: 0x10)
    TArray<AWaterVehicle*> RemovedWaterActors;                                        // 0x05A8 (size: 0x10)
    float UfoTimeRemaining;                                                           // 0x05B8 (size: 0x4)
    class USoundMix* FadeSoundtrack;                                                  // 0x05C0 (size: 0x8)
    TSoftObjectPtr<class AActor> ChameleonEffectActor;                                // 0x05C8 (size: 0x28)
    bool IsChunchumanchuIsland;                                                       // 0x05F0 (size: 0x1)
    class ULevelSequence* SequenceToPlay;                                             // 0x05F8 (size: 0x8)
    class UNotification_C* QuestPopup;                                                // 0x0600 (size: 0x8)

    bool DisplayInteractionInfo(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent, class UStaticMeshComponent*& StaticMeshComponent);
    bool CanBeInteractable(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    bool SimpleInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    void Finished_878AD4F549E62EA1E9AB53828853F67A();
    void DisableInteractionInfo(class APawn* Pawn);
    void ShowQuestPopup();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_PopcornMachineButton_BP(int32 EntryPoint);
}; // Size: 0x608

#endif
