---@meta

---@class AGSS_Minigolf_StartButton_BP_C : AMinigolfCourseStartButton
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SpotLight USpotLightComponent
local AGSS_Minigolf_StartButton_BP_C = {}

---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function AGSS_Minigolf_StartButton_BP_C:CanBeInteractable(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function AGSS_Minigolf_StartButton_BP_C:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function AGSS_Minigolf_StartButton_BP_C:SimpleInteraction(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
function AGSS_Minigolf_StartButton_BP_C:DisableInteractionInfo(Pawn) end
---@param EntryPoint int32
function AGSS_Minigolf_StartButton_BP_C:ExecuteUbergraph_GSS_Minigolf_StartButton_BP(EntryPoint) end


