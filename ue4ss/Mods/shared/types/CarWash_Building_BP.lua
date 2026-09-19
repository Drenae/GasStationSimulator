---@meta

---@class ACarWash_Building_BP_C : ACarWash
---@field UberGraphFrame FPointerToUberGraphFrame
---@field PathStation_Carwash_01 TArray<APathStation>
---@field NotificationREF UUserWidget
local ACarWash_Building_BP_C = {}

function ACarWash_Building_BP_C:ReceiveBeginPlay() end
---@param EndPlayReason EEndPlayReason::Type
function ACarWash_Building_BP_C:ReceiveEndPlay(EndPlayReason) end
function ACarWash_Building_BP_C:SetupCarwashPathPoints() end
---@param ActorLevel int32
---@param bLoadedFromSaveGame boolean
---@param bNewVersion boolean
function ACarWash_Building_BP_C:UpdateMesh(ActorLevel, bLoadedFromSaveGame, bNewVersion) end
---@param ActorLevel int32
function ACarWash_Building_BP_C:SetupAutomaticCarWash2(ActorLevel) end
---@param GameLoaded boolean
function ACarWash_Building_BP_C:OnGameLoaded(GameLoaded) end
function ACarWash_Building_BP_C:OnPressureGoodAgain() end
function ACarWash_Building_BP_C:OnPressureLow() end
function ACarWash_Building_BP_C:ReceiveDestroyed() end
---@param ActorLvl int32
function ACarWash_Building_BP_C:ExtraSetup(ActorLvl) end
function ACarWash_Building_BP_C:LowPressureNotification() end
---@param EntryPoint int32
function ACarWash_Building_BP_C:ExecuteUbergraph_CarWash_Building_BP(EntryPoint) end


