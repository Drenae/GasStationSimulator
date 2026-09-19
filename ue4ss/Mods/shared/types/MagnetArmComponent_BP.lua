---@meta

---@class UMagnetArmComponent_BP_C : UMagnetArmComponent
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SFX_MagnetLoopCue UAudioComponent
---@field SFX_MagnetStartCue UAudioComponent
---@field SFX_SnapImpactCue UAudioComponent
---@field SFX_MagnetAttractCue UAudioComponent
---@field MagnetVFX UActorComponent
---@field PreviousIsMagnetAttracting boolean
local UMagnetArmComponent_BP_C = {}

---@param bPressed boolean
function UMagnetArmComponent_BP_C:InputActionActivateMagnet(bPressed) end
function UMagnetArmComponent_BP_C:EventAddForceAtSnap() end
---@param bIsMagnetOn boolean
function UMagnetArmComponent_BP_C:EventMagnetStartsAttracing(bIsMagnetOn) end
---@param EntryPoint int32
function UMagnetArmComponent_BP_C:ExecuteUbergraph_MagnetArmComponent_BP(EntryPoint) end


