---@meta

---@class AFuelDeliveryBoat_BP_C : AWaterVehicleBase_BP_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field FuelEnterArrow UArrowComponent
---@field SM_FuelPipe_Oiltruck UStaticMeshComponent
---@field Hat UStaticMeshComponent
---@field DialogueAudio UAudioComponent
---@field Dialog3D UWidgetComponent
---@field OceanDisplacer UStaticMeshComponent
---@field OceanMask UStaticMeshComponent
---@field Bouyancy_point_debug_02 UArrowComponent
---@field Bouyancy_point_debug_01 UArrowComponent
---@field Bouyancy_point_debug_04 UArrowComponent
---@field Bouyancy_point_debug_03 UArrowComponent
---@field Pistolet UChildActorComponent
---@field Timer FTimerHandle
local AFuelDeliveryBoat_BP_C = {}

---@return AFuelPistolMagazineBase
function AFuelDeliveryBoat_BP_C:GetFuelPistolMagazine() end
function AFuelDeliveryBoat_BP_C:UserConstructionScript() end
function AFuelDeliveryBoat_BP_C:ReceiveDestroyed() end
function AFuelDeliveryBoat_BP_C:OnTimePassed() end
---@param bShowNotification boolean
function AFuelDeliveryBoat_BP_C:ShowNotification(bShowNotification) end
function AFuelDeliveryBoat_BP_C:BndEvt__FuelDeliveryBoat_BP_WaterMovementComponent_BP_K2Node_ComponentBoundEvent_1_BeginGoingHomeComponent__DelegateSignature() end
function AFuelDeliveryBoat_BP_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function AFuelDeliveryBoat_BP_C:ExecuteUbergraph_FuelDeliveryBoat_BP(EntryPoint) end


