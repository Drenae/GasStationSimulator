---@meta

---@class UGoToBusStop_C : UIteractableActorTask
---@field UberGraphFrame FPointerToUberGraphFrame
---@field TimeToSpawn float
---@field AmericanBus AAmericanBUS_BP_C
---@field BusGuys TArray<APawn>
---@field ['2D_Bus_Music'] UAudioComponent
---@field SoundActor ASoundActor_C
---@field BusMusicAttached UAudioComponent
---@field BusHome ABusHome_BP_C
---@field FadeSoundtrack USoundMix
---@field Character AAICharacterBase
---@field bNotAllBusGuys boolean
---@field bIsAsyncLoadingActive boolean
---@field TryFindBusStopTimer FTimerHandle
---@field ['Montages Skeletons'] TArray<FBaseCharacterSkeletonMontage>
---@field NULL TSoftClassPtr<AGSSWheeledVehicle>
---@field TryFindBusStopTimer2 FTimerHandle
local UGoToBusStop_C = {}

---@param NotifyName FName
function UGoToBusStop_C:OnNotifyEnd_322FB0E64BD7D57F7342D4974DDCB589(NotifyName) end
---@param NotifyName FName
function UGoToBusStop_C:OnNotifyBegin_322FB0E64BD7D57F7342D4974DDCB589(NotifyName) end
---@param NotifyName FName
function UGoToBusStop_C:OnInterrupted_322FB0E64BD7D57F7342D4974DDCB589(NotifyName) end
---@param NotifyName FName
function UGoToBusStop_C:OnBlendOut_322FB0E64BD7D57F7342D4974DDCB589(NotifyName) end
---@param NotifyName FName
function UGoToBusStop_C:OnCompleted_322FB0E64BD7D57F7342D4974DDCB589(NotifyName) end
---@param Loaded UClass
function UGoToBusStop_C:OnLoaded_EC6DEA364CAC3E0112EB53906455AFC8(Loaded) end
---@param Character AAICharacterBase
---@param NewTasksProgress TArray<FTaskProgress>
function UGoToBusStop_C:InitializeTask(Character, NewTasksProgress) end
---@param Character ACharacter
function UGoToBusStop_C:StartTask(Character) end
---@param DeltaTime float
function UGoToBusStop_C:TickObject(DeltaTime) end
---@param TaskState ETaskResult
---@param FinishReason FString
function UGoToBusStop_C:FinishBeginTask(TaskState, FinishReason) end
---@param DestroyedActor AActor
function UGoToBusStop_C:OnDestroyed(DestroyedActor) end
function UGoToBusStop_C:MakeVisible() end
---@param AICharacterBase AAICharacterBase
---@param HumanType EHumanType
function UGoToBusStop_C:OnFinishedAsyncLoadCustomer(AICharacterBase, HumanType) end
function UGoToBusStop_C:SetAsyncLoadingActive() end
function UGoToBusStop_C:TryFindBusStop() end
function UGoToBusStop_C:OnAudioFinished_Event_0() end
---@param DestroyedActor AActor
function UGoToBusStop_C:OnDestroyed_Event_0(DestroyedActor) end
function UGoToBusStop_C:TryFindBusStop2() end
---@param EntryPoint int32
function UGoToBusStop_C:ExecuteUbergraph_GoToBusStop(EntryPoint) end


