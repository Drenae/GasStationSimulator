---@meta

---@class UTestScalingWidget_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Image_342 UImage
---@field IMG_ANGRY UImage
---@field IMG_AngryEmplo UImage
---@field IMG_Dirty UImage
---@field IMG_HAPPY UImage
---@field IMG_PRODUCT UImage
---@field IMG_Waiting UImage
---@field MainOverlay UOverlay
---@field Overlay_product UOverlay
---@field AICharREF AAICharacterBase
---@field RangeClose float
---@field RangeMedium float
---@field RangeFar float
local UTestScalingWidget_C = {}

function UTestScalingWidget_C:SetReactionIMG() end
---@param MyGeometry FGeometry
---@param InDeltaTime float
function UTestScalingWidget_C:Tick(MyGeometry, InDeltaTime) end
---@param HappyCount int32
---@param HappyMin int32
---@param HappyMax int32
---@param bIsHappy boolean
---@param CurrentPopularityLevel int32
---@param Instaginator UObject
---@param Reason FString
function UTestScalingWidget_C:UpdateHappy(HappyCount, HappyMin, HappyMax, bIsHappy, CurrentPopularityLevel, Instaginator, Reason) end
function UTestScalingWidget_C:Construct() end
function UTestScalingWidget_C:Destruct() end
---@param ItemList TArray<TSubclassOf<AProduct>>
---@param DisplayTime float
function UTestScalingWidget_C:DisplayMissingProduct(ItemList, DisplayTime) end
function UTestScalingWidget_C:HideAfterDisplay() end
function UTestScalingWidget_C:Colapse() end
---@param EntryPoint int32
function UTestScalingWidget_C:ExecuteUbergraph_TestScalingWidget(EntryPoint) end


