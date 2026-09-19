---@meta

---@class ABP_LargeTextDecal_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field DefaultSceneRoot USceneComponent
---@field Text FString
---@field TextSize float
---@field Alphabet TArray<FString>
---@field TextSpacing float
---@field TextMaterial int32
---@field Color FLinearColor
---@field Roughness float
---@field Wear float
---@field Chipping float
---@field DecalDepth float
---@field DecalComponents TArray<UDecalComponent>
local ABP_LargeTextDecal_C = {}

function ABP_LargeTextDecal_C:UserConstructionScript() end
---@param NewText FString
---@param TextSize float
function ABP_LargeTextDecal_C:UpdateText(NewText, TextSize) end
---@param EntryPoint int32
function ABP_LargeTextDecal_C:ExecuteUbergraph_BP_LargeTextDecal(EntryPoint) end


