#ifndef UE4SS_SDK_SpiderWebs_Spawner_Manager_BP_HPP
#define UE4SS_SDK_SpiderWebs_Spawner_Manager_BP_HPP

class ASpiderWebs_Spawner_Manager_BP_C : public AWebSpawner
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0240 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0248 (size: 0x8)
    float SpawningTime;                                                               // 0x0250 (size: 0x4)
    float Timer;                                                                      // 0x0254 (size: 0x4)
    float MinDistance;                                                                // 0x0258 (size: 0x4)
    FSpiderWebPosition SpiderWeb;                                                     // 0x0260 (size: 0x60)
    int32 Index;                                                                      // 0x02C0 (size: 0x4)
    bool Can Spawn;                                                                   // 0x02C4 (size: 0x1)
    bool bCanBeOnUpgradedLevel;                                                       // 0x02C5 (size: 0x1)
    TArray<ASpider_Web_BaseClass_BP_C*> DebugingWebs;                                 // 0x02C8 (size: 0x10)
    FText PositionToFInd;                                                             // 0x02D8 (size: 0x18)
    FText IndexOfFOundText;                                                           // 0x02F0 (size: 0x18)
    TArray<int32> FirstQuestPositions;                                                // 0x0308 (size: 0x10)
    TArray<int32> SecondQuestPositions;                                               // 0x0318 (size: 0x10)
    int32 Selection;                                                                  // 0x0328 (size: 0x4)
    TArray<int32> IndexesToDelete;                                                    // 0x0330 (size: 0x10)

    void ClearAllWebs();
    void RemoveInvalidSpiderWebsFromArray();
    void SpawnQuestRelatedWebs(TArray<int32>& Array, FName Text);
    void SpawnWeb(FTransform SpawnTransform, ESpiderPositionType SelectedType, TArray<FRequiredLevel>& PlacesRequiredTOSpawn, class UStaticMesh* NewParam, int32 Index, FSpiderWebPosition SpiderWeb, class ASpider_Web_BaseClass_BP_C*& WebReference);
    void CheckTowyGarageLevel(TArray<FRequiredLevel>& Levels, bool& TowyGarageLevel);
    void CheckLevelToSpawn(TArray<FRequiredLevel>& LevelRequired, bool& bCanSpawn);
    void ReceiveTick(float DeltaSeconds);
    void SpiderWebDestroyed(class AActor* DestoryedDecal);
    void ReceiveBeginPlay();
    void OnGameLoaded();
    void SpawnAllWebs();
    void DeleteWebs();
    void FindIndex();
    void SpawnSpiderWebsForQuest(const int32 Quest);
    void SpawnQuestDebug();
    void OnLevelUpgraded();
    void ExecuteUbergraph_SpiderWebs_Spawner_Manager_BP(int32 EntryPoint);
}; // Size: 0x340

#endif
