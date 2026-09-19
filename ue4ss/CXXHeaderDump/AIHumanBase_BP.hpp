#ifndef UE4SS_SDK_AIHumanBase_BP_HPP
#define UE4SS_SDK_AIHumanBase_BP_HPP

class AAIHumanBase_BP_C : public AAICharacterBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0900 (size: 0x8)
    class UTextRenderComponent* TaskDebug;                                            // 0x0908 (size: 0x8)
    class USkeletalMeshComponent* ShadowCaster;                                       // 0x0910 (size: 0x8)
    class UNPC_AnimationManager_C* NPC_AnimationManager;                              // 0x0918 (size: 0x8)
    class UWidgetComponent* Dialog3D;                                                 // 0x0920 (size: 0x8)
    class UHumanAnimInstance* AnimMasterRef;                                          // 0x0928 (size: 0x8)
    FTimerHandle RotationDelegate;                                                    // 0x0930 (size: 0x8)
    float DestinateRotation;                                                          // 0x0938 (size: 0x4)
    float TurnSpeed;                                                                  // 0x093C (size: 0x4)
    float DeltaTxAi;                                                                  // 0x0940 (size: 0x4)
    class UAnimMontage* HitReactMontage;                                              // 0x0948 (size: 0x8)
    FName In Bone Name;                                                               // 0x0950 (size: 0x8)
    TArray<USoundBase*> PanicSoundsMale;                                              // 0x0958 (size: 0x10)
    TArray<USoundBase*> PanicSoundsFemale;                                            // 0x0968 (size: 0x10)
    class UAudioComponent* PanicSound;                                                // 0x0978 (size: 0x8)
    bool FuelNotificationReady;                                                       // 0x0980 (size: 0x1)
    TArray<USkeletalMeshComponent*> ComponentsToDisableTick;                          // 0x0988 (size: 0x10)
    TArray<UWidgetComponent*> WidgetsToCheckDistance;                                 // 0x0998 (size: 0x10)
    FTimerHandle WidgetsTimer;                                                        // 0x09A8 (size: 0x8)
    bool ForceTickDistanceUpdate;                                                     // 0x09B0 (size: 0x1)
    FRotator DefaultMeshRotation;                                                     // 0x09B4 (size: 0xC)
    FRotator StartMeshRotation;                                                       // 0x09C0 (size: 0xC)
    FRotator TargetMeshRotation;                                                      // 0x09CC (size: 0xC)
    float MeshTurnSpeed;                                                              // 0x09D8 (size: 0x4)
    float DeltaMeshRotation;                                                          // 0x09DC (size: 0x4)
    bool RotatingMesh;                                                                // 0x09E0 (size: 0x1)
    TArray<FBaseCharacterSkeletonMontage> Montages Skeletons;                         // 0x09E8 (size: 0x10)
    bool IsTickIntervalIncreased;                                                     // 0x09F8 (size: 0x1)
    bool LastRenderState;                                                             // 0x09F9 (size: 0x1)
    bool ForceZeroTickInterval;                                                       // 0x09FA (size: 0x1)
    bool bRagdoll;                                                                    // 0x09FB (size: 0x1)
    FVector RagdollStartingLocation;                                                  // 0x09FC (size: 0xC)
    float CurrentRagdollT;                                                            // 0x0A08 (size: 0x4)

    void Get Go To Home Task Class(FString Reason, TSubclassOf<class UGoToHome_C>& Go To Home);
    void Ragdoll Move Capsule(float DeltaT);
    void HandleCannonHitSettings(bool Reset);
    void IsOccupyingParkingSpot();
    bool IsDeliveryClass_Helper();
    bool IsDennisClass_Helper();
    bool IsEmployeeClass_Helper();
    void GetHitSide(class AActor* DamageInstigator, TEnumAsByte<HitDirectionEnum::Type>& HitDirection);
    void Task Result(TSubclassOf<class UTaskBase> TaskClass, ERenown_Reasons RenownReason, ETaskResult TaskResult, float money, class UObject* Instaginator);
    void UserConstructionScript();
    void OnNotifyEnd_89DAB7BD43966EBA3F5B05AAFA0AB390(FName NotifyName);
    void OnNotifyBegin_89DAB7BD43966EBA3F5B05AAFA0AB390(FName NotifyName);
    void OnInterrupted_89DAB7BD43966EBA3F5B05AAFA0AB390(FName NotifyName);
    void OnBlendOut_89DAB7BD43966EBA3F5B05AAFA0AB390(FName NotifyName);
    void OnCompleted_89DAB7BD43966EBA3F5B05AAFA0AB390(FName NotifyName);
    void OnNotifyEnd_B7EB05D4446CC0E57C31E183B63FF330(FName NotifyName);
    void OnNotifyBegin_B7EB05D4446CC0E57C31E183B63FF330(FName NotifyName);
    void OnInterrupted_B7EB05D4446CC0E57C31E183B63FF330(FName NotifyName);
    void OnBlendOut_B7EB05D4446CC0E57C31E183B63FF330(FName NotifyName);
    void OnCompleted_B7EB05D4446CC0E57C31E183B63FF330(FName NotifyName);
    void OnNotifyEnd_1662F3E24F9D29E2D216B385B32DAABC(FName NotifyName);
    void OnNotifyBegin_1662F3E24F9D29E2D216B385B32DAABC(FName NotifyName);
    void OnInterrupted_1662F3E24F9D29E2D216B385B32DAABC(FName NotifyName);
    void OnBlendOut_1662F3E24F9D29E2D216B385B32DAABC(FName NotifyName);
    void OnCompleted_1662F3E24F9D29E2D216B385B32DAABC(FName NotifyName);
    void OnNotifyEnd_9D98FB5442CE1A0E7929368AD3436198(FName NotifyName);
    void OnNotifyBegin_9D98FB5442CE1A0E7929368AD3436198(FName NotifyName);
    void OnInterrupted_9D98FB5442CE1A0E7929368AD3436198(FName NotifyName);
    void OnBlendOut_9D98FB5442CE1A0E7929368AD3436198(FName NotifyName);
    void OnCompleted_9D98FB5442CE1A0E7929368AD3436198(FName NotifyName);
    void OnNotifyEnd_F0E7C84948E3F93D0F9AD89785D4FA7C(FName NotifyName);
    void OnNotifyBegin_F0E7C84948E3F93D0F9AD89785D4FA7C(FName NotifyName);
    void OnInterrupted_F0E7C84948E3F93D0F9AD89785D4FA7C(FName NotifyName);
    void OnBlendOut_F0E7C84948E3F93D0F9AD89785D4FA7C(FName NotifyName);
    void OnCompleted_F0E7C84948E3F93D0F9AD89785D4FA7C(FName NotifyName);
    void OnNotifyEnd_80E54EA04BF0BDCF5EB19891B3AE8096(FName NotifyName);
    void OnNotifyBegin_80E54EA04BF0BDCF5EB19891B3AE8096(FName NotifyName);
    void OnInterrupted_80E54EA04BF0BDCF5EB19891B3AE8096(FName NotifyName);
    void OnBlendOut_80E54EA04BF0BDCF5EB19891B3AE8096(FName NotifyName);
    void OnCompleted_80E54EA04BF0BDCF5EB19891B3AE8096(FName NotifyName);
    void ReceiveBeginPlay();
    void RotateToTarget(FRotator DeltaRotation);
    void CustomEvent_0();
    void OnFinishedTask(TSubclassOf<class UTaskBase> FinishedTaskClass, ERenown_Reasons RenownReason, ETaskResult TaskResult, float TotalMoney, class AActor* Instaginator);
    void ReceiveAnyDamage(float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
    void DebugTask();
    void ReceiveDestroyed();
    void UFO();
    void CustomerProductNotFound(const TArray<TSubclassOf<class AProduct>>& ProductsNotFound, float Timer);
    void ReceiveTick(float DeltaSeconds);
    void GoToHome(FName Reason);
    void DestroySelf();
    void CannonBallHit(FVector Direction);
    void SetTaskDebugVisiblity(bool NewVisibility);
    void OnNotEnoughFuelForTask(EEmployeeTask TaskType);
    void PrepareFuelNotification();
    void CheckForWidgetsVisibility();
    void RotateMesh(FRotator TargetRotation);
    void ResetMeshRotation();
    void OnSetPhotoModeActive(const bool PhotoModeActive);
    void ToggleComponentsTick(bool bEnable, bool bMainMesh);
    void GetUpFromRagdoll();
    void FlyingRVCustomerCheck();
    void ExecuteUbergraph_AIHumanBase_BP(int32 EntryPoint);
}; // Size: 0xA0C

#endif
