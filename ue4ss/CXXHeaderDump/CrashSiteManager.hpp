#ifndef UE4SS_SDK_CrashSiteManager_HPP
#define UE4SS_SDK_CrashSiteManager_HPP

class ACrashSiteManager_C : public ACrashSiteManager
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0288 (size: 0x8)
    class UStaticMeshComponent* Marker4;                                              // 0x0290 (size: 0x8)
    TArray<USceneComponent*> ArrayOfMarkers;                                          // 0x0298 (size: 0x10)
    int32 CrashSite integer To Spawn Blank Cra;                                       // 0x02A8 (size: 0x4)
    TArray<USceneComponent*> Copy of Markers;                                         // 0x02B0 (size: 0x10)
    class USceneComponent* NewVar_0;                                                  // 0x02C0 (size: 0x8)
    int32 RandomIndex;                                                                // 0x02C8 (size: 0x4)
    FTransform SmokeVFX_Transform;                                                    // 0x02D0 (size: 0x30)
    bool Quest Spawn;                                                                 // 0x0300 (size: 0x1)
    FName In Socket Name;                                                             // 0x0304 (size: 0x8)
    FTransform SpawnTransform;                                                        // 0x0310 (size: 0x30)
    bool CrashSiteQuest;                                                              // 0x0340 (size: 0x1)
    int32 CurrentCrashSiteIndex;                                                      // 0x0344 (size: 0x4)
    bool CreatingCrashSites;                                                          // 0x0348 (size: 0x1)
    TSoftClassPtr<UObject> FixEngineTask;                                             // 0x0350 (size: 0x28)

    void CanShowSmokeParticlesAfterLoad(bool& CanEnable);
    void SetSpawnTransform(int32 SpawnMarkerIndex);
    void Pick Marker For Crash Site();
    void SpawnBlankCrashSite(FTransform SpawnTransform);
    void RandomCopyOFBlankCrashSite(TSubclassOf<class ACrashSiteParent_C>& Output);
    void SpawnCrashSite(FTransform SpawnTransform);
    void RandomCopyOfACrashSite(TSubclassOf<class ACrashSiteParent_C>& Output);
    void Set_MarkersArray();
    void SpawnCrashSiteForMarkers(bool NewParam);
    void OnLoaded_5881A70E45AB941BF0B866998D071D25(UClass* Loaded);
    void OnLoaded_85672E2D4792E4D50428D5AA7ED6FC8C(UClass* Loaded);
    void Spawn Random Crashsite(const TArray<TSoftClassPtr<ACrashSite>>& CrashSitesSoft, int32 ChosenIndex);
    void KeepSpawningCrashsitesUntilEmpty();
    void CreateCrashSites(bool bQuestSpawn);
    void SetSmokeParticleActive(bool bActive);
    void ReceiveBeginPlay();
    void HideSmokeParticle();
    void LoadSmokeParticle(bool bActive);
    void DisableSmoke(class AAirplane_TapingMinigame* JoeAirplane);
    void ShowSmokeParticle();
    void ExecuteUbergraph_CrashSiteManager(int32 EntryPoint);
}; // Size: 0x378

#endif
