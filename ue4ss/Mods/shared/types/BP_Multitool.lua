---@meta

---@class ABP_Multitool_C : AJunkyardMultitool
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Mus_DLC_JY_Pimp_Cue UAudioComponent
---@field OverlayREF UWBP_Multitool_C
---@field Time float
---@field ['Target Type'] EJunkyardCarPartType
---@field ['Target Wreck'] AJunkyardCarWreckCustomizable
---@field ['Adding Part'] boolean
---@field DynamicMaterials TArray<UMaterialInstanceDynamic>
local ABP_Multitool_C = {}

---@param bMultitoolLights boolean
function ABP_Multitool_C:ToggleLights(bMultitoolLights) end
---@param NotifyName FName
function ABP_Multitool_C:OnNotifyEnd_53FF32E2416582103D7898A392D064E0(NotifyName) end
---@param NotifyName FName
function ABP_Multitool_C:OnNotifyBegin_53FF32E2416582103D7898A392D064E0(NotifyName) end
---@param NotifyName FName
function ABP_Multitool_C:OnInterrupted_53FF32E2416582103D7898A392D064E0(NotifyName) end
---@param NotifyName FName
function ABP_Multitool_C:OnBlendOut_53FF32E2416582103D7898A392D064E0(NotifyName) end
---@param NotifyName FName
function ABP_Multitool_C:OnCompleted_53FF32E2416582103D7898A392D064E0(NotifyName) end
function ABP_Multitool_C:ReceiveBeginPlay() end
function ABP_Multitool_C:OnPickedUp() end
function ABP_Multitool_C:OnDropped() end
function ABP_Multitool_C:ReceiveDestroyed() end
---@param TargetType EJunkyardCarPartType
---@param TargetWreck AJunkyardCarWreckCustomizable
---@param bAddingPart boolean
function ABP_Multitool_C:PrimaryAction(TargetType, TargetWreck, bAddingPart) end
function ABP_Multitool_C:TimeBeforeIdle_Event() end
function ABP_Multitool_C:ActivateMultitoolMusic() end
function ABP_Multitool_C:DeactivateMultitoolMusic() end
---@param EntryPoint int32
function ABP_Multitool_C:ExecuteUbergraph_BP_Multitool(EntryPoint) end


