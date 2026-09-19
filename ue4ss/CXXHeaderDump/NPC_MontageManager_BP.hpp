#ifndef UE4SS_SDK_NPC_MontageManager_BP_HPP
#define UE4SS_SDK_NPC_MontageManager_BP_HPP

class UNPC_MontageManager_BP_C : public UNPC_MontageManager
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0148 (size: 0x8)
    TEnumAsByte<ERotationDirection::Type> DirectionToRotate;                          // 0x0150 (size: 0x1)
    class USceneComponent* Warp Target;                                               // 0x0158 (size: 0x8)
    TArray<FBaseCharacterSkeletonMontage> Montages Skeletons;                         // 0x0160 (size: 0x10)
    FGameplayTag MontageTag to Check;                                                 // 0x0170 (size: 0x8)
    FGameplayTag PositioningTagToCheck;                                               // 0x0178 (size: 0x8)
    TArray<FBaseCharacterSkeletonMontage> PositioningMontages;                        // 0x0180 (size: 0x10)
    TArray<FBaseCharacterSkeletonMontage> SittingHitReacts;                           // 0x0190 (size: 0x10)
    TSubclassOf<class AActor> Actor to Spawn;                                         // 0x01A0 (size: 0x8)
    FGameplayTag Part to Activate;                                                    // 0x01A8 (size: 0x8)
    TArray<FBaseCharacterSkeletonMontage> RVLeavingMontages;                          // 0x01B0 (size: 0x10)
    TArray<FBaseCharacterSkeletonMontage> Minigames Montages;                         // 0x01C0 (size: 0x10)
    TArray<FBaseCharacterSkeletonMontage> Minigames Extra Objects Montages;           // 0x01D0 (size: 0x10)
    class ARvGuestServiceSpot* CurrentGuestServiceSpot;                               // 0x01E0 (size: 0x8)
    class AActor* SpawnedActorInHandRef;                                              // 0x01E8 (size: 0x8)
    FGameplayTag CurrentGuestServiceTag;                                              // 0x01F0 (size: 0x8)
    bool bIsInMinigame;                                                               // 0x01F8 (size: 0x1)

    void FindPoseToLoad(FGameplayTag Tag, TSoftObjectPtr<class UAnimSequence>& Current Hands Layer Pose);
    void HandleSittingDirection();
    void CheckFacingForSitting(bool& bSameFacing);
    void GetOwnerCharacter(class ACharacter*& AsCharacter);
    void HandlePositioning(class USceneComponent* WarpTarget);
    void GetAnimInstance(class UHumanAnimInstance*& AsHuman Anim Instance, class UHumanSharedAnimInstance*& AsHuman Shared Anim Instance);
    void ChoosePositiongMontage(class UAnimMontage*& Current Positioning Step);
    void OnNotifyEnd_FFEE344F4CDBB05C58EDD89038306F27(FName NotifyName);
    void OnNotifyBegin_FFEE344F4CDBB05C58EDD89038306F27(FName NotifyName);
    void OnInterrupted_FFEE344F4CDBB05C58EDD89038306F27(FName NotifyName);
    void OnBlendOut_FFEE344F4CDBB05C58EDD89038306F27(FName NotifyName);
    void OnCompleted_FFEE344F4CDBB05C58EDD89038306F27(FName NotifyName);
    void OnNotifyEnd_7D872FC0441D990C0F723280E0A0B21B(FName NotifyName);
    void OnNotifyBegin_7D872FC0441D990C0F723280E0A0B21B(FName NotifyName);
    void OnInterrupted_7D872FC0441D990C0F723280E0A0B21B(FName NotifyName);
    void OnBlendOut_7D872FC0441D990C0F723280E0A0B21B(FName NotifyName);
    void OnCompleted_7D872FC0441D990C0F723280E0A0B21B(FName NotifyName);
    void OnNotifyEnd_FCDD81964763E244B2DAF3B32920CAFA(FName NotifyName);
    void OnNotifyBegin_FCDD81964763E244B2DAF3B32920CAFA(FName NotifyName);
    void OnInterrupted_FCDD81964763E244B2DAF3B32920CAFA(FName NotifyName);
    void OnBlendOut_FCDD81964763E244B2DAF3B32920CAFA(FName NotifyName);
    void OnCompleted_FCDD81964763E244B2DAF3B32920CAFA(FName NotifyName);
    void OnNotifyEnd_39C203D346575BEA23B5549A62B9B1B4(FName NotifyName);
    void OnNotifyBegin_39C203D346575BEA23B5549A62B9B1B4(FName NotifyName);
    void OnInterrupted_39C203D346575BEA23B5549A62B9B1B4(FName NotifyName);
    void OnBlendOut_39C203D346575BEA23B5549A62B9B1B4(FName NotifyName);
    void OnCompleted_39C203D346575BEA23B5549A62B9B1B4(FName NotifyName);
    void OnNotifyEnd_267C8E1D47A39282F017A39B7CCA2E65(FName NotifyName);
    void OnNotifyBegin_267C8E1D47A39282F017A39B7CCA2E65(FName NotifyName);
    void OnInterrupted_267C8E1D47A39282F017A39B7CCA2E65(FName NotifyName);
    void OnBlendOut_267C8E1D47A39282F017A39B7CCA2E65(FName NotifyName);
    void OnCompleted_267C8E1D47A39282F017A39B7CCA2E65(FName NotifyName);
    void OnNotifyEnd_5F7B398E4DE3C3F4739D0C84726EBC86(FName NotifyName);
    void OnNotifyBegin_5F7B398E4DE3C3F4739D0C84726EBC86(FName NotifyName);
    void OnInterrupted_5F7B398E4DE3C3F4739D0C84726EBC86(FName NotifyName);
    void OnBlendOut_5F7B398E4DE3C3F4739D0C84726EBC86(FName NotifyName);
    void OnCompleted_5F7B398E4DE3C3F4739D0C84726EBC86(FName NotifyName);
    void OnNotifyEnd_E01AEFFF4AE4974F36C483AF29642D41(FName NotifyName);
    void OnNotifyBegin_E01AEFFF4AE4974F36C483AF29642D41(FName NotifyName);
    void OnInterrupted_E01AEFFF4AE4974F36C483AF29642D41(FName NotifyName);
    void OnBlendOut_E01AEFFF4AE4974F36C483AF29642D41(FName NotifyName);
    void OnCompleted_E01AEFFF4AE4974F36C483AF29642D41(FName NotifyName);
    void OnNotifyEnd_2E51617B43BCB7D7887A49B47980E171(FName NotifyName);
    void OnNotifyBegin_2E51617B43BCB7D7887A49B47980E171(FName NotifyName);
    void OnInterrupted_2E51617B43BCB7D7887A49B47980E171(FName NotifyName);
    void OnBlendOut_2E51617B43BCB7D7887A49B47980E171(FName NotifyName);
    void OnCompleted_2E51617B43BCB7D7887A49B47980E171(FName NotifyName);
    void OnLoaded_B94379784236DF94DAACC38E2F260E9E(class UObject* Loaded);
    void OnNotifyEnd_BD08DC5A4D9B883B6EE5778D23466221(FName NotifyName);
    void OnNotifyBegin_BD08DC5A4D9B883B6EE5778D23466221(FName NotifyName);
    void OnInterrupted_BD08DC5A4D9B883B6EE5778D23466221(FName NotifyName);
    void OnBlendOut_BD08DC5A4D9B883B6EE5778D23466221(FName NotifyName);
    void OnCompleted_BD08DC5A4D9B883B6EE5778D23466221(FName NotifyName);
    void OnNotifyEnd_2EF0553049229A2AD95FEA85D55A36A8(FName NotifyName);
    void OnNotifyBegin_2EF0553049229A2AD95FEA85D55A36A8(FName NotifyName);
    void OnInterrupted_2EF0553049229A2AD95FEA85D55A36A8(FName NotifyName);
    void OnBlendOut_2EF0553049229A2AD95FEA85D55A36A8(FName NotifyName);
    void OnCompleted_2EF0553049229A2AD95FEA85D55A36A8(FName NotifyName);
    void OnFail_5E90E8B94F052E5AE7F91F829262F0AC(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_5E90E8B94F052E5AE7F91F829262F0AC(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnFail_95D3A3524AB0B4610B7948B6F0219570(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_95D3A3524AB0B4610B7948B6F0219570(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnNotifyEnd_EF1E4D604AA0CE35CBA55A82B81865ED(FName NotifyName);
    void OnNotifyBegin_EF1E4D604AA0CE35CBA55A82B81865ED(FName NotifyName);
    void OnInterrupted_EF1E4D604AA0CE35CBA55A82B81865ED(FName NotifyName);
    void OnBlendOut_EF1E4D604AA0CE35CBA55A82B81865ED(FName NotifyName);
    void OnCompleted_EF1E4D604AA0CE35CBA55A82B81865ED(FName NotifyName);
    void ReceiveBeginPlay();
    void PlayPositioningStepMontage(class USceneComponent* WarpTarget, class UAnimMontage* MontageToPlayAfterPositioning, class AActor* ExtraObject, class UAnimMontage* ExtraObjectMontage, class UPrimitiveComponent* ObjectToAttach, bool bShouldResetDefaultCharState, float PlayRate, FName StartingSection, bool bShouldPlayExtraObjectMontage, bool bShouldAttachObject, class USkeletalMeshComponent* ExtraObjectSkelMeshComp);
    void PlaySittingMontage(class USceneComponent* SittingWarpTarget, float PlayRate, FName StartingSection);
    void PlaySittingEnd();
    void PlayEndMontage(class UAnimMontage* MontageToPlay, bool bShouldResetDefaultCharState, float PlayRate, class UAnimMontage* ExtraObjectMontageToPlay);
    void AttachObjectToHand(class UActorComponent* ObjectToAttach, FName SocketName);
    void DetachObjectFromHand();
    void FinishPositioningIfActive();
    void SittingHitReact(float PlayRate);
    void SpawnActorInHands(TSubclassOf<class AActor> ActorToSpawn, FName SocketName, FTransform SocketTransform);
    void DespawnSpawnedActosInHands();
    void ActivateHandLayer(FGameplayTag CarryingPose);
    void DeactivateHandsLayer();
    void PlayRVSpawningAnimation(class AActor* CurrentRV, float PlayRate);
    void OnStartedRvGuestService_Event(const FGameplayTag& ServiceTag, class ARvGuestServiceSpot* GuestServiceSpot, class AAICharacterBase* Customer, class ARVCampEmployee* Employee);
    void OnEndedRvGuestService_Event(const FGameplayTag& ServiceTag, class ARvGuestServiceSpot* GuestServiceSpot, class AAICharacterBase* Customer, class ARVCampEmployee* Employee);
    void OnServiceStarted_Automated(const FGameplayTag& ServiceTag, class ARvGuestServiceSpot* GuestServiceSpot, class AAICharacterBase* Customer, class ARVCampEmployee* Employee);
    void OnServiceEnded_Automated(const FGameplayTag& ServiceTag, class ARvGuestServiceSpot* GuestServiceSpot, class AAICharacterBase* Customer, class ARVCampEmployee* Employee);
    void OnServiceStarted(const FGameplayTag& ServiceTag, class ARvGuestServiceSpot* GuestServiceSpot, class AAICharacterBase* Customer);
    void OnServiceEnded(const FGameplayTag& ServiceTag, class ARvGuestServiceSpot* GuestServiceSpot, class AAICharacterBase* Customer);
    void OnServiceEnded_Automated_BlendOut();
    void GuestServiceSpawnActorInHand(TSubclassOf<class AActor> ActorToSpawn, FName SocketName);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void OnServiceStarted_Sauna(FGameplayTag ServiceTag, class ARvGuestServiceSpot* GuestServiceSpot, class UObject* Customer);
    void OnServiceEnded_Sauna(FGameplayTag ServiceTag, class ARvGuestServiceSpot* GuestServiceSpot, class UObject* Customer);
    void PlayRVMinigameMainSKMAnimation();
    void ExecuteUbergraph_NPC_MontageManager_BP(int32 EntryPoint);
}; // Size: 0x1F9

#endif
