---@meta

---@class UEmployee_RestockShelves_C : UEmployeeTask
---@field UberGraphFrame FPointerToUberGraphFrame
---@field NextTaskCanMove boolean
---@field ['New Task Index'] int32
---@field MontagesRestocking TArray<FBaseCharacterSkeletonMontage>
---@field TaskCompletionTime float
---@field RelaxActor AActor
---@field AnimTimeToWait float
---@field MontageSpeedMultiplier float
---@field MontagesRelaxing UAnimMontage
---@field CheckTaskTimer FTimerHandle
---@field IsRelaxing boolean
---@field RestockingAmountDT UDataTable
---@field FullyRelaxing boolean
---@field LastOperatedShelf AShelf
---@field ['Tag to Check'] FGameplayTag
---@field RotationOffset float
local UEmployee_RestockShelves_C = {}

function UEmployee_RestockShelves_C:RetriveProperCollisionForNewBaseMeshCharacters() end
function UEmployee_RestockShelves_C:HandleSittingMontages() end
---@return boolean
function UEmployee_RestockShelves_C:CheckChairFacing() end
---@param Output_Get FGameplayTag
function UEmployee_RestockShelves_C:FindCorrectAnimationTag(Output_Get) end
---@param Succes boolean
function UEmployee_RestockShelves_C:GotProductsToRestock(Succes) end
---@param Shelf AShelf
---@param CanBeRefilled boolean
function UEmployee_RestockShelves_C:CanShelfBeRefilled(Shelf, CanBeRefilled) end
---@param Items_Restocked_at_Once int32
function UEmployee_RestockShelves_C:GetAmountOfProducts(Items_Restocked_at_Once) end
---@param InputPin AShelf
function UEmployee_RestockShelves_C:ClearTargetShelf(InputPin) end
---@param EndRelaxing boolean
function UEmployee_RestockShelves_C:FinishRelax(EndRelaxing) end
function UEmployee_RestockShelves_C:GoRelax() end
---@param AmountToRestock int32
function UEmployee_RestockShelves_C:AddAmountProductsToShelf(AmountToRestock) end
function UEmployee_RestockShelves_C:AddSingleProductToShelf() end
function UEmployee_RestockShelves_C:AddProductsOfCategoryToShelf() end
---@param OutShelf AShelf
function UEmployee_RestockShelves_C:GetShelfToRefill(OutShelf) end
---@param InputPin AActor
UEmployee_RestockShelves_C['Set Target'] = function(self, InputPin) end
---@param Shelf AShelf
---@param ProductsToAdd TMap<TSoftClassPtr<AItem>, int32>
function UEmployee_RestockShelves_C:GetInventoryProducts(Shelf, ProductsToAdd) end
---@param NotifyName FName
function UEmployee_RestockShelves_C:OnNotifyEnd_FF75772C43959EDA807964A34292853B(NotifyName) end
---@param NotifyName FName
function UEmployee_RestockShelves_C:OnNotifyBegin_FF75772C43959EDA807964A34292853B(NotifyName) end
---@param NotifyName FName
function UEmployee_RestockShelves_C:OnInterrupted_FF75772C43959EDA807964A34292853B(NotifyName) end
---@param NotifyName FName
function UEmployee_RestockShelves_C:OnBlendOut_FF75772C43959EDA807964A34292853B(NotifyName) end
---@param NotifyName FName
function UEmployee_RestockShelves_C:OnCompleted_FF75772C43959EDA807964A34292853B(NotifyName) end
---@param NotifyName FName
function UEmployee_RestockShelves_C:OnNotifyEnd_E90DB87143FFD0AB5428A3B453EDE5CD(NotifyName) end
---@param NotifyName FName
function UEmployee_RestockShelves_C:OnNotifyBegin_E90DB87143FFD0AB5428A3B453EDE5CD(NotifyName) end
---@param NotifyName FName
function UEmployee_RestockShelves_C:OnInterrupted_E90DB87143FFD0AB5428A3B453EDE5CD(NotifyName) end
---@param NotifyName FName
function UEmployee_RestockShelves_C:OnBlendOut_E90DB87143FFD0AB5428A3B453EDE5CD(NotifyName) end
---@param NotifyName FName
function UEmployee_RestockShelves_C:OnCompleted_E90DB87143FFD0AB5428A3B453EDE5CD(NotifyName) end
---@param NotifyName FName
function UEmployee_RestockShelves_C:OnNotifyEnd_11F3850D4E663B92C03398BEEF57887D(NotifyName) end
---@param NotifyName FName
function UEmployee_RestockShelves_C:OnNotifyBegin_11F3850D4E663B92C03398BEEF57887D(NotifyName) end
---@param NotifyName FName
function UEmployee_RestockShelves_C:OnInterrupted_11F3850D4E663B92C03398BEEF57887D(NotifyName) end
---@param NotifyName FName
function UEmployee_RestockShelves_C:OnBlendOut_11F3850D4E663B92C03398BEEF57887D(NotifyName) end
---@param NotifyName FName
function UEmployee_RestockShelves_C:OnCompleted_11F3850D4E663B92C03398BEEF57887D(NotifyName) end
---@param Character AAICharacterBase
---@param NewTasksProgress TArray<FTaskProgress>
function UEmployee_RestockShelves_C:InitializeTask(Character, NewTasksProgress) end
---@param Character ACharacter
function UEmployee_RestockShelves_C:StartTask(Character) end
function UEmployee_RestockShelves_C:ContinueRefillmentTask() end
---@param Index int32
function UEmployee_RestockShelves_C:ActivateTask(Index) end
---@param DeltaTime float
function UEmployee_RestockShelves_C:TickObject(DeltaTime) end
---@param TaskState ETaskResult
---@param FinishReason FString
function UEmployee_RestockShelves_C:FinishBeginTask(TaskState, FinishReason) end
function UEmployee_RestockShelves_C:CheckTasks() end
function UEmployee_RestockShelves_C:PlayStandUpAnimation() end
function UEmployee_RestockShelves_C:PerformRelaxAnimations() end
---@param EntryPoint int32
function UEmployee_RestockShelves_C:ExecuteUbergraph_Employee_RestockShelves(EntryPoint) end


