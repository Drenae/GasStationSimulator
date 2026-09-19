---@meta

---@class UWBP_ContractCarPart_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field CheckAnim UWidgetAnimation
---@field AdditionalInfo UTextBlock
---@field CarPart_BG_IMG UImage
---@field CarPartColor_Icon UImage
---@field CheckBox_120 UCheckBox
---@field CheckedBG UImage
---@field Main_Name UTextBlock
---@field Material_Decal_PaintStyle_Icon UImage
---@field Storage_Icon UImage
---@field CarPartStructure FSavedCarPart
---@field CarPartType EJunkyardCarPartType
---@field TierColor FLinearColor
---@field bIsUsedInCustomization boolean
local UWBP_ContractCarPart_C = {}

---@param Target USpecialContract
---@param Rarity EJunkyardPartRarity
---@param Type EJunkyardCarPartType
---@param CarWreck AJunkyardCarWreck
---@param bHas boolean
function UWBP_ContractCarPart_C:CheckPlayerHasPartByTier(Target, Rarity, Type, CarWreck, bHas) end
---@param PaintReq boolean
function UWBP_ContractCarPart_C:SetReqTypeVisibility_0(PaintReq) end
---@param Texture TSoftObjectPtr<UTexture2D>
---@param Name FText
---@param Category FText
function UWBP_ContractCarPart_C:SetMaterial_Decal_PaintStyle(Texture, Name, Category) end
---@param CarPartName FText
function UWBP_ContractCarPart_C:NameRequired(CarPartName) end
---@param bIsReq boolean
function UWBP_ContractCarPart_C:RarityRequired(bIsReq) end
---@param Name FText
---@param Icon TSoftObjectPtr<UTexture2D>
---@param RequiresTier boolean
---@param Tier EJunkyardPartRarity
---@param CarPartType FText
---@param OnlyTierRequired boolean
---@param SpecialContractRef USpecialContract
---@param Type EJunkyardCarPartType
---@param CarWreckRef AJunkyardCarWreck
function UWBP_ContractCarPart_C:SetCarPart(Name, Icon, RequiresTier, Tier, CarPartType, OnlyTierRequired, SpecialContractRef, Type, CarWreckRef) end
---@param DecalIcon TSoftObjectPtr<UTexture2D>
---@param DecalCategory FText
---@param DecalAdditional FText
function UWBP_ContractCarPart_C:SetDecal(DecalIcon, DecalCategory, DecalAdditional) end
---@param CarPartText FText
---@param ColorCode FText
---@param ColorRequired FLinearColor
---@param PartIcon TSoftObjectPtr<UTexture2D>
function UWBP_ContractCarPart_C:SetCarPartColor(CarPartText, ColorCode, ColorRequired, PartIcon) end
---@param Name FText
---@param Icon TSoftObjectPtr<UTexture2D>
---@param TierName FText
---@param bIsReq boolean
---@param TierColor FLinearColor
UWBP_ContractCarPart_C['Set Wreck'] = function(self, Name, Icon, TierName, bIsReq, TierColor) end
---@param PaintReq boolean
function UWBP_ContractCarPart_C:SetReqTypeVisibility(PaintReq) end
function UWBP_ContractCarPart_C:SetUnchecked() end
function UWBP_ContractCarPart_C:SetChecked() end
---@param Loaded UObject
function UWBP_ContractCarPart_C:OnLoaded_D80AA01E4CA4CDE8314209B47B97801B(Loaded) end
---@param Loaded UObject
function UWBP_ContractCarPart_C:OnLoaded_41ECD02543EE3CC89DEFA3A1C9C75156(Loaded) end
---@param Loaded UObject
function UWBP_ContractCarPart_C:OnLoaded_CDF22E29456D870D3174A8A8453DCF7E(Loaded) end
---@param Loaded UObject
function UWBP_ContractCarPart_C:OnLoaded_50BF6BEE4D310AA70E9505AC6032C9D5(Loaded) end
function UWBP_ContractCarPart_C:Construct() end
---@param Icon TSoftObjectPtr<UTexture2D>
function UWBP_ContractCarPart_C:LoadCarPartTexture(Icon) end
---@param Texture TSoftObjectPtr<UTexture2D>
function UWBP_ContractCarPart_C:LoadPaintTexture(Texture) end
---@param Texture TSoftObjectPtr<UTexture2D>
function UWBP_ContractCarPart_C:LoadColorTexture(Texture) end
---@param EntryPoint int32
function UWBP_ContractCarPart_C:ExecuteUbergraph_WBP_ContractCarPart(EntryPoint) end


