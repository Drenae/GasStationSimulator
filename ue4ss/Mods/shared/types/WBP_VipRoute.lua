---@meta

---@class UWBP_VipRoute_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Image_bg UImage
---@field Image_route UImage
---@field BGImage UTexture2D
---@field MaterialRoute UMaterialInterface
---@field Progress float
---@field Debug float
---@field ['Desired Size'] FVector2D
---@field DLCDestination EDLCName
local UWBP_VipRoute_C = {}

---@param IsDesignTime boolean
function UWBP_VipRoute_C:PreConstruct(IsDesignTime) end
function UWBP_VipRoute_C:Construct() end
---@param MyGeometry FGeometry
---@param InDeltaTime float
function UWBP_VipRoute_C:Tick(MyGeometry, InDeltaTime) end
---@param EntryPoint int32
function UWBP_VipRoute_C:ExecuteUbergraph_WBP_VipRoute(EntryPoint) end


