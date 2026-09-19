---@meta

---@class AB_FluorGarage_C : AB_Spot_Light_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field MissionLamp boolean
local AB_FluorGarage_C = {}

---@param Key FKey
function AB_FluorGarage_C:InpActEvt_Minigame_SpecialAction_01_K2Node_InputActionEvent_1(Key) end
---@param Key FKey
function AB_FluorGarage_C:InpActEvt_Minigame_SpecialAction_01_K2Node_InputActionEvent_0(Key) end
function AB_FluorGarage_C:ReceiveBeginPlay() end
function AB_FluorGarage_C:TurnOffTheLights() end
---@param EntryPoint int32
function AB_FluorGarage_C:ExecuteUbergraph_B_FluorGarage(EntryPoint) end


