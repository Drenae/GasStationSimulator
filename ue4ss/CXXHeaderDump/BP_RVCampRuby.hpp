#ifndef UE4SS_SDK_BP_RVCampRuby_HPP
#define UE4SS_SDK_BP_RVCampRuby_HPP

class ABP_RVCampRuby_C : public ARubyCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x06E0 (size: 0x8)
    class UStaticMeshComponent* SM_Megaphone;                                         // 0x06E8 (size: 0x8)
    class USkeletalMeshComponent* RubyShotGunOnTable;                                 // 0x06F0 (size: 0x8)
    class USkeletalMeshComponent* Sk_RubyShotgun_02;                                  // 0x06F8 (size: 0x8)
    class USkeletalMeshComponent* Body;                                               // 0x0700 (size: 0x8)
    TSoftObjectPtr<class AActor> RubyChair;                                           // 0x0708 (size: 0x28)
    TSoftObjectPtr<class UPrimaryDataAsset> NewVar_0;                                 // 0x0730 (size: 0x28)
    TSoftObjectPtr<class UQuestBase> Q018_Quest Finished;                             // 0x0758 (size: 0x28)
    TSoftObjectPtr<class UQuestBase> Q019_Quest Finished;                             // 0x0780 (size: 0x28)

    FName GetInteractionName();
    void PositionRubyTochair();
    void HandleShotGunsVisibilities(bool bShotGunInHands);
    void UserConstructionScript();
    void OnNotifyEnd_C5EAC32A49803235B843009527E2BE8A(FName NotifyName);
    void OnNotifyBegin_C5EAC32A49803235B843009527E2BE8A(FName NotifyName);
    void OnInterrupted_C5EAC32A49803235B843009527E2BE8A(FName NotifyName);
    void OnBlendOut_C5EAC32A49803235B843009527E2BE8A(FName NotifyName);
    void OnCompleted_C5EAC32A49803235B843009527E2BE8A(FName NotifyName);
    void ReceiveBeginPlay();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void PlayShotGunMontage();
    void SwitchRubyShotGunState(bool bShotGunInHand);
    void OnQuestFinished_Event_0(class UQuestBase* QuestFinished);
    void ExecuteUbergraph_BP_RVCampRuby(int32 EntryPoint);
}; // Size: 0x7A8

#endif
