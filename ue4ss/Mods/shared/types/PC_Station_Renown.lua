---@meta

---@class UPC_Station_Renown_C : UGSSInnerWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field HappyAngryCapacityTXT UTextBlock
---@field HappyLevelTXT UTextBlock
---@field HappyPercentTXT UTextBlock
---@field HappyRadialProgress UImage
---@field PopularityOverlay UOverlay
---@field CurrentHappy int32
---@field HappyMax int32
---@field MinHappy int32
---@field CurrentPopularityLevel int32
local UPC_Station_Renown_C = {}

---@param CurrentHappy int32
---@param MinHappy int32
---@param HappyMax int32
---@param CurrentPopularityLevel int32
UPC_Station_Renown_C['Update Happy Angry'] = function(self, CurrentHappy, MinHappy, HappyMax, CurrentPopularityLevel) end
function UPC_Station_Renown_C:UpdateHappyAngryMax() end
---@param HappyAngryPopularityLevel int32
function UPC_Station_Renown_C:UpdateHappyLevel(HappyAngryPopularityLevel) end
---@param HappyCount int32
---@param HappyMin int32
---@param HappyMax int32
---@param bIsHappy boolean
---@param CurrentPopularityLevel int32
---@param Instaginator UObject
---@param Reason FString
function UPC_Station_Renown_C:UpdateHappyAmmount(HappyCount, HappyMin, HappyMax, bIsHappy, CurrentPopularityLevel, Instaginator, Reason) end
function UPC_Station_Renown_C:Construct() end
function UPC_Station_Renown_C:Destruct() end
---@param HappyCount int32
---@param HappyMin int32
---@param HappyMax int32
---@param bIsHappy boolean
---@param CurrentPopularityLevel int32
---@param Instaginator UObject
---@param Reason FString
function UPC_Station_Renown_C:CustomEvent_0(HappyCount, HappyMin, HappyMax, bIsHappy, CurrentPopularityLevel, Instaginator, Reason) end
---@param HappyAngryPopularityLevel int32
function UPC_Station_Renown_C:CustomEvent_1(HappyAngryPopularityLevel) end
---@param EntryPoint int32
function UPC_Station_Renown_C:ExecuteUbergraph_PC_Station_Renown(EntryPoint) end


