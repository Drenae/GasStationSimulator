---@meta

---@class ACinemaSign_BP_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ['Static Mesh Closed'] UStaticMeshComponent
---@field Widget UWidgetComponent
---@field StaticMesh UStaticMeshComponent
---@field ['Default Material'] UMaterialInterface
local ACinemaSign_BP_C = {}

function ACinemaSign_BP_C:ReceiveBeginPlay() end
---@param DLCName EDLCName
---@param bActivated boolean
ACinemaSign_BP_C['On DLC Activation State Changed'] = function(self, DLCName, bActivated) end
---@param GameLoaded boolean
ACinemaSign_BP_C['On Game Loaded'] = function(self, GameLoaded) end
---@param EntryPoint int32
function ACinemaSign_BP_C:ExecuteUbergraph_CinemaSign_BP(EntryPoint) end


