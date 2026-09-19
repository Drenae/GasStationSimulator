---@meta

---@class AWareHouse_C : AMagazine_00_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field OverlapTrash UBoxComponent
---@field truck AGSSWheeledVehicle
local AWareHouse_C = {}

---@param bLoadedFromSaveGame boolean
---@param NewVersion boolean
function AWareHouse_C:LoadGameBeginPlay(bLoadedFromSaveGame, NewVersion) end
---@param Enable boolean
function AWareHouse_C:EnableOverlapBox(Enable) end
---@param ActorLevel int32
---@param bLoadedFromSaveGame boolean
---@param bNewVersion boolean
function AWareHouse_C:UpdateMesh(ActorLevel, bLoadedFromSaveGame, bNewVersion) end
function AWareHouse_C:ReceiveBeginPlay() end
function AWareHouse_C:ReceiveDestroyed() end
---@param DeltaSeconds float
function AWareHouse_C:ReceiveTick(DeltaSeconds) end
---@param GameLoaded boolean
function AWareHouse_C:OnFinishGameLoaded(GameLoaded) end
---@param EntryPoint int32
function AWareHouse_C:ExecuteUbergraph_WareHouse(EntryPoint) end


