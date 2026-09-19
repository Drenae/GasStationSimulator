#ifndef UE4SS_SDK_WareHouse_DUPL_1_HPP
#define UE4SS_SDK_WareHouse_DUPL_1_HPP

class AWareHouse_C : public AMagazine_00_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0408 (size: 0x8)
    class UBoxComponent* OverlapTrash;                                                // 0x0410 (size: 0x8)
    class AGSSWheeledVehicle* truck;                                                  // 0x0418 (size: 0x8)

    void LoadGameBeginPlay(bool bLoadedFromSaveGame, bool NewVersion);
    void EnableOverlapBox(bool Enable);
    void UpdateMesh(const int32 ActorLevel, bool bLoadedFromSaveGame, bool bNewVersion);
    void ReceiveBeginPlay();
    void ReceiveDestroyed();
    void ReceiveTick(float DeltaSeconds);
    void OnFinishGameLoaded(const bool GameLoaded);
    void ExecuteUbergraph_WareHouse(int32 EntryPoint);
}; // Size: 0x420

#endif
