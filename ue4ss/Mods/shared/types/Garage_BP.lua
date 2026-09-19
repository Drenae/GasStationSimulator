---@meta

---@class AGarage_BP_C : AGarage
---@field UberGraphFrame FPointerToUberGraphFrame
---@field PathLift1 TArray<APathStation_BP_C>
---@field PathLift2 TArray<APathStation_BP_C>
---@field MapsToLoad_0 TArray<FName>
---@field MapsToRemove TArray<FName>
---@field LevelStreaming ULevelStreaming
---@field SoulsCoasters TArray<ASoulCoaster_C>
---@field CarLiftRefs_0 TArray<ACarLift>
---@field LitUpMeshes TArray<UStaticMeshComponent>
---@field IsHighlightingVehicleParts_0 boolean
local AGarage_BP_C = {}

function AGarage_BP_C:RemovePartsOutline() end
function AGarage_BP_C:RefreshCarLiftRefs() end
---@param Actor1 AActor
---@param Actor2 AActor
function AGarage_BP_C:SpawnLine(Actor1, Actor2) end
---@param WelcomePlayer boolean
function AGarage_BP_C:GarageWidget(WelcomePlayer) end
---@param Key FKey
function AGarage_BP_C:InpActEvt_Minigame_SpecialAction_01_K2Node_InputActionEvent_1(Key) end
---@param Key FKey
function AGarage_BP_C:InpActEvt_Minigame_SpecialAction_01_K2Node_InputActionEvent_0(Key) end
function AGarage_BP_C:ReceiveBeginPlay() end
---@param ActorLevel int32
---@param bLoadedFromSaveGame boolean
---@param bNewVersion boolean
function AGarage_BP_C:UpdateMesh(ActorLevel, bLoadedFromSaveGame, bNewVersion) end
---@param GameLoaded boolean
function AGarage_BP_C:OnFinishGameLoaded_Event_0(GameLoaded) end
function AGarage_BP_C:PostLoadMapsBlueprintEvent() end
function AGarage_BP_C:OnPlayerLeftGarage() end
---@param EntryPoint int32
function AGarage_BP_C:ExecuteUbergraph_Garage_BP(EntryPoint) end


