---@meta

---@class UWBP_3D_Dialog_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field CanvasPanel_0 UCanvasPanel
---@field Dialogue_TXT UTextBlock
---@field Image UImage
---@field Image_111 UImage
---@field Information_TXT UTextBlock
---@field Overlay_Dialog UOverlay
---@field Overlay_Information UOverlay
---@field OwnerCharacter AAICharacterBase
---@field NewVar_0 boolean
---@field ShowInformationHandle FTimerHandle
---@field CurrentDuration float
---@field CurrentID int32
local UWBP_3D_Dialog_C = {}

---@param Loaded UObject
function UWBP_3D_Dialog_C:OnLoaded_31B39714454775F0C12F748E5FC0B28A(Loaded) end
---@param Loaded UObject
function UWBP_3D_Dialog_C:OnLoaded_C39B7D4E4EC1956F86325EB436179328(Loaded) end
function UWBP_3D_Dialog_C:Construct() end
---@param DialogID int32
---@param AICharacterBase AAICharacterBase
function UWBP_3D_Dialog_C:OnCharacterDialogStart(DialogID, AICharacterBase) end
---@param Enable boolean
function UWBP_3D_Dialog_C:EnableByEvent(Enable) end
---@param AudioComponent UAudioComponent
---@param Gender ECharacterGender
---@param DialogueID int32
function UWBP_3D_Dialog_C:PlayDialogue(AudioComponent, Gender, DialogueID) end
function UWBP_3D_Dialog_C:OnAudioFinished() end
---@param InformationID int32
function UWBP_3D_Dialog_C:OnInformationStart(InformationID) end
---@param InformationID int32
function UWBP_3D_Dialog_C:ShowInformation(InformationID) end
function UWBP_3D_Dialog_C:HideInformations() end
function UWBP_3D_Dialog_C:SetHideTimer() end
function UWBP_3D_Dialog_C:Destruct() end
---@param EntryPoint int32
function UWBP_3D_Dialog_C:ExecuteUbergraph_WBP_3D_Dialog(EntryPoint) end


