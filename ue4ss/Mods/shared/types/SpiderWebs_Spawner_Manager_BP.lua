---@meta

---@class ASpiderWebs_Spawner_Manager_BP_C : AWebSpawner
---@field UberGraphFrame FPointerToUberGraphFrame
---@field DefaultSceneRoot USceneComponent
---@field SpawningTime float
---@field Timer float
---@field MinDistance float
---@field SpiderWeb FSpiderWebPosition
---@field Index int32
---@field ['Can Spawn'] boolean
---@field bCanBeOnUpgradedLevel boolean
---@field DebugingWebs TArray<ASpider_Web_BaseClass_BP_C>
---@field PositionToFInd FText
---@field IndexOfFOundText FText
---@field FirstQuestPositions TArray<int32>
---@field SecondQuestPositions TArray<int32>
---@field Selection int32
---@field IndexesToDelete TArray<int32>
local ASpiderWebs_Spawner_Manager_BP_C = {}

function ASpiderWebs_Spawner_Manager_BP_C:ClearAllWebs() end
function ASpiderWebs_Spawner_Manager_BP_C:RemoveInvalidSpiderWebsFromArray() end
---@param Array TArray<int32>
---@param Text FName
function ASpiderWebs_Spawner_Manager_BP_C:SpawnQuestRelatedWebs(Array, Text) end
---@param SpawnTransform FTransform
---@param SelectedType ESpiderPositionType
---@param PlacesRequiredTOSpawn TArray<FRequiredLevel>
---@param NewParam UStaticMesh
---@param Index int32
---@param SpiderWeb FSpiderWebPosition
---@param WebReference ASpider_Web_BaseClass_BP_C
function ASpiderWebs_Spawner_Manager_BP_C:SpawnWeb(SpawnTransform, SelectedType, PlacesRequiredTOSpawn, NewParam, Index, SpiderWeb, WebReference) end
---@param Levels TArray<FRequiredLevel>
---@param TowyGarageLevel boolean
function ASpiderWebs_Spawner_Manager_BP_C:CheckTowyGarageLevel(Levels, TowyGarageLevel) end
---@param LevelRequired TArray<FRequiredLevel>
---@param bCanSpawn boolean
function ASpiderWebs_Spawner_Manager_BP_C:CheckLevelToSpawn(LevelRequired, bCanSpawn) end
---@param DeltaSeconds float
function ASpiderWebs_Spawner_Manager_BP_C:ReceiveTick(DeltaSeconds) end
---@param DestoryedDecal AActor
function ASpiderWebs_Spawner_Manager_BP_C:SpiderWebDestroyed(DestoryedDecal) end
function ASpiderWebs_Spawner_Manager_BP_C:ReceiveBeginPlay() end
function ASpiderWebs_Spawner_Manager_BP_C:OnGameLoaded() end
function ASpiderWebs_Spawner_Manager_BP_C:SpawnAllWebs() end
function ASpiderWebs_Spawner_Manager_BP_C:DeleteWebs() end
function ASpiderWebs_Spawner_Manager_BP_C:FindIndex() end
---@param Quest int32
function ASpiderWebs_Spawner_Manager_BP_C:SpawnSpiderWebsForQuest(Quest) end
function ASpiderWebs_Spawner_Manager_BP_C:SpawnQuestDebug() end
function ASpiderWebs_Spawner_Manager_BP_C:OnLevelUpgraded() end
---@param EntryPoint int32
function ASpiderWebs_Spawner_Manager_BP_C:ExecuteUbergraph_SpiderWebs_Spawner_Manager_BP(EntryPoint) end


