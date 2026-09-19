#ifndef UE4SS_SDK_GoToBusStop_HPP
#define UE4SS_SDK_GoToBusStop_HPP

class UGoToBusStop_C : public UIteractableActorTask
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0150 (size: 0x8)
    float TimeToSpawn;                                                                // 0x0158 (size: 0x4)
    class AAmericanBUS_BP_C* AmericanBus;                                             // 0x0160 (size: 0x8)
    TArray<APawn*> BusGuys;                                                           // 0x0168 (size: 0x10)
    class UAudioComponent* 2D_Bus_Music;                                              // 0x0178 (size: 0x8)
    class ASoundActor_C* SoundActor;                                                  // 0x0180 (size: 0x8)
    class UAudioComponent* BusMusicAttached;                                          // 0x0188 (size: 0x8)
    class ABusHome_BP_C* BusHome;                                                     // 0x0190 (size: 0x8)
    class USoundMix* FadeSoundtrack;                                                  // 0x0198 (size: 0x8)
    class AAICharacterBase* Character;                                                // 0x01A0 (size: 0x8)
    bool bNotAllBusGuys;                                                              // 0x01A8 (size: 0x1)
    bool bIsAsyncLoadingActive;                                                       // 0x01A9 (size: 0x1)
    FTimerHandle TryFindBusStopTimer;                                                 // 0x01B0 (size: 0x8)
    TArray<FBaseCharacterSkeletonMontage> Montages Skeletons;                         // 0x01B8 (size: 0x10)
    TSoftClassPtr<AGSSWheeledVehicle> NULL;                                           // 0x01C8 (size: 0x28)
    FTimerHandle TryFindBusStopTimer2;                                                // 0x01F0 (size: 0x8)

    void OnNotifyEnd_322FB0E64BD7D57F7342D4974DDCB589(FName NotifyName);
    void OnNotifyBegin_322FB0E64BD7D57F7342D4974DDCB589(FName NotifyName);
    void OnInterrupted_322FB0E64BD7D57F7342D4974DDCB589(FName NotifyName);
    void OnBlendOut_322FB0E64BD7D57F7342D4974DDCB589(FName NotifyName);
    void OnCompleted_322FB0E64BD7D57F7342D4974DDCB589(FName NotifyName);
    void OnLoaded_EC6DEA364CAC3E0112EB53906455AFC8(UClass* Loaded);
    void InitializeTask(class AAICharacterBase* Character, const TArray<FTaskProgress>& NewTasksProgress);
    void StartTask(class ACharacter* Character);
    void TickObject(float DeltaTime);
    void FinishBeginTask(const ETaskResult TaskState, FString FinishReason);
    void OnDestroyed(class AActor* DestroyedActor);
    void MakeVisible();
    void OnFinishedAsyncLoadCustomer(const class AAICharacterBase* AICharacterBase, const EHumanType HumanType);
    void SetAsyncLoadingActive();
    void TryFindBusStop();
    void OnAudioFinished_Event_0();
    void OnDestroyed_Event_0(class AActor* DestroyedActor);
    void TryFindBusStop2();
    void ExecuteUbergraph_GoToBusStop(int32 EntryPoint);
}; // Size: 0x1F8

#endif
