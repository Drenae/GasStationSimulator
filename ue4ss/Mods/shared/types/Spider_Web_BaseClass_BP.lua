---@meta

---@class ASpider_Web_BaseClass_BP_C : ASpiderWebBase
---@field UberGraphFrame FPointerToUberGraphFrame
---@field DefaultSceneRoot1 USceneComponent
---@field SM_Exo_CobWeb04 UStaticMeshComponent
---@field Box UBoxComponent
---@field SelectedType ESpiderPositionType
---@field WallStaticMeshes TArray<TSoftObjectPtr<UStaticMesh>>
---@field StandingStaticMeshes TArray<TSoftObjectPtr<UStaticMesh>>
---@field PlacesRequiredTOSpawn TArray<FRequiredLevel>
local ASpider_Web_BaseClass_BP_C = {}

---@param NewParam UStaticMesh
function ASpider_Web_BaseClass_BP_C:SetRandomStaticMesh(NewParam) end
---@param OverlappedComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
---@param bFromSweep boolean
---@param SweepResult FHitResult
function ASpider_Web_BaseClass_BP_C:BndEvt__Spider_Web_BaseClass_BP_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult) end
---@param OverlappedComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
function ASpider_Web_BaseClass_BP_C:BndEvt__Spider_Web_BaseClass_BP_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex) end
function ASpider_Web_BaseClass_BP_C:OnDestroy() end
---@param EntryPoint int32
function ASpider_Web_BaseClass_BP_C:ExecuteUbergraph_Spider_Web_BaseClass_BP(EntryPoint) end


