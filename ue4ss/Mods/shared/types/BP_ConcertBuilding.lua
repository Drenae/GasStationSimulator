---@meta

---@class ABP_ConcertBuilding_C : ARvConcertBuilding
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ['Concert Range Sphere'] USphereComponent
---@field Arrow25 UArrowComponent
---@field Arrow24 UArrowComponent
---@field Arrow23 UArrowComponent
---@field Arrow22 UArrowComponent
---@field Arrow21 UArrowComponent
---@field Arrow20 UArrowComponent
---@field Arrow19 UArrowComponent
---@field Arrow18 UArrowComponent
---@field Arrow17 UArrowComponent
---@field Arrow16 UArrowComponent
---@field Arrow15 UArrowComponent
---@field Arrow14 UArrowComponent
---@field Arrow13 UArrowComponent
---@field Arrow12 UArrowComponent
---@field arrow UArrowComponent
---@field Arrow10 UArrowComponent
---@field Arrow9 UArrowComponent
---@field Arrow8 UArrowComponent
---@field Arrow7 UArrowComponent
---@field Arrow6 UArrowComponent
---@field Arrow5 UArrowComponent
---@field Arrow4 UArrowComponent
---@field Arrow3 UArrowComponent
---@field Arrow2 UArrowComponent
---@field Arrow11 UArrowComponent
---@field DiscoBall TSoftObjectPtr<ABP_DeathStarBall_C>
---@field ConcertMusicPlaying UAudioComponent
---@field ['Player Inside Concert Range'] boolean
local ABP_ConcertBuilding_C = {}

---@param Return_Value boolean
ABP_ConcertBuilding_C['Can Pop Sound Mix Modifier'] = function(self, Return_Value) end
---@param InputPin AAICharacterBase
function ABP_ConcertBuilding_C:TryToAddLeaveConcertTask(InputPin) end
---@param self2 ARVCampSpot
function ABP_ConcertBuilding_C:SpawnRandomNumberOfCustomers(self2) end
---@param NPCHome AActor
---@param ServiceTag FGameplayTag
---@param bValue boolean
function ABP_ConcertBuilding_C:DoesCustomerWantService(NPCHome, ServiceTag, bValue) end
---@param Loaded UObject
function ABP_ConcertBuilding_C:OnLoaded_B226DD524D3D450FF841FBABA04999DB(Loaded) end
function ABP_ConcertBuilding_C:ReceiveBeginPlay() end
function ABP_ConcertBuilding_C:StartConcert() end
function ABP_ConcertBuilding_C:LoadConcert() end
function ABP_ConcertBuilding_C:StopConcert() end
function ABP_ConcertBuilding_C:PlayConcertMusic() end
function ABP_ConcertBuilding_C:StopConcertMusic() end
---@param bAppliedSetting boolean
ABP_ConcertBuilding_C['On Gameplay Settings Applied'] = function(self, bAppliedSetting) end
ABP_ConcertBuilding_C['Handle Streamer Mode'] = function(self, ) end
---@param OverlappedComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
---@param bFromSweep boolean
---@param SweepResult FHitResult
ABP_ConcertBuilding_C['BndEvt__BP_ConcertBuilding_Music Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature'] = function(self, OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult) end
---@param OverlappedComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
ABP_ConcertBuilding_C['BndEvt__BP_ConcertBuilding_Music Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature'] = function(self, OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex) end
ABP_ConcertBuilding_C['On Player Left Concert Range'] = function(self, ) end
ABP_ConcertBuilding_C['On Player Entered Concert Range'] = function(self, ) end
ABP_ConcertBuilding_C['Update Player Entered Left Concert Range'] = function(self, ) end
---@param EntryPoint int32
function ABP_ConcertBuilding_C:ExecuteUbergraph_BP_ConcertBuilding(EntryPoint) end


