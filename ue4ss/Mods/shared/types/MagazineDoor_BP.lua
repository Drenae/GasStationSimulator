---@meta

---@class AMagazineDoor_BP_C : AMagazineDoor_Base_BP_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Box UBoxComponent
---@field Link UChildActorComponent
---@field LockUp UStaticMeshComponent
---@field LockDown UStaticMeshComponent
---@field StaticMesh2 UStaticMeshComponent
---@field StaticMesh1 UStaticMeshComponent
---@field StaticMesh UStaticMeshComponent
---@field Door UStaticMeshComponent
---@field Timeline_0_angle_0FCB07664825968551F79EBC90E8D07B float
---@field Timeline_0__Direction_0FCB07664825968551F79EBC90E8D07B ETimelineDirection::Type
---@field Timeline_0 UTimelineComponent
---@field TargetTransform FTransform
---@field StartTarget FTransform
---@field DoorLink ANLP_DoorLink_C
local AMagazineDoor_BP_C = {}

---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function AMagazineDoor_BP_C:SimpleInteraction(Pawn, UPrimitiveComponent) end
---@param Unlocked boolean
function AMagazineDoor_BP_C:TryUnlockDoor(Unlocked) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function AMagazineDoor_BP_C:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
function AMagazineDoor_BP_C:Timeline_0__FinishedFunc() end
function AMagazineDoor_BP_C:Timeline_0__UpdateFunc() end
function AMagazineDoor_BP_C:ReceiveBeginPlay() end
---@param DeltaSeconds float
function AMagazineDoor_BP_C:ReceiveTick(DeltaSeconds) end
---@param Pawn APawn
function AMagazineDoor_BP_C:DisableInteractionInfo(Pawn) end
---@param EndPlayReason EEndPlayReason::Type
function AMagazineDoor_BP_C:ReceiveEndPlay(EndPlayReason) end
---@param MovingActor AActor
---@param DestinationPoint FVector
function AMagazineDoor_BP_C:OnSmartLinkReached_Event_0(MovingActor, DestinationPoint) end
---@param GameLoaded boolean
function AMagazineDoor_BP_C:OnFinishGameLoaded_Event_0(GameLoaded) end
---@param Instigator APawn
function AMagazineDoor_BP_C:OpenDoor(Instigator) end
---@param NewUnlockableGameplayStuffState FUnlockableGameplayStuffState
function AMagazineDoor_BP_C:OnNewGameplayStuffUnlockStateChanged(NewUnlockableGameplayStuffState) end
---@param EntryPoint int32
function AMagazineDoor_BP_C:ExecuteUbergraph_MagazineDoor_BP(EntryPoint) end


