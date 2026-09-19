---@meta

---@class ADecoration_Clock_C : ADecoration_Base_Ground_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Cuckoo_Cue UAudioComponent
---@field Box UBoxComponent
---@field SkeletalMesh USkeletalMeshComponent
---@field CooKooCounter int32
---@field ClockActivated FDecoration_Clock_CClockActivated
local ADecoration_Clock_C = {}

---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function ADecoration_Clock_C:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
---@param NotifyName FName
function ADecoration_Clock_C:OnNotifyEnd_141F880F48BFBBF1806DFF8943754886(NotifyName) end
---@param NotifyName FName
function ADecoration_Clock_C:OnNotifyBegin_141F880F48BFBBF1806DFF8943754886(NotifyName) end
---@param NotifyName FName
function ADecoration_Clock_C:OnInterrupted_141F880F48BFBBF1806DFF8943754886(NotifyName) end
---@param NotifyName FName
function ADecoration_Clock_C:OnBlendOut_141F880F48BFBBF1806DFF8943754886(NotifyName) end
---@param NotifyName FName
function ADecoration_Clock_C:OnCompleted_141F880F48BFBBF1806DFF8943754886(NotifyName) end
---@param NotifyName FName
function ADecoration_Clock_C:OnNotifyEnd_5AAF67D14422DE202612F09B307A028F(NotifyName) end
---@param NotifyName FName
function ADecoration_Clock_C:OnNotifyBegin_5AAF67D14422DE202612F09B307A028F(NotifyName) end
---@param NotifyName FName
function ADecoration_Clock_C:OnInterrupted_5AAF67D14422DE202612F09B307A028F(NotifyName) end
---@param NotifyName FName
function ADecoration_Clock_C:OnBlendOut_5AAF67D14422DE202612F09B307A028F(NotifyName) end
---@param NotifyName FName
function ADecoration_Clock_C:OnCompleted_5AAF67D14422DE202612F09B307A028F(NotifyName) end
---@param Pawn APawn
function ADecoration_Clock_C:DisableInteractionInfo(Pawn) end
function ADecoration_Clock_C:ReceiveBeginPlay() end
---@param UpdatedTime int32
function ADecoration_Clock_C:CustomEvent_0(UpdatedTime) end
---@param bCompatibile boolean
---@param OverlapedElements TArray<AActor>
---@param Reason FName
function ADecoration_Clock_C:CanBeSpawned(bCompatibile, OverlapedElements, Reason) end
---@param OverlappedComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
---@param bFromSweep boolean
---@param SweepResult FHitResult
function ADecoration_Clock_C:BndEvt__Decoration_Clock_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult) end
function ADecoration_Clock_C:ActivateClockCooKoo() end
---@param NewUnlockableGameplayStuffState FUnlockableGameplayStuffState
function ADecoration_Clock_C:OnNewGameplayStuffUnlockStateChanged(NewUnlockableGameplayStuffState) end
function ADecoration_Clock_C:ToggleSkeletalTick() end
---@param EntryPoint int32
function ADecoration_Clock_C:ExecuteUbergraph_Decoration_Clock(EntryPoint) end
function ADecoration_Clock_C:ClockActivated__DelegateSignature() end


