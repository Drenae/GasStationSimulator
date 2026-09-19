---@meta

---@class APartyLightsToggle_BP_C : APartyLightsToggle
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Toggle USkeletalMeshComponent
---@field bAreLightsOn_0 boolean
---@field IsBusy boolean
---@field bBlockOutline boolean
---@field DeathStar TSoftObjectPtr<ABP_DeathStarBall_C>
local APartyLightsToggle_BP_C = {}

---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function APartyLightsToggle_BP_C:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function APartyLightsToggle_BP_C:SimpleInteraction(Pawn, UPrimitiveComponent) end
---@param NotifyName FName
function APartyLightsToggle_BP_C:OnNotifyEnd_C66FB0204611B5E4BE79FCAF64E274A8(NotifyName) end
---@param NotifyName FName
function APartyLightsToggle_BP_C:OnNotifyBegin_C66FB0204611B5E4BE79FCAF64E274A8(NotifyName) end
---@param NotifyName FName
function APartyLightsToggle_BP_C:OnInterrupted_C66FB0204611B5E4BE79FCAF64E274A8(NotifyName) end
---@param NotifyName FName
function APartyLightsToggle_BP_C:OnBlendOut_C66FB0204611B5E4BE79FCAF64E274A8(NotifyName) end
---@param NotifyName FName
function APartyLightsToggle_BP_C:OnCompleted_C66FB0204611B5E4BE79FCAF64E274A8(NotifyName) end
---@param NotifyName FName
function APartyLightsToggle_BP_C:OnNotifyEnd_A433A62A4DF9BB489E2AC58ADC359906(NotifyName) end
---@param NotifyName FName
function APartyLightsToggle_BP_C:OnNotifyBegin_A433A62A4DF9BB489E2AC58ADC359906(NotifyName) end
---@param NotifyName FName
function APartyLightsToggle_BP_C:OnInterrupted_A433A62A4DF9BB489E2AC58ADC359906(NotifyName) end
---@param NotifyName FName
function APartyLightsToggle_BP_C:OnBlendOut_A433A62A4DF9BB489E2AC58ADC359906(NotifyName) end
---@param NotifyName FName
function APartyLightsToggle_BP_C:OnCompleted_A433A62A4DF9BB489E2AC58ADC359906(NotifyName) end
function APartyLightsToggle_BP_C:ReceiveBeginPlay() end
function APartyLightsToggle_BP_C:SwitchLightsOnOff() end
---@param Pawn APawn
function APartyLightsToggle_BP_C:DisableInteractionInfo(Pawn) end
---@param EntryPoint int32
function APartyLightsToggle_BP_C:ExecuteUbergraph_PartyLightsToggle_BP(EntryPoint) end


