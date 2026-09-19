---@meta

---@class UWBP_SingleContractPlatform_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field CarDecalsCheckAnim UWidgetAnimation
---@field CarPaintCheckAnim UWidgetAnimation
---@field CarTypeCheckAnim UWidgetAnimation
---@field Color_VerticalBox UVerticalBox
---@field ContractTimeLeft UTextBlock
---@field Decal_VerticalBox UVerticalBox
---@field ExpandableArea_CarColor UExpandableArea
---@field ExpandableArea_CarDecals UExpandableArea
---@field ExpandableArea_CarParts UExpandableArea
---@field ExpandableArea_CarStats UExpandableArea
---@field ExpandableArea_CarTier UExpandableArea
---@field ExpandableArea_CarType UExpandableArea
---@field HorizontalBox_0 UHorizontalBox
---@field Image_5 UImage
---@field Image_6 UImage
---@field StatAcceleration UPlatformCarStatsSmall_C
---@field StatHandling UPlatformCarStatsSmall_C
---@field StatSpeed UPlatformCarStatsSmall_C
---@field StatStrenght UPlatformCarStatsSmall_C
---@field Time_HorizontalBox UHorizontalBox
---@field TimeLeftProgressBar UImage
---@field VerticalBox_CarParts UVerticalBox
---@field VerticalBox_CarParts_Tier UVerticalBox
---@field VerticalBox_CarType UVerticalBox
---@field VerticalBox_Color UVerticalBox
---@field VerticalBox_decals UVerticalBox
---@field VerticalBox_Parts UVerticalBox
---@field VerticalBox_Parts_Tier UVerticalBox
---@field VerticalBox_Stats UVerticalBox
---@field WBP_ContractCarPart UWBP_ContractCarPart_C
---@field Contract USpecialContract
---@field ['As Junkyard Car Wreck'] TSubclassOf<AJunkyardCarWreck>
---@field CurrentAmountOfDecals int32
---@field PaintTypeName FText
---@field JunkyardWreckREF AJunkyardCarWreck
---@field ['As Junkyard Car Wreck Customizable'] AJunkyardCarWreckCustomizable
---@field SelectButton_REF UGSS_Button_WBP_C
---@field CorrectWreckType boolean
---@field PaintTypeButtons TArray<UWBP_ContractCarPart_C>
---@field PaintColorButtons TArray<UWBP_ContractCarPart_C>
---@field PaintMaskButtons TArray<UWBP_ContractCarPart_C>
---@field MaxTime float
---@field TimeProgressBar float
---@field bIsInCustomizationPanel boolean
local UWBP_SingleContractPlatform_C = {}

---@param TimeStruct FTimeStruct
function UWBP_SingleContractPlatform_C:UpdateTime(TimeStruct) end
function UWBP_SingleContractPlatform_C:IsCorrectPaintTypeCheck() end
function UWBP_SingleContractPlatform_C:IsCorrectMaskCheck() end
---@param WreckRef UObject
UWBP_SingleContractPlatform_C['Update Contract'] = function(self, WreckRef) end
function UWBP_SingleContractPlatform_C:AreCorrectTiersCheck() end
function UWBP_SingleContractPlatform_C:AreCorrectCarPartsCheck() end
function UWBP_SingleContractPlatform_C:AreStatsHighEnoughCheck() end
function UWBP_SingleContractPlatform_C:IsCorrectPaintCheck() end
function UWBP_SingleContractPlatform_C:IsCorrectWreckTypeCheck() end
function UWBP_SingleContractPlatform_C:ShowCarPartsTier() end
---@param ContractPaintRequirement EContractRequirement
function UWBP_SingleContractPlatform_C:SetPaint(ContractPaintRequirement) end
function UWBP_SingleContractPlatform_C:ShowCarParts() end
UWBP_SingleContractPlatform_C['Show Decals'] = function(self, ) end
---@param WreckStatRequirement EContractRequirement
function UWBP_SingleContractPlatform_C:ShowWreckStats(WreckStatRequirement) end
function UWBP_SingleContractPlatform_C:ShowWreckType() end
---@param Loaded UClass
function UWBP_SingleContractPlatform_C:OnLoaded_3BC86B3349586879EDE4FBA205541A2F(Loaded) end
---@param Loaded UObject
function UWBP_SingleContractPlatform_C:OnLoaded_1FBE3B0D486A965B1709CD922C92DAC3(Loaded) end
function UWBP_SingleContractPlatform_C:Construct() end
---@param Texture TSoftObjectPtr<UTexture2D>
---@param ContractCarType UWBP_ContractCarPart_C
function UWBP_SingleContractPlatform_C:LoadCarIcon(Texture, ContractCarType) end
---@param UpdatedTime FTimeStruct
function UWBP_SingleContractPlatform_C:OnGameUpdated(UpdatedTime) end
function UWBP_SingleContractPlatform_C:Destruct() end
---@param EntryPoint int32
function UWBP_SingleContractPlatform_C:ExecuteUbergraph_WBP_SingleContractPlatform(EntryPoint) end


