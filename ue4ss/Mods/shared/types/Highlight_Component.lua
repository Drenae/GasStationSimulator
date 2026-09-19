---@meta

---@class UHighlight_Component_C : UActorComponent
---@field UberGraphFrame FPointerToUberGraphFrame
---@field HighlightDMI UMaterialInstanceDynamic
---@field MeshForHighlighting UStaticMeshComponent
---@field ['ControlVisibility?'] boolean
local UHighlight_Component_C = {}

---@param TurnOn_ boolean
---@param SetVisibility boolean
UHighlight_Component_C['TurnON/OFF_Function'] = function(self, TurnOn_, SetVisibility) end
---@param MeshForHighlighting UStaticMeshComponent
function UHighlight_Component_C:PreppingMaterialsAndMeshes(MeshForHighlighting) end
---@param Mesh UStaticMeshComponent
function UHighlight_Component_C:OnBeginPlay_Highlight_Component(Mesh) end
---@param bShouldHideMesh boolean
function UHighlight_Component_C:TurnOn_Highlight(bShouldHideMesh) end
---@param bShouldHideMesh boolean
function UHighlight_Component_C:TurnOff_Highlight(bShouldHideMesh) end
---@param EntryPoint int32
function UHighlight_Component_C:ExecuteUbergraph_Highlight_Component(EntryPoint) end


