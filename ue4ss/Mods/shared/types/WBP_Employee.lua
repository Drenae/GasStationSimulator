---@meta

---@class UWBP_Employee_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field BG_IMG UImage
---@field Blocker_IMG UImage
---@field ButtonSiceBox USizeBox
---@field CharacterLore_TXT UTextBlock
---@field CostPerCashTXT UTextBlock
---@field CostPerCleaningTXT UTextBlock
---@field CostPerFuelTXT UTextBlock
---@field CostPerIceCreamsTXT UTextBlock
---@field CostPerRepairTXT UTextBlock
---@field CostPerRestockTXT_1 UTextBlock
---@field DescriptionSegment UOverlay
---@field EmployeeTXT UTextBlock
---@field HireButton UGSSButton
---@field MainOverlay UOverlay
---@field NPC_ICON UImage
---@field Pointer_IMG UImage
---@field RestockSkills UOverlay
---@field SetAirCompressorLevelTXT UTextBlock
---@field SetCarRepairLevelTXT UTextBlock
---@field SetCashRegisterLevelTXT UTextBlock
---@field SetCleaningLevelTXT UTextBlock
---@field SetDescriptionTXT UTextBlock
---@field SetEmployeeNameTXT UTextBlock
---@field SetFuelingLevelTXT UTextBlock
---@field SetIceCreamsLevelTXT UTextBlock
---@field SetRestockLevelTXT_1 UTextBlock
---@field StatsSegment UVerticalBox
---@field WBP_KeyHint_RightButton UWBP_KeyHint_C
---@field OnClicked FWBP_Employee_COnClicked
---@field WasBought boolean
---@field AICharacter TSubclassOf<AAICharacterBase>
---@field IsLeftSidedWidget boolean
---@field IsHovererd boolean
local UWBP_Employee_C = {}

---@param Visible boolean
function UWBP_Employee_C:HintsVisibility(Visible) end
---@param EmployeeREF TSubclassOf<AAICharacterBase>
function UWBP_Employee_C:GetAICharacter(EmployeeREF) end
function UWBP_Employee_C:Clicked() end
---@param Condition boolean
function UWBP_Employee_C:Hovered(Condition) end
function UWBP_Employee_C:CardLostFocuseVizaul() end
function UWBP_Employee_C:CardIsFocusedVizual() end
function UWBP_Employee_C:BndEvt__Action1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
function UWBP_Employee_C:Construct() end
function UWBP_Employee_C:BndEvt__Action1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() end
function UWBP_Employee_C:BndEvt__Action1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() end
---@param Hover boolean
function UWBP_Employee_C:GamePadHoverEmployee(Hover) end
function UWBP_Employee_C:GamePadHireEmployee() end
function UWBP_Employee_C:OnInitialized() end
function UWBP_Employee_C:CustomEvent() end
function UWBP_Employee_C:CustomEvent_1() end
---@param EntryPoint int32
function UWBP_Employee_C:ExecuteUbergraph_WBP_Employee(EntryPoint) end
---@param EmployeeWidgetREF UWBP_Employee_C
function UWBP_Employee_C:OnClicked__DelegateSignature(EmployeeWidgetREF) end


