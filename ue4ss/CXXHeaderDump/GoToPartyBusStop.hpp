#ifndef UE4SS_SDK_GoToPartyBusStop_HPP
#define UE4SS_SDK_GoToPartyBusStop_HPP

class UGoToPartyBusStop_C : public UIteractableActorTask
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0150 (size: 0x8)
    float TimeToSpawn;                                                                // 0x0158 (size: 0x4)
    class AGSSWheeledVehicle* AmericanBus;                                            // 0x0160 (size: 0x8)
    TArray<APawn*> BusGuys;                                                           // 0x0168 (size: 0x10)
    class UAudioComponent* 2D_Bus_Music;                                              // 0x0178 (size: 0x8)
    class ASoundActor_C* SoundActor;                                                  // 0x0180 (size: 0x8)
    class UAudioComponent* BusMusicAttached;                                          // 0x0188 (size: 0x8)
    class APartyBusHome_C* BusHome;                                                   // 0x0190 (size: 0x8)
    class USoundMix* FadeSoundtrack;                                                  // 0x0198 (size: 0x8)
    class AAICharacterBase* Character;                                                // 0x01A0 (size: 0x8)
    int32 NPCAmountToSpawn;                                                           // 0x01A8 (size: 0x4)
    bool bIsAsyncLoadingActive;                                                       // 0x01AC (size: 0x1)
    TSoftClassPtr<AGSSWheeledVehicle> Init Vehicle;                                   // 0x01B0 (size: 0x28)

    void OnNotifyEnd_D1980409405094DF1524048B639F3F2D(FName NotifyName);
    void OnNotifyBegin_D1980409405094DF1524048B639F3F2D(FName NotifyName);
    void OnInterrupted_D1980409405094DF1524048B639F3F2D(FName NotifyName);
    void OnBlendOut_D1980409405094DF1524048B639F3F2D(FName NotifyName);
    void OnCompleted_D1980409405094DF1524048B639F3F2D(FName NotifyName);
    void OnLoaded_A2A5F7A74375782719219FB8EED306AB(UClass* Loaded);
    void InitializeTask(class AAICharacterBase* Character, const TArray<FTaskProgress>& NewTasksProgress);
    void StartTask(class ACharacter* Character);
    void TickObject(float DeltaTime);
    void FinishBeginTask(const ETaskResult TaskState, FString FinishReason);
    void OnDestroyed(class AActor* DestroyedActor);
    void OnCloseOpenGasStation(const bool bIsOpen);
    void OnFinishedAsyncLoadCustomerPartySpot(const class AAICharacterBase* AICharacterBase, const EHumanType HumanType);
    void MakeVisible();
    void AsyncLoad();
    void OnUfoUsed();
    void ExecuteUbergraph_GoToPartyBusStop(int32 EntryPoint);
}; // Size: 0x1D8

#endif
