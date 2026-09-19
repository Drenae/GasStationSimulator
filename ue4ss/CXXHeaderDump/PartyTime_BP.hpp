#ifndef UE4SS_SDK_PartyTime_BP_HPP
#define UE4SS_SDK_PartyTime_BP_HPP

class APartyTime_BP_C : public APartyTime
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0580 (size: 0x8)

    void SetActorLevel(int32 Level, bool bLoadedFromSaveGame, bool bNewVersion);
    void UpdateMesh(const int32 ActorLevel, bool bLoadedFromSaveGame, bool bNewVersion);
    void PostLoadMapsBlueprintEvent();
    void ExecuteUbergraph_PartyTime_BP(int32 EntryPoint);
}; // Size: 0x588

#endif
