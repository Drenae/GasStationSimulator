#ifndef UE4SS_SDK_SharkWaterMovementComponent_BP_HPP
#define UE4SS_SDK_SharkWaterMovementComponent_BP_HPP

class USharkWaterMovementComponent_BP_C : public UWaterMovementComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03E8 (size: 0x8)
    bool AttackPlaying;                                                               // 0x03F0 (size: 0x1)
    FVector StartingLocation;                                                         // 0x03F4 (size: 0xC)
    class UCurveFloat* ZLerpCurve;                                                    // 0x0400 (size: 0x8)
    bool bLerpZ;                                                                      // 0x0408 (size: 0x1)
    float Time;                                                                       // 0x040C (size: 0x4)
    FVector LerpZStartLocation;                                                       // 0x0410 (size: 0xC)

    void LerpToProperZ(float DeltaTime);
    void HandleSharkDeath();
    void StartHunting();
    void ShouldContinueHunting(bool& ShouldContinueHunting);
    void DestroyTargetActor();
    void DestroyOwnerActor();
    void GoHome();
    void GetAnimInstance(class UPilotsAnimInstance*& AsPilots Anim Instance, bool& IsValid);
    void PositionForAttack();
    void WaterMoveToLocation();
    void Handle Target Point();
    void OnNotifyEnd_8AB22E654710F70CC35C0EB1A49AB0B0(FName NotifyName);
    void OnNotifyBegin_8AB22E654710F70CC35C0EB1A49AB0B0(FName NotifyName);
    void OnInterrupted_8AB22E654710F70CC35C0EB1A49AB0B0(FName NotifyName);
    void OnBlendOut_8AB22E654710F70CC35C0EB1A49AB0B0(FName NotifyName);
    void OnCompleted_8AB22E654710F70CC35C0EB1A49AB0B0(FName NotifyName);
    void OnNotifyEnd_ED7C11964B862A72C21D16BC1FA3D657(FName NotifyName);
    void OnNotifyBegin_ED7C11964B862A72C21D16BC1FA3D657(FName NotifyName);
    void OnInterrupted_ED7C11964B862A72C21D16BC1FA3D657(FName NotifyName);
    void OnBlendOut_ED7C11964B862A72C21D16BC1FA3D657(FName NotifyName);
    void OnCompleted_ED7C11964B862A72C21D16BC1FA3D657(FName NotifyName);
    void OnLoaded_ED9E080940B1F57ECCBB7B854879BF5E(class UObject* Loaded);
    void OnNotifyEnd_A49A4FD14A01C11179D08FA17D4C594F(FName NotifyName);
    void OnNotifyBegin_A49A4FD14A01C11179D08FA17D4C594F(FName NotifyName);
    void OnInterrupted_A49A4FD14A01C11179D08FA17D4C594F(FName NotifyName);
    void OnBlendOut_A49A4FD14A01C11179D08FA17D4C594F(FName NotifyName);
    void OnCompleted_A49A4FD14A01C11179D08FA17D4C594F(FName NotifyName);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void InitializeMovement(bool IsLoadedFromSave, bool IsGoingHome, int32 CurrentWaterMovementPointIndex);
    void StartAttack();
    void HomeMontage();
    void PlayAttackAnimation();
    void ExecuteUbergraph_SharkWaterMovementComponent_BP(int32 EntryPoint);
}; // Size: 0x41C

#endif
