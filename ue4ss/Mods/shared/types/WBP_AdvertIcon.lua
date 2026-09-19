---@meta

---@class UWBP_AdvertIcon_C : UInteractableUserWidget_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field HoverAnimation UWidgetAnimation
---@field AdvertButton UDragoButton
---@field AdvertIconImage UImage
---@field AdvertIconMask UImage
---@field AdvertNewsTag FString
---@field AdvertFileName FString
---@field AdvertNews FAdvertNews
---@field PopupBackgroundImageTexture UTexture2D
---@field PopupNiagaraMask UTexture2D
---@field IconImage UTexture2D
---@field IconMask UTexture2D
---@field bIsReady boolean
---@field OnAdvertIconEnabled FWBP_AdvertIcon_COnAdvertIconEnabled
---@field OnNewPopupRequested FWBP_AdvertIcon_COnNewPopupRequested
local UWBP_AdvertIcon_C = {}

---@param bIsHovered boolean
function UWBP_AdvertIcon_C:FocusButton(bIsHovered) end
---@param Popup UWBP_AdvertPopUp_C
function UWBP_AdvertIcon_C:CreatePopUP(Popup) end
---@param Show boolean
function UWBP_AdvertIcon_C:ShowAdverrt(Show) end
---@param bWasSuccessfull boolean
---@param ErrorString FString
---@param TagName FString
function UWBP_AdvertIcon_C:OnDownloadCompleted(bWasSuccessfull, ErrorString, TagName) end
function UWBP_AdvertIcon_C:SetupIconFromFileData() end
---@param bWasSuccesfull boolean
---@param Filename FString
---@param FileContent TArray<uint8>
function UWBP_AdvertIcon_C:OnAdvertFileRead(bWasSuccesfull, Filename, FileContent) end
function UWBP_AdvertIcon_C:SetupIconImage() end
function UWBP_AdvertIcon_C:SetupIconMask() end
---@param bWasSuccesfull boolean
---@param Filename FString
---@param FileContent TArray<uint8>
function UWBP_AdvertIcon_C:IconMaskImageReadCompleted(bWasSuccesfull, Filename, FileContent) end
function UWBP_AdvertIcon_C:DownloadFiles() end
---@param bWasSuccesfull boolean
---@param Filename FString
---@param FileContent TArray<uint8>
function UWBP_AdvertIcon_C:IconImageReadCompleted(bWasSuccesfull, Filename, FileContent) end
function UWBP_AdvertIcon_C:SetupPopupFiles() end
---@param bWasSuccesfull boolean
---@param Filename FString
---@param FileContent TArray<uint8>
function UWBP_AdvertIcon_C:PopupBackgroundImageRead(bWasSuccesfull, Filename, FileContent) end
---@param bWasSuccesfull boolean
---@param Filename FString
---@param FileContent TArray<uint8>
function UWBP_AdvertIcon_C:NiagaraSpriteMaskRead(bWasSuccesfull, Filename, FileContent) end
function UWBP_AdvertIcon_C:Construct() end
---@param bWasSuccessful boolean
---@param UserId FString
function UWBP_AdvertIcon_C:OnLogin(bWasSuccessful, UserId) end
function UWBP_AdvertIcon_C:CheckIfPopupDataIsLoaded() end
---@param bIsHovered boolean
---@param bPlaySound boolean
function UWBP_AdvertIcon_C:OnSetHoverEffect(bIsHovered, bPlaySound) end
function UWBP_AdvertIcon_C:OnPressedSelect() end
function UWBP_AdvertIcon_C:BndEvt__WBP_AdvertIcon_AdvertButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature() end
function UWBP_AdvertIcon_C:BndEvt__WBP_AdvertIcon_AdvertButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature() end
function UWBP_AdvertIcon_C:BndEvt__WBP_AdvertIcon_AdvertButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature() end
---@param EntryPoint int32
function UWBP_AdvertIcon_C:ExecuteUbergraph_WBP_AdvertIcon(EntryPoint) end
---@param AdvertIcon UWBP_AdvertIcon_C
function UWBP_AdvertIcon_C:OnNewPopupRequested__DelegateSignature(AdvertIcon) end
---@param NewEnabled boolean
function UWBP_AdvertIcon_C:OnAdvertIconEnabled__DelegateSignature(NewEnabled) end


