#ifndef UE4SS_SDK_UfoResetButton_BP_HPP
#define UE4SS_SDK_UfoResetButton_BP_HPP

class AUfoResetButton_BP_C : public AInteractableBuilding
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0580 (size: 0x8)
    class UStaticMeshComponent* DiggerResetButton;                                    // 0x0588 (size: 0x8)
    TArray<FVector> RemovedActorsPositions;                                           // 0x0590 (size: 0x10)
    TArray<APawn*> RemovedActors;                                                     // 0x05A0 (size: 0x10)
    TArray<AWaterVehicle*> RemovedWaterActors;                                        // 0x05B0 (size: 0x10)
    float UfoTimeRemaining;                                                           // 0x05C0 (size: 0x4)
    class USoundMix* FadeSoundtrack;                                                  // 0x05C8 (size: 0x8)
    TSoftObjectPtr<class AActor> ChameleonEffectActor;                                // 0x05D0 (size: 0x28)
    bool IsChunchumanchuIsland;                                                       // 0x05F8 (size: 0x1)
    class ULevelSequence* SequenceToPlay;                                             // 0x0600 (size: 0x8)

    FName GetInteractionName();
    void SetChameleonTick(bool bTickEnabled);
    void CollectVehiclesToFly();
    bool SimpleInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    void ReceiveTick(float DeltaSeconds);
    void StartUfo();
    void OnFinished_Event_0();
    void StartEventUfo();
    void ReceiveBeginPlay();
    void RespawnDeliveryBoats();
    void ExecuteUbergraph_UfoResetButton_BP(int32 EntryPoint);
}; // Size: 0x608

#endif
