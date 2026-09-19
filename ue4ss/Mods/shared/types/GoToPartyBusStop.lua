---@meta

---@class UGoToPartyBusStop_C : UIteractableActorTask
---@field UberGraphFrame FPointerToUberGraphFrame
---@field TimeToSpawn float
---@field AmericanBus AGSSWheeledVehicle
---@field BusGuys TArray<APawn>
---@field ['2D_Bus_Music'] UAudioComponent
---@field SoundActor ASoundActor_C
---@field BusMusicAttached UAudioComponent
---@field BusHome APartyBusHome_C
---@field FadeSoundtrack USoundMix
---@field Character AAICharacterBase
---@field NPCAmountToSpawn int32
---@field bIsAsyncLoadingActive boolean
---@field ['Init Vehicle'] TSoftClassPtr<AGSSWheeledVehicle>
local UGoToPartyBusStop_C = {}

---@param NotifyName FName
function UGoToPartyBusStop_C:OnNotifyEnd_D1980409405094DF1524048B639F3F2D(NotifyName) end
---@param NotifyName FName
function UGoToPartyBusStop_C:OnNotifyBegin_D1980409405094DF1524048B639F3F2D(NotifyName) end
---@param NotifyName FName
function UGoToPartyBusStop_C:OnInterrupted_D1980409405094DF1524048B639F3F2D(NotifyName) end
---@param NotifyName FName
function UGoToPartyBusStop_C:OnBlendOut_D1980409405094DF1524048B639F3F2D(NotifyName) end
---@param NotifyName FName
function UGoToPartyBusStop_C:OnCompleted_D1980409405094DF1524048B639F3F2D(NotifyName) end
---@param Loaded UClass
function UGoToPartyBusStop_C:OnLoaded_A2A5F7A74375782719219FB8EED306AB(Loaded) end
---@param Character AAICharacterBase
---@param NewTasksProgress TArray<FTaskProgress>
function UGoToPartyBusStop_C:InitializeTask(Character, NewTasksProgress) end
---@param Character ACharacter
function UGoToPartyBusStop_C:StartTask(Character) end
---@param DeltaTime float
function UGoToPartyBusStop_C:TickObject(DeltaTime) end
---@param TaskState ETaskResult
---@param FinishReason FString
function UGoToPartyBusStop_C:FinishBeginTask(TaskState, FinishReason) end
---@param DestroyedActor AActor
function UGoToPartyBusStop_C:OnDestroyed(DestroyedActor) end
---@param bIsOpen boolean
function UGoToPartyBusStop_C:OnCloseOpenGasStation(bIsOpen) end
---@param AICharacterBase AAICharacterBase
---@param HumanType EHumanType
function UGoToPartyBusStop_C:OnFinishedAsyncLoadCustomerPartySpot(AICharacterBase, HumanType) end
function UGoToPartyBusStop_C:MakeVisible() end
function UGoToPartyBusStop_C:AsyncLoad() end
function UGoToPartyBusStop_C:OnUfoUsed() end
---@param EntryPoint int32
function UGoToPartyBusStop_C:ExecuteUbergraph_GoToPartyBusStop(EntryPoint) end


