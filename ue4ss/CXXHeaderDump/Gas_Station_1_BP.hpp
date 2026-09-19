#ifndef UE4SS_SDK_Gas_Station_1_BP_HPP
#define UE4SS_SDK_Gas_Station_1_BP_HPP

class AGas_Station_1_BP_C : public ACentralShop
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UMaterialInstance* FloorMaterial;                                           // 0x0438 (size: 0x8)
    class UMaterialInstance* ToiletFloorMaterial_0;                                   // 0x0440 (size: 0x8)

    void CheckDLCMails();
    void AddRoofLevelNameToUnload(const TArray<FName>& TargetArray, TArray<FName>& Remove Maps);
    void GetNewRoofLevel(int32 inInt);
    void LoadGameBeginPlay(bool bLoadedFromSaveGame, bool NewVersion);
    void ShowLevel();
    void UpdateMesh(const int32 ActorLevel, bool bLoadedFromSaveGame, bool bNewVersion);
    void ReceiveBeginPlay();
    void PostLoadMapsBlueprintEvent();
    void ExecuteUbergraph_Gas_Station_1_BP(int32 EntryPoint);
}; // Size: 0x448

#endif
