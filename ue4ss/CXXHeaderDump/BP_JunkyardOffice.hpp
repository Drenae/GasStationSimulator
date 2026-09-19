#ifndef UE4SS_SDK_BP_JunkyardOffice_HPP
#define UE4SS_SDK_BP_JunkyardOffice_HPP

class ABP_JunkyardOffice_C : public AJunkyardOffice
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0580 (size: 0x8)

    void UnlockStates(TArray<EState>& States);
    void SetActorLevel(int32 Level, bool bLoadedFromSaveGame, bool bNewVersion);
    void ExecuteUbergraph_BP_JunkyardOffice(int32 EntryPoint);
}; // Size: 0x588

#endif
