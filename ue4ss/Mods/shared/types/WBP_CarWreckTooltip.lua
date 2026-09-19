---@meta

---@class UWBP_CarWreckTooltip_C : UUserWidget
---@field Aerodynamics_Stat UPlatformCarStats_C
---@field CarPartsScrollbox UScrollBox
---@field Control_stat UPlatformCarStats_C
---@field Image_5 UImage
---@field Image_21 UImage
---@field Image_1001 UImage
---@field Power_stat UPlatformCarStats_C
---@field TextBlock UTextBlock
---@field TextBlock_44 UTextBlock
---@field TextBlock_49 UTextBlock
---@field Toughness_stat UPlatformCarStats_C
local UWBP_CarWreckTooltip_C = {}

---@param WreckName FText
---@param WreckParts TMap<EJunkyardCarPartType, UActorComponent>
---@param WreckStats FCarPartData
function UWBP_CarWreckTooltip_C:SetupName(WreckName, WreckParts, WreckStats) end


