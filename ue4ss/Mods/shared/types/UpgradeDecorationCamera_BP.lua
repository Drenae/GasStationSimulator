---@meta

---@class AUpgradeDecorationCamera_BP_C : AUpgradeStationCamera
---@field UberGraphFrame FPointerToUberGraphFrame
---@field arrow UArrowComponent
---@field DefaultSceneRoot USceneComponent
---@field FoundMap FName
---@field bLoadingMap boolean
---@field MapToUnload FName
local AUpgradeDecorationCamera_BP_C = {}

---@param MapToUnload FName
---@param bCanUnload boolean
function AUpgradeDecorationCamera_BP_C:CanUnload(MapToUnload, bCanUnload) end
function AUpgradeDecorationCamera_BP_C:ReceiveBeginPlay() end
function AUpgradeDecorationCamera_BP_C:ActivateCamera() end
function AUpgradeDecorationCamera_BP_C:DeActivateCamera() end
---@param MapName FName
---@param EnablePostprocess boolean
function AUpgradeDecorationCamera_BP_C:UnblockMap(MapName, EnablePostprocess) end
---@param CurrentProgress float
---@param MaxProgress float
---@param LoadedMap FName
---@param LoadGameCompleted boolean
function AUpgradeDecorationCamera_BP_C:OnLoadGameProgressUpdated_Event_0(CurrentProgress, MaxProgress, LoadedMap, LoadGameCompleted) end
---@param EntryPoint int32
function AUpgradeDecorationCamera_BP_C:ExecuteUbergraph_UpgradeDecorationCamera_BP(EntryPoint) end


