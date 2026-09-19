---@meta

---@class ABP_DeathStarBall_C : ADiscoBall
---@field UberGraphFrame FPointerToUberGraphFrame
---@field PS_electricity_arcA1 UParticleSystemComponent
---@field PS_electricity_arcA UParticleSystemComponent
---@field SM_Bowl_Ring_2_inside UStaticMeshComponent
---@field SM_Bowl_Ring_1_outside UStaticMeshComponent
---@field StaticMeshComponent0 UStaticMeshComponent
---@field PointLight UPointLightComponent
---@field StaticMeshComponent02 UStaticMeshComponent
---@field StaticMeshComponent01 UStaticMeshComponent
---@field SharedRoot USceneComponent
---@field Timeline_0_LightIntensity_F6FE61A44CAE6CFD8077009CF2B26943 float
---@field Timeline_0_LightHue_F6FE61A44CAE6CFD8077009CF2B26943 float
---@field Timeline_0__Direction_F6FE61A44CAE6CFD8077009CF2B26943 ETimelineDirection::Type
---@field Timeline_0 UTimelineComponent
---@field RotSpeed float
---@field LightIntensityMulti float
---@field DMI_DiscoBall UMaterialInstanceDynamic
---@field CurrentHue FLinearColor
---@field TurnOnTheBall boolean
---@field DMI_Discoball2 UMaterialInstanceDynamic
---@field DMI_Ring UMaterialInstanceDynamic
local ABP_DeathStarBall_C = {}

function ABP_DeathStarBall_C:Timeline_0__FinishedFunc() end
function ABP_DeathStarBall_C:Timeline_0__UpdateFunc() end
function ABP_DeathStarBall_C:ReceiveBeginPlay() end
---@param DeltaSeconds float
function ABP_DeathStarBall_C:ReceiveTick(DeltaSeconds) end
---@param bShouldBeOn boolean
function ABP_DeathStarBall_C:TurnLightsOnOff(bShouldBeOn) end
---@param EntryPoint int32
function ABP_DeathStarBall_C:ExecuteUbergraph_BP_DeathStarBall(EntryPoint) end


