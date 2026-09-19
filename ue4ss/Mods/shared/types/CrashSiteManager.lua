---@meta

---@class ACrashSiteManager_C : ACrashSiteManager
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Marker4 UStaticMeshComponent
---@field ArrayOfMarkers TArray<USceneComponent>
---@field ['CrashSite integer To Spawn Blank Cra'] int32
---@field ['Copy of Markers'] TArray<USceneComponent>
---@field NewVar_0 USceneComponent
---@field RandomIndex int32
---@field SmokeVFX_Transform FTransform
---@field ['Quest Spawn'] boolean
---@field ['In Socket Name'] FName
---@field SpawnTransform FTransform
---@field CrashSiteQuest boolean
---@field CurrentCrashSiteIndex int32
---@field CreatingCrashSites boolean
---@field FixEngineTask TSoftClassPtr<UObject>
local ACrashSiteManager_C = {}

---@param CanEnable boolean
function ACrashSiteManager_C:CanShowSmokeParticlesAfterLoad(CanEnable) end
---@param SpawnMarkerIndex int32
function ACrashSiteManager_C:SetSpawnTransform(SpawnMarkerIndex) end
ACrashSiteManager_C['Pick Marker For Crash Site'] = function(self, ) end
---@param SpawnTransform FTransform
function ACrashSiteManager_C:SpawnBlankCrashSite(SpawnTransform) end
---@param Output TSubclassOf<ACrashSiteParent_C>
function ACrashSiteManager_C:RandomCopyOFBlankCrashSite(Output) end
---@param SpawnTransform FTransform
function ACrashSiteManager_C:SpawnCrashSite(SpawnTransform) end
---@param Output TSubclassOf<ACrashSiteParent_C>
function ACrashSiteManager_C:RandomCopyOfACrashSite(Output) end
function ACrashSiteManager_C:Set_MarkersArray() end
---@param NewParam boolean
function ACrashSiteManager_C:SpawnCrashSiteForMarkers(NewParam) end
---@param Loaded UClass
function ACrashSiteManager_C:OnLoaded_5881A70E45AB941BF0B866998D071D25(Loaded) end
---@param Loaded UClass
function ACrashSiteManager_C:OnLoaded_85672E2D4792E4D50428D5AA7ED6FC8C(Loaded) end
---@param CrashSitesSoft TArray<TSoftClassPtr<ACrashSite>>
---@param ChosenIndex int32
ACrashSiteManager_C['Spawn Random Crashsite'] = function(self, CrashSitesSoft, ChosenIndex) end
function ACrashSiteManager_C:KeepSpawningCrashsitesUntilEmpty() end
---@param bQuestSpawn boolean
function ACrashSiteManager_C:CreateCrashSites(bQuestSpawn) end
---@param bActive boolean
function ACrashSiteManager_C:SetSmokeParticleActive(bActive) end
function ACrashSiteManager_C:ReceiveBeginPlay() end
function ACrashSiteManager_C:HideSmokeParticle() end
---@param bActive boolean
function ACrashSiteManager_C:LoadSmokeParticle(bActive) end
---@param JoeAirplane AAirplane_TapingMinigame
function ACrashSiteManager_C:DisableSmoke(JoeAirplane) end
function ACrashSiteManager_C:ShowSmokeParticle() end
---@param EntryPoint int32
function ACrashSiteManager_C:ExecuteUbergraph_CrashSiteManager(EntryPoint) end


