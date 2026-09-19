#ifndef UE4SS_SDK_MagazineDoor_BP_HPP
#define UE4SS_SDK_MagazineDoor_BP_HPP

class AMagazineDoor_BP_C : public AMagazineDoor_Base_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0408 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0410 (size: 0x8)
    class UChildActorComponent* Link;                                                 // 0x0418 (size: 0x8)
    class UStaticMeshComponent* LockUp;                                               // 0x0420 (size: 0x8)
    class UStaticMeshComponent* LockDown;                                             // 0x0428 (size: 0x8)
    class UStaticMeshComponent* StaticMesh2;                                          // 0x0430 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x0438 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0440 (size: 0x8)
    class UStaticMeshComponent* Door;                                                 // 0x0448 (size: 0x8)
    float Timeline_0_angle_0FCB07664825968551F79EBC90E8D07B;                          // 0x0450 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_0FCB07664825968551F79EBC90E8D07B; // 0x0454 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0458 (size: 0x8)
    FTransform TargetTransform;                                                       // 0x0460 (size: 0x30)
    FTransform StartTarget;                                                           // 0x0490 (size: 0x30)
    class ANLP_DoorLink_C* DoorLink;                                                  // 0x04C0 (size: 0x8)

    bool SimpleInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    void TryUnlockDoor(bool& Unlocked);
    bool DisplayInteractionInfo(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent, class UStaticMeshComponent*& StaticMeshComponent);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void DisableInteractionInfo(class APawn* Pawn);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void OnSmartLinkReached_Event_0(class AActor* MovingActor, const FVector& DestinationPoint);
    void OnFinishGameLoaded_Event_0(const bool GameLoaded);
    void OpenDoor(class APawn* Instigator);
    void OnNewGameplayStuffUnlockStateChanged(FUnlockableGameplayStuffState NewUnlockableGameplayStuffState);
    void ExecuteUbergraph_MagazineDoor_BP(int32 EntryPoint);
}; // Size: 0x4C8

#endif
