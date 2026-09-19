---@meta

---@class UWBP_JoeScreen_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field BlueprintAnim UWidgetAnimation
---@field NewAnimation UWidgetAnimation
---@field BG_Color_Img UImage
---@field BG_Color_Img_1 UImage
---@field HorizontalBox_money_popularity UHorizontalBox
---@field Image_118 UImage
---@field Image_163 UImage
---@field Image_184 UImage
---@field Image_272 UImage
---@field Image_275 UImage
---@field Image_cogency UImage
---@field InvalidationBox_0 UInvalidationBox
---@field Item_Image UImage
---@field ItemAmount_TXT_1 UTextBlock
---@field Joe_Item_Image UImage
---@field Money_Amount UTextBlock
---@field NiagaraSystemWidget_64 UNiagaraSystemWidget
---@field OpenClosedSwitcher UWidgetSwitcher
---@field Overlay_Header UOverlay
---@field popularity_amount UTextBlock
---@field RetainerBox_0 URetainerBox
---@field TextBlock_Name UTextBlock
---@field TextBlock_name_Joe UTextBlock
---@field WBP_ClosedDLCText UWBP_ClosedDLCText_C
---@field Runway_Soft_REF TSoftObjectPtr<ARunway>
---@field ScheduleToPopulateList TArray<FPlaneEntry>
---@field OnRunwayPlane_REF UWBP_DepartureScreenSinglePosition_C
---@field JoesItemIcon UTexture2D
---@field JoesItemName FText
local UWBP_JoeScreen_C = {}

---@param Class TSoftClassPtr<AItem>
---@param Value int32
function UWBP_JoeScreen_C:SetItem(Class, Value) end
function UWBP_JoeScreen_C:Construct() end
---@param JoeOrderInfo FJoeOrderInfo
function UWBP_JoeScreen_C:OnJoeOrderGenerated_Event_0(JoeOrderInfo) end
---@param DLCName EDLCName
---@param bActivated boolean
function UWBP_JoeScreen_C:CustomEvent_0(DLCName, bActivated) end
---@param EntryPoint int32
function UWBP_JoeScreen_C:ExecuteUbergraph_WBP_JoeScreen(EntryPoint) end


