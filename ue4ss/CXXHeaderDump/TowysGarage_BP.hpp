#ifndef UE4SS_SDK_TowysGarage_BP_HPP
#define UE4SS_SDK_TowysGarage_BP_HPP

class ATowysGarage_BP_C : public ATowysGarage
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0580 (size: 0x8)

    void UpdateMesh(const int32 ActorLevel, bool bLoadedFromSaveGame, bool bNewVersion);
    void ExecuteUbergraph_TowysGarage_BP(int32 EntryPoint);
}; // Size: 0x588

#endif
