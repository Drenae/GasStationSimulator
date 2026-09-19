---@meta

---@class AGenerator_BP_C : AGenerator
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RadioSoundtrack UAudioComponent
---@field SOUNDTRACK UAudioComponent
---@field GeneratorLoopSound UAudioComponent
---@field GeneratorTurnOnSound UAudioComponent
---@field GeneratorHandleSound UAudioComponent
---@field StaticMesh1 UStaticMeshComponent
---@field StaticMesh UStaticMeshComponent
---@field Timeline_0_NewTrack_0_0381796A47062C13A21F4197A5AFB7BD float
---@field Timeline_0__Direction_0381796A47062C13A21F4197A5AFB7BD ETimelineDirection::Type
---@field Timeline_0 UTimelineComponent
---@field SoundtrackSoft TSoftObjectPtr<USoundCue>
local AGenerator_BP_C = {}

---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function AGenerator_BP_C:CanBeInteractable(Pawn, UPrimitiveComponent) end
function AGenerator_BP_C:GeneratorSound() end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function AGenerator_BP_C:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
---@param Actor AActor
---@param RotateToTransform boolean
---@return FTransform
function AGenerator_BP_C:GetInteractiveTransform(Actor, RotateToTransform) end
---@param GSSWheeledVehicle AGSSWheeledVehicle
---@return APathPoint
function AGenerator_BP_C:GetPathPoint(GSSWheeledVehicle) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function AGenerator_BP_C:SimpleInteraction(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param Throw boolean
---@param AimingTime float
---@return boolean
function AGenerator_BP_C:UseItem(Pawn, Throw, AimingTime) end
function AGenerator_BP_C:Timeline_0__FinishedFunc() end
function AGenerator_BP_C:Timeline_0__UpdateFunc() end
---@param Loaded UObject
function AGenerator_BP_C:OnLoaded_BEC5AE8B4D3C35C546793B9BA662AAD8(Loaded) end
---@param Loaded UObject
function AGenerator_BP_C:OnLoaded_FC0B2AF34AF461BB769AA8A4D55972B2(Loaded) end
---@param Pawn APawn
function AGenerator_BP_C:DisableInteractionInfo(Pawn) end
---@param On boolean
function AGenerator_BP_C:EnableElectrocity(On) end
---@param bOn boolean
function AGenerator_BP_C:GeneratorEvent(bOn) end
---@param EntryPoint int32
function AGenerator_BP_C:ExecuteUbergraph_Generator_BP(EntryPoint) end


