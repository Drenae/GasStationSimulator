---@meta

---@class AValidator_BP_C : AKeyItem
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SkeletalMesh USkeletalMeshComponent
---@field Ticket Aticket_visualactor_C
---@field IsDuringMontage boolean
---@field MinigameWidget UWBP_TicketMinigame_C
---@field bFakeTicket boolean
---@field NpcTicket FTicketData
---@field InitialTransform FTransform
local AValidator_BP_C = {}

function AValidator_BP_C:FixCustomMovieParameters() end
function AValidator_BP_C:CreateMinigameWidget_() end
function AValidator_BP_C:SpawnAndSetupCustomerTicket_() end
---@param bCancelMinigame boolean
function AValidator_BP_C:OnMinigameWidgetDestroy(bCancelMinigame) end
---@param NotifyName FName
function AValidator_BP_C:OnNotifyEnd_3D4FDA3D464233755A6360AE60146939(NotifyName) end
---@param NotifyName FName
function AValidator_BP_C:OnNotifyBegin_3D4FDA3D464233755A6360AE60146939(NotifyName) end
---@param NotifyName FName
function AValidator_BP_C:OnInterrupted_3D4FDA3D464233755A6360AE60146939(NotifyName) end
---@param NotifyName FName
function AValidator_BP_C:OnBlendOut_3D4FDA3D464233755A6360AE60146939(NotifyName) end
---@param NotifyName FName
function AValidator_BP_C:OnCompleted_3D4FDA3D464233755A6360AE60146939(NotifyName) end
---@param NotifyName FName
function AValidator_BP_C:OnNotifyEnd_24C6E167451EAEA715A377839427F31D(NotifyName) end
---@param NotifyName FName
function AValidator_BP_C:OnNotifyBegin_24C6E167451EAEA715A377839427F31D(NotifyName) end
---@param NotifyName FName
function AValidator_BP_C:OnInterrupted_24C6E167451EAEA715A377839427F31D(NotifyName) end
---@param NotifyName FName
function AValidator_BP_C:OnBlendOut_24C6E167451EAEA715A377839427F31D(NotifyName) end
---@param NotifyName FName
function AValidator_BP_C:OnCompleted_24C6E167451EAEA715A377839427F31D(NotifyName) end
---@param Key FKey
function AValidator_BP_C:InpActEvt_Interaction_F_K2Node_InputActionEvent_0(Key) end
function AValidator_BP_C:StartValidationMontage() end
function AValidator_BP_C:EndValidationMontage() end
function AValidator_BP_C:StartStuckMontage() end
function AValidator_BP_C:UnstuckClickMontage() end
function AValidator_BP_C:UnstuckFinishMontage() end
function AValidator_BP_C:AllowStartValidationAgain() end
function AValidator_BP_C:ReceiveDestroyed() end
function AValidator_BP_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function AValidator_BP_C:ExecuteUbergraph_Validator_BP(EntryPoint) end


