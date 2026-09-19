---@meta

---@class UPC_DecorationBase_WBP_C : UPcBaseTab
---@field UberGraphFrame FPointerToUberGraphFrame
---@field FadeOut UWidgetAnimation
---@field FadeIn UWidgetAnimation
---@field OnExitHover UWidgetAnimation
---@field BuyHover UWidgetAnimation
---@field OnHoverRight UWidgetAnimation
---@field OnHoverLeft UWidgetAnimation
---@field MoveToNextEnd UWidgetAnimation
---@field MoveToNextOpen UWidgetAnimation
---@field ArrowBG_IMG UImage
---@field ArrowBG_IMG_1 UImage
---@field ArrowExit_ICO_1 UImage
---@field ArrowLeft_ICO UImage
---@field ArrowRadialFrameL_IMG UImage
---@field ArrowRadialFrameR_IMG UImage
---@field ArrowRight_ICO UImage
---@field BluePrint_Price UTextBlock
---@field BluePrintCost_Overlay UOverlay
---@field BuyRadial_IMG UImage
---@field BuyRadial_IMG_1 UImage
---@field BuyText_BG UImage
---@field CanvasPanel_0 UCanvasPanel
---@field DecoratiomManagementContainer_WBP UDecorationManagementContainer_WBP_C
---@field Description_BG UImage
---@field Description_TXT UTextBlock
---@field DescriptionSection_Overlay UOverlay
---@field Dolar_TXT UTextBlock
---@field Exit_TXT UTextBlock
---@field ExitButtonScale UScaleBox
---@field GSSButton_103 UGSSButton
---@field Image UImage
---@field Image_30 UImage
---@field Image_58 UImage
---@field Image_117 UImage
---@field Image_1021 UImage
---@field Price_TXT UTextBlock
---@field ProgressRoad_WBP_2 UProgressRoad_WBP_C
---@field ProgressRoad_WBP_3 UProgressRoad_WBP_C
---@field ProgressRoad_WBP_4 UProgressRoad_WBP_C
---@field ProgressRoad_WBP_5 UProgressRoad_WBP_C
---@field ProgressRoad_WBP_6 UProgressRoad_WBP_C
---@field ProgressRoad_WBP_7 UProgressRoad_WBP_C
---@field ProgressRoad_WBP_8 UProgressRoad_WBP_C
---@field ProgressRoad_WBP_9 UProgressRoad_WBP_C
---@field ProgressRoad_WBP_10 UProgressRoad_WBP_C
---@field ProgressRoad_Wrap UWrapBox
---@field REAL_BACK UDragoButton
---@field REAL_EXIT UDragoButton
---@field REAL_NEXT UDragoButton
---@field Sector_TXT UTextBlock
---@field Switching_HorizontalBox UHorizontalBox
---@field TextSpacer USpacer
---@field Title_TXT UTextBlock
---@field WBP_KeyHint_MoveLeft UWBP_KeyHint_C
---@field WBP_KeyHint_MoveRight UWBP_KeyHint_C
---@field WBP_KeyHint_RightButton UWBP_KeyHint_C
---@field WBP_KeyHint_RightButton_1 UWBP_KeyHint_C
---@field CurrentDecorationCamera ADecorationCamera
---@field StopInteraction boolean
---@field RestTime float
---@field DecorationCameraType EDecorationCameraType
---@field Map FName
---@field CameraTransitionFromKey boolean
---@field PreviousCamera ADecorationCamera
---@field DecorationsCamerasUniversal TArray<ADecorationCamera>
---@field HiddenHudElements TArray<TSoftClassPtr<UGSS_HUD_BaseWidget>>
---@field GamePadCurrentIndex int32
---@field GamePadDecorationListIndex int32
local UPC_DecorationBase_WBP_C = {}

