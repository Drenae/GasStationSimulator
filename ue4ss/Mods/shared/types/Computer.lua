---@meta

---@class AComputer_C : AComputer
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SnoopDogg01_v01_SK USkeletalMeshComponent
---@field PCRunSound UAudioComponent
---@field NewVar_0 UUserWidget
---@field Material UMaterialInterface
local AComputer_C = {}

---@return FName
function AComputer_C:GetInteractionName() end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function AComputer_C:CanBeInteractable(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function AComputer_C:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function AComputer_C:SimpleInteraction(Pawn, UPrimitiveComponent) end
---@param On boolean
function AComputer_C:EnableElectrocity(On) end
function AComputer_C:ShowLevel() end
function AComputer_C:ReceiveBeginPlay() end
function AComputer_C:ToggleSkeletalTick() end
---@param EntryPoint int32
function AComputer_C:ExecuteUbergraph_Computer(EntryPoint) end


