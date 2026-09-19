---@meta

---@class UWBP_LandmarksScreen_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SwitchAnim UWidgetAnimation
---@field background UImage
---@field BG_Image UImage
---@field Border UImage
---@field flag UImage
---@field Image_140 UImage
---@field Image_275 UImage
---@field Image_344 UImage
---@field InvalidationBox_0 UInvalidationBox
---@field Name UTextBlock
---@field OpenClosedSwitcher UWidgetSwitcher
---@field Overlay_Header UOverlay
---@field TextBlock_owned UTextBlock
---@field TextBlock_price UTextBlock
---@field TextBlock_req UTextBlock
---@field WBP_ClosedDLCText UWBP_ClosedDLCText_C
---@field ScheduleToPopulateList TArray<FPlaneEntry>
---@field OnRunwayPlane_REF UWBP_DepartureScreenSinglePosition_C
---@field Image1 UTexture
---@field StructuresList TArray<FLandmarksSlideshow_STRUCT>
---@field NextIndex int32
---@field CurrentIndex int32
---@field ReqBPs int32
---@field OwnedBPs int32
---@field SwitchLandmarkHandle FTimerHandle
local UWBP_LandmarksScreen_C = {}

function UWBP_LandmarksScreen_C:SequenceEvent__ENTRYPOINTWBP_LandmarksScreen_0() end
function UWBP_LandmarksScreen_C:SetBlueprintsAmount() end
function UWBP_LandmarksScreen_C:SetCurrentLandmark() end
function UWBP_LandmarksScreen_C:SetNextLandmark() end
---@param Class UClass
---@param Value int32
function UWBP_LandmarksScreen_C:SetItem(Class, Value) end
function UWBP_LandmarksScreen_C:Construct() end
function UWBP_LandmarksScreen_C:SwitchLandmark() end
---@param DLCName EDLCName
---@param bActivated boolean
function UWBP_LandmarksScreen_C:CustomEvent_0(DLCName, bActivated) end
function UWBP_LandmarksScreen_C:OnDLCEnabled() end
function UWBP_LandmarksScreen_C:Destruct() end
---@param EntryPoint int32
function UWBP_LandmarksScreen_C:ExecuteUbergraph_WBP_LandmarksScreen(EntryPoint) end


