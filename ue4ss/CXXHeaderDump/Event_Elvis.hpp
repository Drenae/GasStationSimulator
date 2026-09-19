#ifndef UE4SS_SDK_Event_Elvis_HPP
#define UE4SS_SDK_Event_Elvis_HPP

class UEvent_Elvis_C : public UEventElvis
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00C8 (size: 0x8)

    void SpawnElvis();
    void OnLoaded_7A50DDB249B3EDFC8201FB9809D169B2(UClass* Loaded);
    void InitializeEvent(class APlayerController* NewPlayerController, FGSSEventTime NewGSSEventTime);
    void OnGameTimeUpdated(const FTimeStruct UpdatedTime);
    void ExecuteUbergraph_Event_Elvis(int32 EntryPoint);
}; // Size: 0xD0

#endif
