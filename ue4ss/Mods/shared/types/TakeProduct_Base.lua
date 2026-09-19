---@meta

---@class UTakeProduct_Base_C : UIteractableActorTask
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ProductGroup TArray<TSubclassOf<AProduct>>
---@field ClassToFound TSubclassOf<AItem>
---@field MinItems int32
---@field MaxItems int32
---@field ActiveShelf AShelf
---@field Found boolean
---@field ShelfGroup TArray<TSubclassOf<AShelf>>
---@field ValidShelves TArray<AShelf>
---@field ShoppingList TArray<FFShoppingList>
---@field ShelvesAlreadyVisited TArray<AShelf>
---@field ProductsNotFound TArray<TSubclassOf<AProduct>>
---@field bCheckedAtLeastOneShelf boolean
---@field Items int32
---@field MontagesToPlay TArray<FBaseCharacterSkeletonMontage>
local UTakeProduct_Base_C = {}

function UTakeProduct_Base_C:HandleVIPGoesToCash() end
---@param PercentChance float
---@param bSuccess boolean
UTakeProduct_Base_C['Chance Roll'] = function(self, PercentChance, bSuccess) end
---@param bComplete boolean
function UTakeProduct_Base_C:IsShoppingCompleted(bComplete) end
---@param ShoppingItem TSubclassOf<AProduct>
---@param IndexFound int32
function UTakeProduct_Base_C:GetShoppingListItemIndex(ShoppingItem, IndexFound) end
function UTakeProduct_Base_C:GenerateShoppingList() end
function UTakeProduct_Base_C:TryGetProductsFromShelf() end
---@param bFoundShelf boolean
function UTakeProduct_Base_C:PickSpecificShelf(bFoundShelf) end
function UTakeProduct_Base_C:PickValidShelves() end
---@param ProductToTake TSubclassOf<AProduct>
---@param Amount int32
---@param AmountGot int32
function UTakeProduct_Base_C:TakeProduct(ProductToTake, Amount, AmountGot) end
---@param NotifyName FName
function UTakeProduct_Base_C:OnNotifyEnd_E941211842167B491F192AA970683B98(NotifyName) end
---@param NotifyName FName
function UTakeProduct_Base_C:OnNotifyBegin_E941211842167B491F192AA970683B98(NotifyName) end
---@param NotifyName FName
function UTakeProduct_Base_C:OnInterrupted_E941211842167B491F192AA970683B98(NotifyName) end
---@param NotifyName FName
function UTakeProduct_Base_C:OnBlendOut_E941211842167B491F192AA970683B98(NotifyName) end
---@param NotifyName FName
function UTakeProduct_Base_C:OnCompleted_E941211842167B491F192AA970683B98(NotifyName) end
---@param NotifyName FName
function UTakeProduct_Base_C:OnNotifyEnd_816CE2BD460283E4289D9FAE8A1462CC(NotifyName) end
---@param NotifyName FName
function UTakeProduct_Base_C:OnNotifyBegin_816CE2BD460283E4289D9FAE8A1462CC(NotifyName) end
---@param NotifyName FName
function UTakeProduct_Base_C:OnInterrupted_816CE2BD460283E4289D9FAE8A1462CC(NotifyName) end
---@param NotifyName FName
function UTakeProduct_Base_C:OnBlendOut_816CE2BD460283E4289D9FAE8A1462CC(NotifyName) end
---@param NotifyName FName
function UTakeProduct_Base_C:OnCompleted_816CE2BD460283E4289D9FAE8A1462CC(NotifyName) end
---@param Character ACharacter
function UTakeProduct_Base_C:StartTask(Character) end
---@param Character AAICharacterBase
---@param NewTasksProgress TArray<FTaskProgress>
function UTakeProduct_Base_C:InitializeTask(Character, NewTasksProgress) end
---@param TaskState ETaskResult
---@param FinishReason FString
function UTakeProduct_Base_C:FinishBeginTask(TaskState, FinishReason) end
---@param DeltaTime float
function UTakeProduct_Base_C:TickObject(DeltaTime) end
function UTakeProduct_Base_C:RecheckShelves() end
function UTakeProduct_Base_C:PlayMontage_CustomerReachingShelf() end
---@param ProductClass TArray<TSubclassOf<AProduct>>
function UTakeProduct_Base_C:PlayMontage_FrustratedDidntFindProduct(ProductClass) end
---@param EntryPoint int32
function UTakeProduct_Base_C:ExecuteUbergraph_TakeProduct_Base(EntryPoint) end


