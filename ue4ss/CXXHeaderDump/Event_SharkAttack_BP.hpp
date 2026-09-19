#ifndef UE4SS_SDK_Event_SharkAttack_BP_HPP
#define UE4SS_SDK_Event_SharkAttack_BP_HPP

class UEvent_SharkAttack_BP_C : public UEvent_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    bool bWaitToSpawnShark;                                                           // 0x00B0 (size: 0x1)
    TSoftObjectPtr<class ASharkSpawner_BP_C> SharkSpawner;                            // 0x00B8 (size: 0x28)
    bool bIgnoreCustomers;                                                            // 0x00E0 (size: 0x1)
    class USharkNotification_C* SharkNotification;                                    // 0x00E8 (size: 0x8)
    TSubclassOf<class USharkNotification_C> SharkNotificationClass;                   // 0x00F0 (size: 0x8)
    bool bSiren;                                                                      // 0x00F8 (size: 0x1)
    class UAudioComponent* AudioComponent;                                            // 0x0100 (size: 0x8)
    FGSSEventTime InitializedTime;                                                    // 0x0108 (size: 0x40)

    void UpdateTime(bool& IsTimeOver);
    void Finished_7800F52F497066A3DD1174B8CD6A7B0E();
    void Finished_DDF55E844516C3F0CB1F0A986C6E0516();
    void InitializeEvent(class APlayerController* NewPlayerController, FGSSEventTime NewGSSEventTime);
    void OnGameTimeUpdated(const FTimeStruct UpdatedTime);
    void SpawnShark();
    void OnAudioFinished();
    void OnTimeEnd();
    void ExecuteUbergraph_Event_SharkAttack_BP(int32 EntryPoint);
}; // Size: 0x148

#endif
