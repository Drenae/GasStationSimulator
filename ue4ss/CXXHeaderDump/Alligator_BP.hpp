#ifndef UE4SS_SDK_Alligator_BP_HPP
#define UE4SS_SDK_Alligator_BP_HPP

class AAlligator_BP_C : public ASkeletalMeshActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* ChristmasHat;                                         // 0x02B0 (size: 0x8)
    class UAudioComponent* AlligatorSoundMaker;                                       // 0x02B8 (size: 0x8)
    class UBoxComponent* TrashMealCheck;                                              // 0x02C0 (size: 0x8)
    TSoftObjectPtr<class UStaticMesh> ChristmasHatToLoad;                             // 0x02C8 (size: 0x28)
    bool isChristmasHatSet;                                                           // 0x02F0 (size: 0x1)

    void OnNotifyEnd_FC9C90DA4F3B5AFA0FA1309268648D21(FName NotifyName);
    void OnNotifyBegin_FC9C90DA4F3B5AFA0FA1309268648D21(FName NotifyName);
    void OnInterrupted_FC9C90DA4F3B5AFA0FA1309268648D21(FName NotifyName);
    void OnBlendOut_FC9C90DA4F3B5AFA0FA1309268648D21(FName NotifyName);
    void OnCompleted_FC9C90DA4F3B5AFA0FA1309268648D21(FName NotifyName);
    void OnNotifyEnd_B8BBEB0F4CBB861A6D725B9780A3DD79(FName NotifyName);
    void OnNotifyBegin_B8BBEB0F4CBB861A6D725B9780A3DD79(FName NotifyName);
    void OnInterrupted_B8BBEB0F4CBB861A6D725B9780A3DD79(FName NotifyName);
    void OnBlendOut_B8BBEB0F4CBB861A6D725B9780A3DD79(FName NotifyName);
    void OnCompleted_B8BBEB0F4CBB861A6D725B9780A3DD79(FName NotifyName);
    void ReceiveBeginPlay();
    void TrashEater(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnGameplaySettingsApplied(bool bAppliedSetting);
    void ExecuteUbergraph_Alligator_BP(int32 EntryPoint);
}; // Size: 0x2F1

#endif
