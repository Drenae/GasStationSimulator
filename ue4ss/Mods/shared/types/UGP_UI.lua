---@meta

---@class UUGP_UI_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ChangeKey_S USpacer
---@field ChangeKeyK_Bonus_HB UHorizontalBox
---@field ControllsHorizontal UVerticalBox
---@field Interaction_F UWBP_KeyBindedAction_C
---@field KeyBindIMG UImage
---@field KeyBindIMG_1 UImage
---@field KeyBindIMG_2 UImage
---@field KeyBindIMG_3 UImage
---@field ToChangeChordGP_HB UHorizontalBox
---@field ToChangeChordK_HB UHorizontalBox
---@field ToChangeKeyGP_HB UHorizontalBox
---@field ToChangeKeyK_HB UHorizontalBox
---@field ToPlayGP_HB UHorizontalBox
---@field ToPlayK_HB UHorizontalBox
---@field UGP_ChordWheel UUGP_ChordWheel_C
local UUGP_UI_C = {}

function UUGP_UI_C:UpdateUIMode() end
function UUGP_UI_C:Construct() end
function UUGP_UI_C:OnKeybindReset() end
---@param EntryPoint int32
function UUGP_UI_C:ExecuteUbergraph_UGP_UI(EntryPoint) end


