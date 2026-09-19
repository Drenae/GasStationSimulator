---@meta

---@class UWBP_MarshalMinigameDifficulty_C : UMarshalDifficultyWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ConstructAnim UWidgetAnimation
---@field Difficulty_Level_Button_EASY UDifficulty_Level_Button_C
---@field Difficulty_Level_Button_HARD UDifficulty_Level_Button_C
---@field Difficulty_Level_Button_MEDIUM UDifficulty_Level_Button_C
---@field Image_bg UImage
---@field bAnyButtonPressed boolean
---@field CurrentDifficultyButtonIndex int32
---@field Difficulties TArray<UDifficulty_Level_Button_C>
---@field IsUsingGamepad boolean
local UWBP_MarshalMinigameDifficulty_C = {}

function UWBP_MarshalMinigameDifficulty_C:UnhooverCurrentButton() end
---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
---@return FEventReply
function UWBP_MarshalMinigameDifficulty_C:OnMouseMove(MyGeometry, MouseEvent) end
---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
---@return FEventReply
function UWBP_MarshalMinigameDifficulty_C:OnMouseButtonDown(MyGeometry, MouseEvent) end
---@param IsGamepad boolean
function UWBP_MarshalMinigameDifficulty_C:ChangeInputDevice(IsGamepad) end
function UWBP_MarshalMinigameDifficulty_C:HooverCurrentButton() end
---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UWBP_MarshalMinigameDifficulty_C:OnKeyDown(MyGeometry, InKeyEvent) end
function UWBP_MarshalMinigameDifficulty_C:Finished_9EB6A00E4029744E4F7DA59FF9B6BF38() end
function UWBP_MarshalMinigameDifficulty_C:Finished_19F7AC424573F556EFE267A9B51C3BE8() end
function UWBP_MarshalMinigameDifficulty_C:Finished_1B400E624AD9A3AAA3F84B944BCC322A() end
function UWBP_MarshalMinigameDifficulty_C:Construct() end
function UWBP_MarshalMinigameDifficulty_C:Destruct() end
function UWBP_MarshalMinigameDifficulty_C:BndEvt__WBP_MarshalMinigameDifficulty_Difficulty_Level_Button_HARD_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature() end
function UWBP_MarshalMinigameDifficulty_C:BndEvt__WBP_MarshalMinigameDifficulty_Difficulty_Level_Button_EASY_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature() end
function UWBP_MarshalMinigameDifficulty_C:BndEvt__WBP_MarshalMinigameDifficulty_Difficulty_Level_Button_MEDIUM_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature() end
---@param EntryPoint int32
function UWBP_MarshalMinigameDifficulty_C:ExecuteUbergraph_WBP_MarshalMinigameDifficulty(EntryPoint) end


