---@meta

---@class ABP_CommunicationDevice_C : ACommunicationDevice
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Widget UWidgetComponent
---@field Section FName
---@field ['As Sound On Off WBP'] USoundOnOff_WBP_C
---@field AirportManager UAirportManager_C
---@field CommunicationDeviceWidgetInstance UWBP_CommunicationDevice_C
---@field Branches EInteractionOutput
local ABP_CommunicationDevice_C = {}

---@param NotifyName FName
function ABP_CommunicationDevice_C:OnNotifyEnd_049BD48A4A22651D6D9C649EE894068E(NotifyName) end
---@param NotifyName FName
function ABP_CommunicationDevice_C:OnNotifyBegin_049BD48A4A22651D6D9C649EE894068E(NotifyName) end
---@param NotifyName FName
function ABP_CommunicationDevice_C:OnInterrupted_049BD48A4A22651D6D9C649EE894068E(NotifyName) end
---@param NotifyName FName
function ABP_CommunicationDevice_C:OnBlendOut_049BD48A4A22651D6D9C649EE894068E(NotifyName) end
---@param NotifyName FName
function ABP_CommunicationDevice_C:OnCompleted_049BD48A4A22651D6D9C649EE894068E(NotifyName) end
---@param NotifyName FName
function ABP_CommunicationDevice_C:OnNotifyEnd_C2F79D7D4AB34BE8BDF2D6927EF124A0(NotifyName) end
---@param NotifyName FName
function ABP_CommunicationDevice_C:OnNotifyBegin_C2F79D7D4AB34BE8BDF2D6927EF124A0(NotifyName) end
---@param NotifyName FName
function ABP_CommunicationDevice_C:OnInterrupted_C2F79D7D4AB34BE8BDF2D6927EF124A0(NotifyName) end
---@param NotifyName FName
function ABP_CommunicationDevice_C:OnBlendOut_C2F79D7D4AB34BE8BDF2D6927EF124A0(NotifyName) end
---@param NotifyName FName
function ABP_CommunicationDevice_C:OnCompleted_C2F79D7D4AB34BE8BDF2D6927EF124A0(NotifyName) end
---@param NotifyName FName
function ABP_CommunicationDevice_C:OnNotifyEnd_F4FFB8054A9340E7AF4B72963FEAB4B3(NotifyName) end
---@param NotifyName FName
function ABP_CommunicationDevice_C:OnNotifyBegin_F4FFB8054A9340E7AF4B72963FEAB4B3(NotifyName) end
---@param NotifyName FName
function ABP_CommunicationDevice_C:OnInterrupted_F4FFB8054A9340E7AF4B72963FEAB4B3(NotifyName) end
---@param NotifyName FName
function ABP_CommunicationDevice_C:OnBlendOut_F4FFB8054A9340E7AF4B72963FEAB4B3(NotifyName) end
---@param NotifyName FName
function ABP_CommunicationDevice_C:OnCompleted_F4FFB8054A9340E7AF4B72963FEAB4B3(NotifyName) end
---@param Key FKey
function ABP_CommunicationDevice_C:InpActEvt_CircularMenu_K2Node_InputActionEvent_1(Key) end
---@param Key FKey
function ABP_CommunicationDevice_C:InpActEvt_CircularMenu_Gamepad_K2Node_InputActionEvent_0(Key) end
function ABP_CommunicationDevice_C:ReceiveBeginPlay() end
---@param bIsPressed boolean
function ABP_CommunicationDevice_C:DeviceOnOff(bIsPressed) end
---@param EndPlayReason EEndPlayReason::Type
function ABP_CommunicationDevice_C:ReceiveEndPlay(EndPlayReason) end
---@param EntryPoint int32
function ABP_CommunicationDevice_C:ExecuteUbergraph_BP_CommunicationDevice(EntryPoint) end


