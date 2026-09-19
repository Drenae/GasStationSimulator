---@meta

---@class UDLC_RV_GoToGuestService_C : UGoToGuestService
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ['Playing Autocomplete End Montage'] UAnimMontage
---@field ['Skin Material'] UMaterialInterface
---@field ['Interactable Building'] AInteractableBuilding
---@field ['Autocomplete Timer'] FTimerHandle
---@field DefaultOverrideMovementType EMovementGroundType
local UDLC_RV_GoToGuestService_C = {}

---@param IsPlayingAnim boolean
function UDLC_RV_GoToGuestService_C:GetIsMontageManagerPlayingAnim(IsPlayingAnim) end
---@param Rv_Employee ARVCampEmployee
UDLC_RV_GoToGuestService_C['Get Assigned Employee'] = function(self, Rv_Employee) end
---@param Guest_Service_Settings URvMinigameBaseSettings
UDLC_RV_GoToGuestService_C['Get Guest Service Settings'] = function(self, Guest_Service_Settings) end
---@param bFound boolean
---@param Preset FCharacterLookOverride
UDLC_RV_GoToGuestService_C['Get Random Character Look Preset'] = function(self, bFound, Preset) end
---@param Character AAICharacterBase
---@param NewTasksProgress TArray<FTaskProgress>
function UDLC_RV_GoToGuestService_C:InitializeTask(Character, NewTasksProgress) end
---@param Character ACharacter
function UDLC_RV_GoToGuestService_C:StartTask(Character) end
---@param DeltaTime float
function UDLC_RV_GoToGuestService_C:TickObject(DeltaTime) end
---@param TaskState ETaskResult
---@param FinishReason FString
function UDLC_RV_GoToGuestService_C:FinishBeginTask(TaskState, FinishReason) end
function UDLC_RV_GoToGuestService_C:BeginAutocompleteService() end
function UDLC_RV_GoToGuestService_C:OnFinishedAutocompleteService() end
function UDLC_RV_GoToGuestService_C:FinishEndTask() end
function UDLC_RV_GoToGuestService_C:FinishAutocompleteService() end
---@param Montage UAnimMontage
---@param bInterrupted boolean
function UDLC_RV_GoToGuestService_C:FinishTask_MontageBlendOut(Montage, bInterrupted) end
---@param Montage UAnimMontage
---@param bInterrupted boolean
function UDLC_RV_GoToGuestService_C:OnAutocompleteServiceEnded_BlendOut(Montage, bInterrupted) end
---@param EntryPoint int32
function UDLC_RV_GoToGuestService_C:ExecuteUbergraph_DLC_RV_GoToGuestService(EntryPoint) end


