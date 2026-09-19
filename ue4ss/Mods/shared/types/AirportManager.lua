---@meta

---@class UAirportManager_C : UGSSBaseWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field BG_Color_Img UImage
---@field CloseButton UCloseButton_C
---@field CurrentSuccessfulTradesNumber_TXT UTextBlock
---@field CurrentSuccessfulTradesNumber_TXT_1 UTextBlock
---@field HB_TierLess5 UHorizontalBox
---@field HB_TierLvl5 UHorizontalBox
---@field HorizontalBox_508 UHorizontalBox
---@field HorizontalBox_TierVSKILL_TEXT UHorizontalBox
---@field Image_2 UImage
---@field Image_67 UImage
---@field Image_113 UImage
---@field Image_140 UImage
---@field Image_152 UImage
---@field Image_184 UImage
---@field JoesItem_1 UJoesItem_C
---@field NumberOfSuccessfulTradesNeeded UTextBlock
---@field PlayersItem UJoesItem_C
---@field SkillCooldownReduceValue_TXT UTextBlock
---@field SoundOnOff_button_C_6 USoundOnOff_button_C
---@field TextBlock_owned UTextBlock
---@field TierLevelRomanNumber_TXT UTextBlock
---@field TradingSkillsCooldownReducedBy_TXT UTextBlock
---@field VB_Airstrip1 UVerticalBox
---@field VB_Airstrip2 UVerticalBox
---@field WBP_DepartureScreen2AP UWBP_DepartureScreen2AP_C
---@field WBP_DepartureScreenAP_1 UWBP_DepartureScreenAP_C
---@field WBP_KeyHint_TopButton UWBP_KeyHint_C
---@field bIsOpened boolean
---@field JoesItemIcon UTexture2D
---@field JoesItemName FText
---@field CommunicationDevice ABP_CommunicationDevice_C
---@field Branches EInteractionOutput
---@field GamePadCurrentElement int32
---@field GamePadCurrentSegment int32
---@field GamePadIsTherePopup boolean
local UAirportManager_C = {}

---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UAirportManager_C:OnPreviewKeyDown(MyGeometry, InKeyEvent) end
---@param Visible boolean
function UAirportManager_C:HintsVisibility(Visible) end
---@param IsTherePopup boolean
function UAirportManager_C:GamePadIsPopUp(IsTherePopup) end
---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UAirportManager_C:OnKeyDown(MyGeometry, InKeyEvent) end
function UAirportManager_C:SetBlueprintsAmount() end
function UAirportManager_C:TierLevelCheckSet() end
---@param Loaded UObject
function UAirportManager_C:OnLoaded_05ADAB264A225C05F4F80B878413E917(Loaded) end
function UAirportManager_C:BndEvt__AirportManager_CloseButton_K2Node_ComponentBoundEvent_3_ClickButton__DelegateSignature() end
function UAirportManager_C:Construct() end
function UAirportManager_C:CustomEscape() end
function UAirportManager_C:CustomEvent_0() end
function UAirportManager_C:Destruct() end
---@param bNewGamepadMode boolean
function UAirportManager_C:OnDeviceChanged(bNewGamepadMode) end
---@param isConstruct boolean
function UAirportManager_C:BindOnDeviceChanged(isConstruct) end
---@param MyGeometry FGeometry
---@param InDeltaTime float
function UAirportManager_C:Tick(MyGeometry, InDeltaTime) end
---@param EntryPoint int32
function UAirportManager_C:ExecuteUbergraph_AirportManager(EntryPoint) end


