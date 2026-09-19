---@meta

---@class UGSS_NotificationManager_WBP_C : UGSS_Notification_Manager
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Canvas_Panel_Area UCanvasPanel
---@field InvalidationBox_0 UInvalidationBox
local UGSS_NotificationManager_WBP_C = {}

---@param Type ENotificationType
---@param Sofix FText
---@param Prefix FText
---@param Icon UTexture2D
---@param Quest TSoftClassPtr<UGSSQuest>
---@param bShowAmount boolean
function UGSS_NotificationManager_WBP_C:GetInformationsForNotification(Type, Sofix, Prefix, Icon, Quest, bShowAmount) end
---@param NotificationType ENotificationType
---@param SpecialCharacterType ESpecialCharacterType
function UGSS_NotificationManager_WBP_C:OnCreateNotification(NotificationType, SpecialCharacterType) end
---@param EntryPoint int32
function UGSS_NotificationManager_WBP_C:ExecuteUbergraph_GSS_NotificationManager_WBP(EntryPoint) end


