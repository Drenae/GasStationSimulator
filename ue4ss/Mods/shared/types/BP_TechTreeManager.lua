---@meta

---@class UBP_TechTreeManager_C : UTechTreeManager
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Resources TMap<Enum_TT_Cost::Type, uint8>
---@field OnTechnologyUnlock FBP_TechTreeManager_COnTechnologyUnlock
local UBP_TechTreeManager_C = {}

---@param InputPin UTechnologyAsset
function UBP_TechTreeManager_C:UnlockCurrentTechnology(InputPin) end
function UBP_TechTreeManager_C:AddResources() end
---@param TechnologyCost TMap<uint8, uint8>
---@param AdvencedTechnologyAsset UBP_AdvencedTechnologyAsset_C
function UBP_TechTreeManager_C:PayCost(TechnologyCost, AdvencedTechnologyAsset) end
---@param TechnologyCost TMap<uint8, uint8>
---@param EnoughResources boolean
function UBP_TechTreeManager_C:HasEnoughResources(TechnologyCost, EnoughResources) end
---@param Technology UTechnologyAsset
---@param WithoutPay boolean
---@param CanUnlock boolean
---@param MoneyCondition boolean
---@param QuestCondition boolean
---@param BuildingLevelCondition boolean
---@param ItemsCondition boolean
---@param ContractPoints boolean
function UBP_TechTreeManager_C:CheckUnlockCost(Technology, WithoutPay, CanUnlock, MoneyCondition, QuestCondition, BuildingLevelCondition, ItemsCondition, ContractPoints) end
---@param TechnologyCost TMap<uint8, uint8>
---@param AdvencedTechnologyAsset UBP_AdvencedTechnologyAsset_C
---@param WithoutPay boolean
---@param Success boolean
---@param MoneyCondition boolean
---@param QuestCondition boolean
---@param BuildingLevelCondition boolean
---@param ItemsCondition boolean
---@param ContractPoints boolean
function UBP_TechTreeManager_C:TryPayTechnologyCost(TechnologyCost, AdvencedTechnologyAsset, WithoutPay, Success, MoneyCondition, QuestCondition, BuildingLevelCondition, ItemsCondition, ContractPoints) end
---@param Technology UTechnologyAsset
function UBP_TechTreeManager_C:TryToUnlockTechnology(Technology) end
---@param EntryPoint int32
function UBP_TechTreeManager_C:ExecuteUbergraph_BP_TechTreeManager(EntryPoint) end
---@param Asset UTechnologyAsset
---@param Unlocked boolean
function UBP_TechTreeManager_C:OnTechnologyUnlock__DelegateSignature(Asset, Unlocked) end


