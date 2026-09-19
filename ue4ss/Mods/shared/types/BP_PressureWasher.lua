---@meta

---@class ABP_PressureWasher_C : APressureWasher
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Object_PutBack_Cue UAudioComponent
---@field SkeletalMesh USkeletalMeshComponent
---@field SFX_DLC_JY_Grinder_Stop_Cue UAudioComponent
---@field SFX_DLC_JY_Grinder_Start_Cue UAudioComponent
---@field SFX_DLC_JY_Grinder_Loop_Metal_Cue UAudioComponent
---@field SFX_DLC_JY_Grinder_Loop_Default_Cue UAudioComponent
---@field Spread float
---@field params TArray<FParticleSysParam>
---@field BeamSpreadMax float
---@field BeamSpreadMin float
---@field DropSpreadMax float
---@field DropSpreadMin float
---@field SteamSpreadMax float
---@field SteamSpreadMin float
---@field LogicSpreadMax float
---@field LogicSpreadMin float
---@field LogicDensity float
---@field BeamSize float
---@field DropsSize float
---@field CloudSize float
---@field CarwashVFXflex UParticleSystemComponent
---@field OverlayREF UWBP_Grinder_C
---@field GrinderDynamicMat UMaterialInstanceDynamic
local ABP_PressureWasher_C = {}

---@param NewSpread float
function ABP_PressureWasher_C:SpreadSetup(NewSpread) end
---@param Interactor APawn
function ABP_PressureWasher_C:fakepickup(Interactor) end
function ABP_PressureWasher_C:fakedestroy() end
function ABP_PressureWasher_C:ReceiveBeginPlay() end
function ABP_PressureWasher_C:OnPickedUp() end
function ABP_PressureWasher_C:OnDropped() end
function ABP_PressureWasher_C:ReceiveDestroyed() end
function ABP_PressureWasher_C:StartWashing() end
function ABP_PressureWasher_C:StartGrindingCar() end
function ABP_PressureWasher_C:StopWashing() end
function ABP_PressureWasher_C:StopGrindingCar() end
function ABP_PressureWasher_C:OnPutDown() end
---@param EntryPoint int32
function ABP_PressureWasher_C:ExecuteUbergraph_BP_PressureWasher(EntryPoint) end


