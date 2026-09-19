---@meta

---@class APopcornMachine_BP_C : APopcornMachine
---@field UberGraphFrame FPointerToUberGraphFrame
---@field BoundsBox UBoxComponent
---@field Ring UStaticMeshComponent
---@field AudioPopcornLoop UAudioComponent
---@field popcorn_machine_asddon UStaticMeshComponent
---@field Widget UWidgetComponent
---@field NS_PopcornMachine UNiagaraComponent
---@field PopcornHolder UStaticMeshComponent
---@field PopcornMesh UStaticMeshComponent
---@field ButtonChildActor UChildActorComponent
---@field ProductionTimeline_NewTrack_0_6296F083480AA7C52545BFB79AE150CE float
---@field ProductionTimeline__Direction_6296F083480AA7C52545BFB79AE150CE ETimelineDirection::Type
---@field ProductionTimeline UTimelineComponent
---@field PopcornNotification UNotification_C
---@field DestroyHandleActor boolean
---@field ComboWidget UWBP_PopcornCombo_C
---@field StartAnimRate float
---@field FinishAnimRate float
---@field OnPopcornMinigameStart FPopcornMachine_BP_COnPopcornMinigameStart
---@field OnPopcornMinigameEnd FPopcornMachine_BP_COnPopcornMinigameEnd
---@field bMinigameActive boolean
---@field PopcornArea AMissionArea_C
---@field QuestPopup UNotification_C
local APopcornMachine_BP_C = {}

---@param Cost float
function APopcornMachine_BP_C:GetRefillCost(Cost) end
function APopcornMachine_BP_C:EndMinigame() end
function APopcornMachine_BP_C:StartMiniGame() end
function APopcornMachine_BP_C:UpdatePopcornMesh() end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function APopcornMachine_BP_C:SimpleInteraction(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function APopcornMachine_BP_C:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function APopcornMachine_BP_C:CanBeInteractable(Pawn, UPrimitiveComponent) end
---@param GameLoaded boolean
function APopcornMachine_BP_C:UpdateMachineStateAfterLoad(GameLoaded) end
function APopcornMachine_BP_C:ProductionTimeline__FinishedFunc() end
function APopcornMachine_BP_C:ProductionTimeline__UpdateFunc() end
function APopcornMachine_BP_C:Finished_05A6AF41494D7F561DF3EF8041A45D2B() end
function APopcornMachine_BP_C:Finished_59C965934B03A528D9477DAC7275FF24() end
function APopcornMachine_BP_C:ReceiveBeginPlay() end
function APopcornMachine_BP_C:RegisterPopcornMachine() end
function APopcornMachine_BP_C:ResetDestroyDoOnce() end
---@param NewCapacity int32
function APopcornMachine_BP_C:CapacityUpdateAction(NewCapacity) end
---@param NewTime float
function APopcornMachine_BP_C:TimeUpdateAction(NewTime) end
function APopcornMachine_BP_C:CheckForPopcornSpawn() end
function APopcornMachine_BP_C:DisplayNotification() end
function APopcornMachine_BP_C:BoxDestroyOnSpecialAction() end
function APopcornMachine_BP_C:StartProductionAnimation() end
function APopcornMachine_BP_C:FinishProductionAnimation() end
---@param Pawn APawn
function APopcornMachine_BP_C:DisableInteractionInfo(Pawn) end
function APopcornMachine_BP_C:ShowQuestPopup() end
function APopcornMachine_BP_C:ResetNotification() end
---@param OverlappedComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
function APopcornMachine_BP_C:BndEvt__PopcornMachine_BP_BoundsBox_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex) end
function APopcornMachine_BP_C:BoxDestroy() end
---@param EntryPoint int32
function APopcornMachine_BP_C:ExecuteUbergraph_PopcornMachine_BP(EntryPoint) end
function APopcornMachine_BP_C:OnPopcornMinigameEnd__DelegateSignature() end
function APopcornMachine_BP_C:OnPopcornMinigameStart__DelegateSignature() end


