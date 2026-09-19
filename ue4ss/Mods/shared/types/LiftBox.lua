---@meta

---@class ALiftBox_C : AItemBox
---@field UberGraphFrame FPointerToUberGraphFrame
---@field OtherInventory UInventoryComponent
---@field Shelf TArray<AActor>
---@field CanPlace boolean
---@field Markers TArray<AObjectiveMarker>
---@field IsAirplane boolean
---@field MeshWithCustomDepth TArray<UStaticMeshComponent>
local ALiftBox_C = {}

---@return FName
function ALiftBox_C:GetInteractionName() end
function ALiftBox_C:LiftBoxShelvFind() end
---@param Actor AActor
---@param RotateToTransform boolean
---@return FTransform
function ALiftBox_C:GetInteractiveTransform(Actor, RotateToTransform) end
---@param GSSWheeledVehicle AGSSWheeledVehicle
---@return APathPoint
function ALiftBox_C:GetPathPoint(GSSWheeledVehicle) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function ALiftBox_C:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ALiftBox_C:SimpleInteraction(Pawn, UPrimitiveComponent) end
---@param Key FKey
function ALiftBox_C:InpActEvt_LPM_K2Node_InputActionEvent_1(Key) end
---@param Key FKey
function ALiftBox_C:InpActEvt_RPM_K2Node_InputActionEvent_0(Key) end
function ALiftBox_C:ReceiveBeginPlay() end
---@param DeltaSeconds float
function ALiftBox_C:ReceiveTick(DeltaSeconds) end
function ALiftBox_C:ReceiveDestroyed() end
function ALiftBox_C:OnGameSaveStarted() end
function ALiftBox_C:OnGameSaveCompleted() end
---@param EntryPoint int32
function ALiftBox_C:ExecuteUbergraph_LiftBox(EntryPoint) end