---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UPC_DecorationBase_WBP_C:OnPreviewKeyDown(MyGeometry, InKeyEvent) end
---@param Visible boolean
function UPC_DecorationBase_WBP_C:HintsVisibility(Visible) end
---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UPC_DecorationBase_WBP_C:OnKeyDown(MyGeometry, InKeyEvent) end
---@param Index int32
function UPC_DecorationBase_WBP_C:PC_DecorationBase_WBP_AutoGenFunc(Index) end
---@param Cameras ADecorationCamera
---@param OutCamera FDecorationMap
function UPC_DecorationBase_WBP_C:GetNextDecorationCamera(Cameras, OutCamera) end
---@param Forward boolean
---@param Output ADecorationCamera
UPC_DecorationBase_WBP_C['Get Next Camera'] = function(self, Forward, Output) end
---@param EntryMap FName
function UPC_DecorationBase_WBP_C:AchievementCheck(EntryMap) end
---@param NumberOfNeededBuildingBPs int32
---@param EnoughBPs boolean
UPC_DecorationBase_WBP_C['Check if Enough BPs'] = function(self, NumberOfNeededBuildingBPs, EnoughBPs) end
---@param PlayAnimationYes1 boolean
function UPC_DecorationBase_WBP_C:RefreshProgressRoad(PlayAnimationYes1) end
UPC_DecorationBase_WBP_C['Refresh Section Counter'] = function(self, ) end
function UPC_DecorationBase_WBP_C:UpdateDescription() end
function UPC_DecorationBase_WBP_C:Finished_71810AEE48C98C81A533AF8A4FDD20E0() end
function UPC_DecorationBase_WBP_C:Finished_ECD07A6945A91B14EA1B00929DD63FA5() end
function UPC_DecorationBase_WBP_C:Construct() end
function UPC_DecorationBase_WBP_C:MoveToPreviousPage() end
function UPC_DecorationBase_WBP_C:MoveToNextPage() end
function UPC_DecorationBase_WBP_C:BndEvt__WBP_DecorationCameraMenago_REAL_EXIT_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
function UPC_DecorationBase_WBP_C:DisablePostProces() end
---@param MyGeometry FGeometry
---@param InDeltaTime float
function UPC_DecorationBase_WBP_C:Tick(MyGeometry, InDeltaTime) end
function UPC_DecorationBase_WBP_C:BndEvt__REAL_BACK_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature() end
function UPC_DecorationBase_WBP_C:BndEvt__next_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature() end
function UPC_DecorationBase_WBP_C:ReavelSection() end
function UPC_DecorationBase_WBP_C:BndEvt__REAL_NEXT_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature() end
function UPC_DecorationBase_WBP_C:BndEvt__REAL_NEXT_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() end
function UPC_DecorationBase_WBP_C:BndEvt__REAL_BACK_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature() end
function UPC_DecorationBase_WBP_C:BndEvt__REAL_BACK_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature() end
function UPC_DecorationBase_WBP_C:BndEvt__REAL_EXIT_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature() end
function UPC_DecorationBase_WBP_C:BndEvt__REAL_EXIT_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature() end
function UPC_DecorationBase_WBP_C:CustomEscape() end
function UPC_DecorationBase_WBP_C:BndEvt__PC_DecorationBase_WBP_GSSButton_103_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature() end
function UPC_DecorationBase_WBP_C:BndEvt__PC_DecorationBase_WBP_GSSButton_103_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature() end
function UPC_DecorationBase_WBP_C:BndEvt__PC_DecorationBase_WBP_GSSButton_103_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature() end
---@param Camera ADecorationCamera
function UPC_DecorationBase_WBP_C:RemoteClickCapsule(Camera) end
function UPC_DecorationBase_WBP_C:GamePadBuyDecoration() end
function UPC_DecorationBase_WBP_C:CustomEvent_0() end
function UPC_DecorationBase_WBP_C:CheckForShowLevels() end
function UPC_DecorationBase_WBP_C:ContinueOnCameraDeactivation() end
---@param EntryPoint int32
function UPC_DecorationBase_WBP_C:ExecuteUbergraph_PC_DecorationBase_WBP(EntryPoint) end


