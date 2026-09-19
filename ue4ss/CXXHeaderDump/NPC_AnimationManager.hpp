#ifndef UE4SS_SDK_NPC_AnimationManager_HPP
#define UE4SS_SDK_NPC_AnimationManager_HPP

class UNPC_AnimationManager_C : public UNPCAnimationManagerBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0120 (size: 0x8)
    bool ShouldRotateYaw;                                                             // 0x0128 (size: 0x1)
    FName AnimCurveName;                                                              // 0x012C (size: 0x8)
    FRotator StartingRotation;                                                        // 0x0134 (size: 0xC)
    FRotator DesiredRotation;                                                         // 0x0140 (size: 0xC)
    bool ShouldPosition;                                                              // 0x014C (size: 0x1)
    FVector PositionToGo;                                                             // 0x0150 (size: 0xC)
    FVector OwnerPosition;                                                            // 0x015C (size: 0xC)
    class AChair_Bp_C* Chair;                                                         // 0x0168 (size: 0x8)
    bool isSitting;                                                                   // 0x0170 (size: 0x1)
    class AActor* SpawnedProp;                                                        // 0x0178 (size: 0x8)
    FVector SocketPosition;                                                           // 0x0180 (size: 0xC)
    FRotator SocketRotation;                                                          // 0x018C (size: 0xC)
    class UParticleSystemComponent* SpawnedEmitter;                                   // 0x0198 (size: 0x8)
    FName ParticleSocket;                                                             // 0x01A0 (size: 0x8)
    FTransform StartingTransform;                                                     // 0x01B0 (size: 0x30)
    FTransform DesiredTransform;                                                      // 0x01E0 (size: 0x30)
    TArray<FBaseCharacterSkeletonMontage> Montages Skeletons;                         // 0x0210 (size: 0x10)
    class AAICharacterBase* AICharacterBase;                                          // 0x0220 (size: 0x8)
    FGameplayTag Tag to Check;                                                        // 0x0228 (size: 0x8)

    void HandleSittingMontages(class AActor* SittingTarget);
    void SetOwningCharacter();
    void CheckFacing(bool& SameFacing);
    void GetCarInfo(FTransform& CarEnterT, FTransform& DriverPositionT, const FTransform& PawnTransform);
    float GetMontageLength(float ExtraTime, float NoMontageWaitTime);
    void Get Gender(ECharacterGender& Character Gender);
    void AttachParticleSystem();
    void DestroyParticle();
    void Spawn Particle(FName Socket, class UParticleSystem* EmitterTemplate);
    void GetCurrentActiveMontage(class UAnimMontage*& Output_Get);
    void SetLookatbool(bool LookAt?);
    void GetOwnerAnimBp(class UNPC_Ai_MasterAnimBp_C*& AsNPC Ai Master Anim Bp);
    void SetCanPlayHitReact(bool HitReact);
    void CalculateIdleRandomChance(int32& IdleNumberOut);
    void DestroyProp();
    void DeAttachProp(float TimeToDestroy);
    void SpawnProp(FName SocketName, TSubclassOf<class AActor> ClassToSpawn, class AActor*& SpawnedPropRef);
    void getOwnerSkeletalMesh(class USkeletalMeshComponent*& SkeletalMesh);
    void SetShouldLookAt(bool ShouldLookAt);
    void DisableOwnerCollision();
    void Rotate();
    void test(FVector DesiredLocation);
    void StartPositioning(FVector VectorToMoveTo, FVector OwnerPosition);
    void GetOwnerPosition(FVector& OwnerPosition);
    void StartYawRotation();
    void Stop Yaw Rotation();
    void GetOwnerRotation(FRotator& StartingRotation);
    void OnNotifyEnd_3FBD8B2342B903B342E8E89E99B54A7C(FName NotifyName);
    void OnNotifyBegin_3FBD8B2342B903B342E8E89E99B54A7C(FName NotifyName);
    void OnInterrupted_3FBD8B2342B903B342E8E89E99B54A7C(FName NotifyName);
    void OnBlendOut_3FBD8B2342B903B342E8E89E99B54A7C(FName NotifyName);
    void OnCompleted_3FBD8B2342B903B342E8E89E99B54A7C(FName NotifyName);
    void OnNotifyEnd_B30C8C23454B5790F6EC96AD3176F7A4(FName NotifyName);
    void OnNotifyBegin_B30C8C23454B5790F6EC96AD3176F7A4(FName NotifyName);
    void OnInterrupted_B30C8C23454B5790F6EC96AD3176F7A4(FName NotifyName);
    void OnBlendOut_B30C8C23454B5790F6EC96AD3176F7A4(FName NotifyName);
    void OnCompleted_B30C8C23454B5790F6EC96AD3176F7A4(FName NotifyName);
    void OnNotifyEnd_802B13AE45D8F1F90D0AFDB9946FFC96(FName NotifyName);
    void OnNotifyBegin_802B13AE45D8F1F90D0AFDB9946FFC96(FName NotifyName);
    void OnInterrupted_802B13AE45D8F1F90D0AFDB9946FFC96(FName NotifyName);
    void OnBlendOut_802B13AE45D8F1F90D0AFDB9946FFC96(FName NotifyName);
    void OnCompleted_802B13AE45D8F1F90D0AFDB9946FFC96(FName NotifyName);
    void OnNotifyEnd_83D1E5FE4C48B347E4BB0392EDF1AB4F(FName NotifyName);
    void OnNotifyBegin_83D1E5FE4C48B347E4BB0392EDF1AB4F(FName NotifyName);
    void OnInterrupted_83D1E5FE4C48B347E4BB0392EDF1AB4F(FName NotifyName);
    void OnBlendOut_83D1E5FE4C48B347E4BB0392EDF1AB4F(FName NotifyName);
    void OnCompleted_83D1E5FE4C48B347E4BB0392EDF1AB4F(FName NotifyName);
    void OnNotifyEnd_587678D3405DE781DD317A918C58856A(FName NotifyName);
    void OnNotifyBegin_587678D3405DE781DD317A918C58856A(FName NotifyName);
    void OnInterrupted_587678D3405DE781DD317A918C58856A(FName NotifyName);
    void OnBlendOut_587678D3405DE781DD317A918C58856A(FName NotifyName);
    void OnCompleted_587678D3405DE781DD317A918C58856A(FName NotifyName);
    void OnNotifyEnd_44950C7F424FB144D9C5F1AB39FF7862(FName NotifyName);
    void OnNotifyBegin_44950C7F424FB144D9C5F1AB39FF7862(FName NotifyName);
    void OnInterrupted_44950C7F424FB144D9C5F1AB39FF7862(FName NotifyName);
    void OnBlendOut_44950C7F424FB144D9C5F1AB39FF7862(FName NotifyName);
    void OnCompleted_44950C7F424FB144D9C5F1AB39FF7862(FName NotifyName);
    void OnNotifyEnd_DAC506384464313594F5399A769A5671(FName NotifyName);
    void OnNotifyBegin_DAC506384464313594F5399A769A5671(FName NotifyName);
    void OnInterrupted_DAC506384464313594F5399A769A5671(FName NotifyName);
    void OnBlendOut_DAC506384464313594F5399A769A5671(FName NotifyName);
    void OnCompleted_DAC506384464313594F5399A769A5671(FName NotifyName);
    void OnNotifyEnd_8F94E27243A38ED6D0B9A0BECA9A790F(FName NotifyName);
    void OnNotifyBegin_8F94E27243A38ED6D0B9A0BECA9A790F(FName NotifyName);
    void OnInterrupted_8F94E27243A38ED6D0B9A0BECA9A790F(FName NotifyName);
    void OnBlendOut_8F94E27243A38ED6D0B9A0BECA9A790F(FName NotifyName);
    void OnCompleted_8F94E27243A38ED6D0B9A0BECA9A790F(FName NotifyName);
    void OnNotifyEnd_CF6C748947315AB8582BB880935B7762(FName NotifyName);
    void OnNotifyBegin_CF6C748947315AB8582BB880935B7762(FName NotifyName);
    void OnInterrupted_CF6C748947315AB8582BB880935B7762(FName NotifyName);
    void OnBlendOut_CF6C748947315AB8582BB880935B7762(FName NotifyName);
    void OnCompleted_CF6C748947315AB8582BB880935B7762(FName NotifyName);
    void OnNotifyEnd_DBD7A27849ACB5083C1C1DBDA5AC638C(FName NotifyName);
    void OnNotifyBegin_DBD7A27849ACB5083C1C1DBDA5AC638C(FName NotifyName);
    void OnInterrupted_DBD7A27849ACB5083C1C1DBDA5AC638C(FName NotifyName);
    void OnBlendOut_DBD7A27849ACB5083C1C1DBDA5AC638C(FName NotifyName);
    void OnCompleted_DBD7A27849ACB5083C1C1DBDA5AC638C(FName NotifyName);
    void OnNotifyEnd_C29B6E274741B64BAAB86D95E777E1F5(FName NotifyName);
    void OnNotifyBegin_C29B6E274741B64BAAB86D95E777E1F5(FName NotifyName);
    void OnInterrupted_C29B6E274741B64BAAB86D95E777E1F5(FName NotifyName);
    void OnBlendOut_C29B6E274741B64BAAB86D95E777E1F5(FName NotifyName);
    void OnCompleted_C29B6E274741B64BAAB86D95E777E1F5(FName NotifyName);
    void OnNotifyEnd_75967A364D06EC1CEB588D854D2B11FD(FName NotifyName);
    void OnNotifyBegin_75967A364D06EC1CEB588D854D2B11FD(FName NotifyName);
    void OnInterrupted_75967A364D06EC1CEB588D854D2B11FD(FName NotifyName);
    void OnBlendOut_75967A364D06EC1CEB588D854D2B11FD(FName NotifyName);
    void OnCompleted_75967A364D06EC1CEB588D854D2B11FD(FName NotifyName);
    void ReceiveBeginPlay();
    void PlayMontageWithYawRotation(class USkeletalMeshComponent* SkeletalMesh, class UAnimMontage* Montage, float TimeToStopRotation, float PlayRate, FName AnimCurveName, FRotator DesiredRotation);
    void PlayMontageAndPosition(class USkeletalMeshComponent* SkeletalMesh, class UAnimMontage* MontageToPlay, FVector NewPosition, FVector Offset);
    void StandUp();
    void CalculateRandomIdle();
    void PositionOwner(bool ShouldPosition, FVector PositionToGo);
    void GssMontagePlayWithPosition(class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, FName StartingSection, FTransform StartingTransform, FTransform DesiredTransform);
    void StartSitting(class AActor* SittingTarget);
    void EndSitting();
    void ExecuteUbergraph_NPC_AnimationManager(int32 EntryPoint);
}; // Size: 0x230

#endif
