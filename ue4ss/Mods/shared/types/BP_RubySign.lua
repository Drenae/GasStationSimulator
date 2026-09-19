---@meta

---@class ABP_RubySign_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field StaticMesh UStaticMeshComponent
---@field DefaultSceneRoot USceneComponent
---@field ['Original Materials'] TArray<UMaterialInterface>
local ABP_RubySign_C = {}

function ABP_RubySign_C:ReceiveBeginPlay() end
---@param DLCName EDLCName
---@param bActivated boolean
ABP_RubySign_C['On DLC Activation State Changed'] = function(self, DLCName, bActivated) end
---@param EntryPoint int32
function ABP_RubySign_C:ExecuteUbergraph_BP_RubySign(EntryPoint) end


