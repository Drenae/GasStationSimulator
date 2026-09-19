---@meta

---@class ABP_ChemicalBath_C : AChemicalBath
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SFX_DLC_JY_ChemicalBath_Loop_Cue UAudioComponent
---@field NS_ChemicalBath UNiagaraComponent
local ABP_ChemicalBath_C = {}

---@return FName
function ABP_ChemicalBath_C:GetInteractionName() end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function ABP_ChemicalBath_C:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ABP_ChemicalBath_C:CanBeInteractable(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ABP_ChemicalBath_C:SimpleInteraction(Pawn, UPrimitiveComponent) end
function ABP_ChemicalBath_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ABP_ChemicalBath_C:ExecuteUbergraph_BP_ChemicalBath(EntryPoint) end


