#ifndef UE4SS_SDK_BP_AirstripStorage_HPP
#define UE4SS_SDK_BP_AirstripStorage_HPP

class ABP_AirstripStorage_C : public AAirstripStorage
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0580 (size: 0x8)

    void UpdateMesh(const int32 ActorLevel, bool bLoadedFromSaveGame, bool bNewVersion);
    void ExecuteUbergraph_BP_AirstripStorage(int32 EntryPoint);
}; // Size: 0x588

#endif
