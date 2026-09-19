#ifndef UE4SS_SDK_TrashItem_VolcanoRock_HPP
#define UE4SS_SDK_TrashItem_VolcanoRock_HPP

class ATrashItem_VolcanoRock_C : public A00_TrashItem_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0400 (size: 0x8)
    FTimerHandle VelocityTimer;                                                       // 0x0408 (size: 0x8)

    bool UseItem(class APawn* Pawn, bool Throw, float AimingTime);
    bool SimpleInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    void AddImpulseWhenPhysicsActive(FVector Impulse);
    void ReceiveBeginPlay();
    void OnFinishGameLoaded_Event_0(const bool GameLoaded);
    void CheckForEnableNavigation();
    void CheckVelocity();
    void ExecuteUbergraph_TrashItem_VolcanoRock(int32 EntryPoint);
}; // Size: 0x410

#endif
