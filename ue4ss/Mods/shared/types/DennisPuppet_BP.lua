---@meta

---@class ADennisPuppet_BP_C : ADennisPuppet
---@field UberGraphFrame FPointerToUberGraphFrame
---@field VacuumSpline USplineComponent
---@field DennisLaughter_CueLoop UAudioComponent
---@field DennisMoveLoop UAudioComponent
---@field AudioVacuumLoop UAudioComponent
---@field SpotLightRED USpotLightComponent
---@field PointLight UPointLightComponent
---@field SM_SirenLight UStaticMeshComponent
---@field DennisTraceBox UBoxComponent
---@field StaticMesh UStaticMeshComponent
---@field DennisParent UStaticMeshComponent
---@field SpotLight USpotLightComponent
---@field NS_Vacuum UNiagaraComponent
---@field End UStaticMeshComponent
---@field Start UStaticMeshComponent
---@field Spline USplineComponent
---@field RedLight_NewTrack_0_AE33B37644E5DA39AE929286641C95C7 float
---@field RedLight__Direction_AE33B37644E5DA39AE929286641C95C7 ETimelineDirection::Type
---@field RedLight UTimelineComponent
---@field ReverseTimeline_Value_59514CB146BB044400555EA1FB6D3797 float
---@field ReverseTimeline__Direction_59514CB146BB044400555EA1FB6D3797 ETimelineDirection::Type
---@field ReverseTimeline UTimelineComponent
---@field VacuumTimeline_Value_C07CFA5D42C856DD3BF202BE5CD4D3AC float
---@field VacuumTimeline__Direction_C07CFA5D42C856DD3BF202BE5CD4D3AC ETimelineDirection::Type
---@field VacuumTimeline UTimelineComponent
---@field SpawnTimeline_Value_279AC71B4A57F585A41870B453778029 float
---@field SpawnTimeline__Direction_279AC71B4A57F585A41870B453778029 ETimelineDirection::Type
---@field SpawnTimeline UTimelineComponent
---@field CurrentDistanceAlongSpline float
---@field MovementDirectionSign float
---@field TargetDistanceOnSpline float
---@field DistanceCompareErrorTolerance float
---@field PlayerLookTraceLength float
---@field SectionLenghtCoef float
---@field ['Section Lenght'] float
---@field SplineMesh UStaticMesh
---@field ['Spline Mesh Comp'] USplineMeshComponent
---@field MeshScale FVector2D
---@field Collision ECollisionEnabled::Type
---@field ['Cull Distance'] float
---@field ['CastShadow?'] boolean
---@field ['Curent Index'] int32
---@field DennisSpawnDuration float
---@field VacuumDuration float
---@field VacuumPullCooldown float
---@field LastSwingingLerpValue float
---@field SwingingLerpValue float
---@field SwingingLerpRight boolean
---@field SirenDMI UMaterialInstanceDynamic
---@field bSwinging boolean
---@field VacuumOffset FVector
local ADennisPuppet_BP_C = {}

function ADennisPuppet_BP_C:HandleDennisVisibility() end
function ADennisPuppet_BP_C:StopDennisAfterTime() end
function ADennisPuppet_BP_C:OnMovieStateChanges() end
---@return float
function ADennisPuppet_BP_C:GetMaxSplineDistance() end
function ADennisPuppet_BP_C:StopDennis() end
function ADennisPuppet_BP_C:StartDennis() end
function ADennisPuppet_BP_C:HideDennisMesh() end
function ADennisPuppet_BP_C:ShowDennisMesh() end
---@param Popcorn APopcornBox_BP_C
function ADennisPuppet_BP_C:OnDennisSteal(Popcorn) end
function ADennisPuppet_BP_C:UserConstructionScript() end
function ADennisPuppet_BP_C:VacuumTimeline__FinishedFunc() end
function ADennisPuppet_BP_C:VacuumTimeline__UpdateFunc() end
function ADennisPuppet_BP_C:ReverseTimeline__FinishedFunc() end
function ADennisPuppet_BP_C:ReverseTimeline__UpdateFunc() end
function ADennisPuppet_BP_C:SpawnTimeline__FinishedFunc() end
function ADennisPuppet_BP_C:SpawnTimeline__UpdateFunc() end
function ADennisPuppet_BP_C:RedLight__FinishedFunc() end
function ADennisPuppet_BP_C:RedLight__UpdateFunc() end
---@param bFromStart boolean
function ADennisPuppet_BP_C:StartVacuuming(bFromStart) end
---@param bFromStart boolean
function ADennisPuppet_BP_C:ReverseVacuum(bFromStart) end
function ADennisPuppet_BP_C:StopVacuuming() end
function ADennisPuppet_BP_C:DebugVacuum() end
---@param DeltaSeconds float
function ADennisPuppet_BP_C:ReceiveTick(DeltaSeconds) end
function ADennisPuppet_BP_C:RegisterInManager() end
function ADennisPuppet_BP_C:ReceiveBeginPlay() end
---@param bSpawn boolean
function ADennisPuppet_BP_C:PlaySpawnAnimation(bSpawn) end
---@param bGameLoaded boolean
function ADennisPuppet_BP_C:OnGameLoaded(bGameLoaded) end
---@param NewUnlockableGameplayStuffState FUnlockableGameplayStuffState
function ADennisPuppet_BP_C:OnNewStuffUnlocked(NewUnlockableGameplayStuffState) end
function ADennisPuppet_BP_C:ReceiveDestroyed() end
function ADennisPuppet_BP_C:DennisHit() end
---@param EntryPoint int32
function ADennisPuppet_BP_C:ExecuteUbergraph_DennisPuppet_BP(EntryPoint) end


