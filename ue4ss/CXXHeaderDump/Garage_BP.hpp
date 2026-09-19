#ifndef UE4SS_SDK_Garage_BP_HPP
#define UE4SS_SDK_Garage_BP_HPP

class AGarage_BP_C : public AGarage
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04B0 (size: 0x8)
    TArray<APathStation_BP_C*> PathLift1;                                             // 0x04B8 (size: 0x10)
    TArray<APathStation_BP_C*> PathLift2;                                             // 0x04C8 (size: 0x10)
    TArray<FName> MapsToLoad_0;                                                       // 0x04D8 (size: 0x10)
    TArray<FName> MapsToRemove;                                                       // 0x04E8 (size: 0x10)
    class ULevelStreaming* LevelStreaming;                                            // 0x04F8 (size: 0x8)
    TArray<ASoulCoaster_C*> SoulsCoasters;                                            // 0x0500 (size: 0x10)
    TArray<ACarLift*> CarLiftRefs_0;                                                  // 0x0510 (size: 0x10)
    TArray<UStaticMeshComponent*> LitUpMeshes;                                        // 0x0520 (size: 0x10)
    bool IsHighlightingVehicleParts_0;                                                // 0x0530 (size: 0x1)

    void RemovePartsOutline();
    void RefreshCarLiftRefs();
    void SpawnLine(class AActor* Actor1, class AActor* Actor2);
    void GarageWidget(bool WelcomePlayer);
    void InpActEvt_Minigame_SpecialAction_01_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_Minigame_SpecialAction_01_K2Node_InputActionEvent_0(FKey Key);
    void ReceiveBeginPlay();
    void UpdateMesh(const int32 ActorLevel, bool bLoadedFromSaveGame, bool bNewVersion);
    void OnFinishGameLoaded_Event_0(const bool GameLoaded);
    void PostLoadMapsBlueprintEvent();
    void OnPlayerLeftGarage();
    void ExecuteUbergraph_Garage_BP(int32 EntryPoint);
}; // Size: 0x531

#endif
