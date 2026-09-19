---@meta

---@class AGas_Station_1_BP_C : ACentralShop
---@field UberGraphFrame FPointerToUberGraphFrame
---@field FloorMaterial UMaterialInstance
---@field ToiletFloorMaterial_0 UMaterialInstance
local AGas_Station_1_BP_C = {}

function AGas_Station_1_BP_C:CheckDLCMails() end
---@param TargetArray TArray<FName>
---@param Remove_Maps TArray<FName>
function AGas_Station_1_BP_C:AddRoofLevelNameToUnload(TargetArray, Remove_Maps) end
---@param inInt int32
function AGas_Station_1_BP_C:GetNewRoofLevel(inInt) end
---@param bLoadedFromSaveGame boolean
---@param NewVersion boolean
function AGas_Station_1_BP_C:LoadGameBeginPlay(bLoadedFromSaveGame, NewVersion) end
function AGas_Station_1_BP_C:ShowLevel() end
---@param ActorLevel int32
---@param bLoadedFromSaveGame boolean
---@param bNewVersion boolean
function AGas_Station_1_BP_C:UpdateMesh(ActorLevel, bLoadedFromSaveGame, bNewVersion) end
function AGas_Station_1_BP_C:ReceiveBeginPlay() end
function AGas_Station_1_BP_C:PostLoadMapsBlueprintEvent() end
---@param EntryPoint int32
function AGas_Station_1_BP_C:ExecuteUbergraph_Gas_Station_1_BP(EntryPoint) end


