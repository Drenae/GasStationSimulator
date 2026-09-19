---@meta

---@class UWBP_SingleRequirement_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Acceleration_VerticalBox UVerticalBox
---@field AdditionalInfo UTextBlock
---@field BG_RequirementMet UImage
---@field Change_Requirement UWidgetSwitcher
---@field ColorCode UTextBlock
---@field ColorRequired UImage
---@field DecalIcon UImage
---@field DecalName UTextBlock
---@field Handling_VerticalBox UVerticalBox
---@field Headline_text UTextBlock
---@field Image_114 UImage
---@field Image_261 UImage
---@field Image_348 UImage
---@field Image_473 UImage
---@field PartIcon UImage
---@field PartTierColor UImage
---@field ProgressBar_Acceleration UImage
---@field ProgressBar_Handling UImage
---@field ProgressBar_Image_1 UImage
---@field ProgressBar_TopSpeed UImage
---@field ProgressBarStrenght UImage
---@field StatNameOverallCar UTextBlock
---@field Strengh_VerticalBox UVerticalBox
---@field Tier_HorizontalBox UHorizontalBox
---@field TierName UTextBlock
---@field TierName_Wreck UTextBlock
---@field TopSpeed_VerticalBox UVerticalBox
---@field WreckBG UImage
---@field WreckIcon UImage
---@field bMet boolean
---@field MAT_TierColorWreck UMaterialInstanceDynamic
---@field MAT_TierPartColor UMaterialInstanceDynamic
---@field ProgressTopSpeed UMaterialInstanceDynamic
---@field ProgressBarOverallCar UMaterialInstanceDynamic
---@field ProgressAcceleration UMaterialInstanceDynamic
---@field ProgressStrengh UMaterialInstanceDynamic
---@field ProgressHandling UMaterialInstanceDynamic
local UWBP_SingleRequirement_C = {}

---@param IsRequired boolean
---@param CarPartName FText
---@param ReqMet boolean
function UWBP_SingleRequirement_C:NameRequired(IsRequired, CarPartName, ReqMet) end
---@param bIsReq boolean
---@param bReqMet boolean
function UWBP_SingleRequirement_C:RarityRequired(bIsReq, bReqMet) end
---@param bIsReq boolean
---@param bReqMet boolean
function UWBP_SingleRequirement_C:StrenghRequired(bIsReq, bReqMet) end
---@param bIsReq boolean
---@param bReqMet boolean
function UWBP_SingleRequirement_C:TopSpeedRequired(bIsReq, bReqMet) end
---@param bIsReq boolean
---@param bReqMet boolean
function UWBP_SingleRequirement_C:HandlingRequired(bIsReq, bReqMet) end
---@param bIsReq boolean
---@param bReqMet boolean
function UWBP_SingleRequirement_C:AccelerationRequired(bIsReq, bReqMet) end
---@param StatName FText
---@param ProgressAmount float
function UWBP_SingleRequirement_C:SetOverallCarStatistic(StatName, ProgressAmount) end
---@param DecalIcon UTexture2D
---@param DecalName FText
function UWBP_SingleRequirement_C:SetDecal(DecalIcon, DecalName) end
---@param ColorCode FText
---@param ColorRequired FLinearColor
function UWBP_SingleRequirement_C:SetColor(ColorCode, ColorRequired) end
---@param Name FText
---@param Icon UTexture2D
---@param TierName FText
---@param bIsReq boolean
---@param bReqMet boolean
function UWBP_SingleRequirement_C:SetWreck(Name, Icon, TierName, bIsReq, bReqMet) end
---@param Name FText
---@param Icon UTexture2D
---@param TierName FText
---@param TopSpeedValue float
---@param HandlingValue float
---@param AccelerationValue float
---@param StrenghtValue float
function UWBP_SingleRequirement_C:SetCarPart(Name, Icon, TierName, TopSpeedValue, HandlingValue, AccelerationValue, StrenghtValue) end
function UWBP_SingleRequirement_C:Construct() end
---@param EntryPoint int32
function UWBP_SingleRequirement_C:ExecuteUbergraph_WBP_SingleRequirement(EntryPoint) end


