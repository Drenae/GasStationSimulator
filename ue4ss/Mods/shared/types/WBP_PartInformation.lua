---@meta

---@class UWBP_PartInformation_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field CartStats_Vertical UVerticalBox
---@field GSSOnly UTextBlock
---@field Image_21 UImage
---@field PartHeadline_Text UTextBlock
---@field PartIcon UImage
---@field Stats_Acceleration UPlatformCarStats_C
---@field Stats_Handling UPlatformCarStats_C
---@field Stats_Strenght UPlatformCarStats_C
---@field Stats_TopSpeed UPlatformCarStats_C
local UWBP_PartInformation_C = {}

---@param CarPartData FCarPartData
---@param PartType EJunkyardCarPartType
function UWBP_PartInformation_C:SetupStats(CarPartData, PartType) end
---@param PartName FText
---@param PartTypes TArray<EJunkyardCarPartType>
---@param CarPartData FCarPartData
---@param bGarage boolean
---@param Icon TSoftObjectPtr<UTexture2D>
---@param RustIcon TSoftObjectPtr<UTexture2D>
function UWBP_PartInformation_C:SetupName(PartName, PartTypes, CarPartData, bGarage, Icon, RustIcon) end
---@param Loaded UObject
function UWBP_PartInformation_C:OnLoaded_66A057E64E74C9E9CB1788B2F3A57372(Loaded) end
---@param Loaded UObject
function UWBP_PartInformation_C:OnLoaded_5FE099824C1787D55E5DA0A1EA16FBBF(Loaded) end
---@param Icon TSoftObjectPtr<UTexture2D>
---@param CarPartData FCarPartData
---@param RustIcon TSoftObjectPtr<UTexture2D>
function UWBP_PartInformation_C:SetupIcon(Icon, CarPartData, RustIcon) end
---@param EntryPoint int32
function UWBP_PartInformation_C:ExecuteUbergraph_WBP_PartInformation(EntryPoint) end


