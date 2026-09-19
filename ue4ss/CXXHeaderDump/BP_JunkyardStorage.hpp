#ifndef UE4SS_SDK_BP_JunkyardStorage_HPP
#define UE4SS_SDK_BP_JunkyardStorage_HPP

class ABP_JunkyardStorage_C : public AJunkyardStorage
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0590 (size: 0x8)

    void SetActorLevel(int32 Level, bool bLoadedFromSaveGame, bool bNewVersion);
    void LoadGameBeginPlay(bool bLoadedFromSaveGame, bool NewVersion);
    void ExecuteUbergraph_BP_JunkyardStorage(int32 EntryPoint);
}; // Size: 0x598

#endif
