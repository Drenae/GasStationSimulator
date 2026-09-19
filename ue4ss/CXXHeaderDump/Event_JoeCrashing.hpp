#ifndef UE4SS_SDK_Event_JoeCrashing_HPP
#define UE4SS_SDK_Event_JoeCrashing_HPP

class UEvent_JoeCrashing_C : public UEvent_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    int32 MinHoursPassed;                                                             // 0x00B0 (size: 0x4)
    int32 MaxHoursPassed;                                                             // 0x00B4 (size: 0x4)
    float MinDistanceFromCrashSites;                                                  // 0x00B8 (size: 0x4)
    int32 DistanceRecheckTimeInMinutes;                                               // 0x00BC (size: 0x4)
    TSoftObjectPtr<class ALevelSequenceActor> JoeCrashSequence;                       // 0x00C0 (size: 0x28)
    bool Enabled;                                                                     // 0x00E8 (size: 0x1)

    void IsPlayerNearAnyCrashsite(bool& bNearCrashsite);
    void OnLoaded_2844B03141BD2E884B66FBB2592AACB2(class UObject* Loaded);
    void OnGameTimeUpdated(const FTimeStruct UpdatedTime);
    void InitializeEventWorld(class UWorld* World, bool bEventEnabled);
    void OnSequenceFInished();
    void OnMarshalWandsFinish(bool bSuccess);
    void InitializeEvent(class APlayerController* NewPlayerController, FGSSEventTime NewGSSEventTime);
    void CustomEvent_0(EDLCName DLCName, bool bActivated);
    void ExecuteUbergraph_Event_JoeCrashing(int32 EntryPoint);
}; // Size: 0xE9

#endif
