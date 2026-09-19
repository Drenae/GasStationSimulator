---@meta

---@class UWBP_AdvertPopUp_C : UInteractableMenuWidgetBP_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ActionButton UDragoButton
---@field AdvButtonText UTextBlock
---@field AdvertBackgroundImage UImage
---@field AdvertImage UImage
---@field AdvertMask UImage
---@field BackButtonOverlay UOverlay
---@field Image_73 UImage
---@field Image_99 UImage
---@field Image_155 UImage
---@field Image_logo UImage
---@field NiagaraWidget UNiagaraSystemWidget
---@field PayBackButton UDragoButton
---@field PC_PS4_bindings_Save UPC_PS4_bindings_C
---@field RetainerBox_1 URetainerBox
---@field AdvertButtonText FString
---@field AdvertBackgroundTexture UTexture2D
---@field AdvertIconImageTexture UTexture2D
---@field AdvertIconMaskTexture UTexture2D
---@field NiagaraSpriteMaskTexture UTexture2D
---@field IsNiagaraEnabled boolean
---@field NiagaraColor1 FColor
---@field NiagaraColor2 FColor
---@field AdvertisementURL FString
---@field DynamicNiagaraMaterial UMaterialInstance
---@field ButtonIndex int32
---@field BlockTimer FTimerHandle
local UWBP_AdvertPopUp_C = {}

function UWBP_AdvertPopUp_C:SetupNiagara() end
function UWBP_AdvertPopUp_C:SetupVisuals() end
function UWBP_AdvertPopUp_C:Construct() end
function UWBP_AdvertPopUp_C:BndEvt__FTR_Widget_DragoButton_64_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature() end
function UWBP_AdvertPopUp_C:BndEvt__FTR_Widget_DragoButton_64_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() end
function UWBP_AdvertPopUp_C:OnPressedUp() end
function UWBP_AdvertPopUp_C:OnPressedDown() end
function UWBP_AdvertPopUp_C:HooverActionButton() end
function UWBP_AdvertPopUp_C:UnhoverActionButton() end
function UWBP_AdvertPopUp_C:OnPressedBack() end
function UWBP_AdvertPopUp_C:OnPressedSelect() end
function UWBP_AdvertPopUp_C:BndEvt__WBP_AdvertPopUp_ActionButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature() end
---@param bIsGamepadBeingUsed boolean
function UWBP_AdvertPopUp_C:OnChangeInputDeviceMenuUI(bIsGamepadBeingUsed) end
function UWBP_AdvertPopUp_C:BndEvt__WBP_AdvertPopUp_PayBackButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature() end
---@param EntryPoint int32
function UWBP_AdvertPopUp_C:ExecuteUbergraph_WBP_AdvertPopUp(EntryPoint) end


