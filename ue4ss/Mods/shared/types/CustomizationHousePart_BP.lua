---@meta

---@class ACustomizationHousePart_BP_C : ACustomizationHousePart
---@field UberGraphFrame FPointerToUberGraphFrame
---@field VFX_templateBack UParticleSystemComponent
---@field VFX_templateFront UParticleSystemComponent
---@field FrontBoxSpawner UBoxComponent
---@field BackBoxSpawner UBoxComponent
---@field SpawnBack1 UArrowComponent
---@field SpawnFront1 UArrowComponent
---@field FrontArrowBrush UArrowComponent
---@field BackArrowBrush UArrowComponent
---@field BackArrow UArrowComponent
---@field FrontArrow UArrowComponent
---@field TransformPoint FTransform
---@field StartDelay float
---@field DistanceToFinish float
---@field Wall EWallSide
---@field CameraSnapPoint ACameraSnapPoint_C
local ACustomizationHousePart_BP_C = {}

---@return FName
function ACustomizationHousePart_BP_C:GetInteractionName() end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ACustomizationHousePart_BP_C:CanBeInteractable(Pawn, UPrimitiveComponent) end
function ACustomizationHousePart_BP_C:SetupColors() end
---@param Actor AActor
---@param RotateToTransform boolean
---@return FTransform
function ACustomizationHousePart_BP_C:GetInteractiveTransform(Actor, RotateToTransform) end
---@param NewParam EWallSide
function ACustomizationHousePart_BP_C:DestroySide(NewParam) end
function ACustomizationHousePart_BP_C:ReceiveBeginPlay() end
---@param Pawn APawn
function ACustomizationHousePart_BP_C:PaintingEvent(Pawn) end
---@param DennisDecal AInteractableDecal
function ACustomizationHousePart_BP_C:AddDecal(DennisDecal) end
---@param DestroyedActor AActor
function ACustomizationHousePart_BP_C:RemoveDestroyedDecals(DestroyedActor) end
---@param WallSide EWallSide
function ACustomizationHousePart_BP_C:PlayCustomizationHousePartChangeVFX(WallSide) end
---@param EntryPoint int32
function ACustomizationHousePart_BP_C:ExecuteUbergraph_CustomizationHousePart_BP(EntryPoint) end


