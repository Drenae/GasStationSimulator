#ifndef UE4SS_SDK_BP_RadioTower_HPP
#define UE4SS_SDK_BP_RadioTower_HPP

class ABP_RadioTower_C : public ARadioTower
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0580 (size: 0x8)

    void UpdateMesh(const int32 ActorLevel, bool bLoadedFromSaveGame, bool bNewVersion);
    void PostLoadMapsBlueprintEvent();
    void ExecuteUbergraph_BP_RadioTower(int32 EntryPoint);
}; // Size: 0x588

#endif
