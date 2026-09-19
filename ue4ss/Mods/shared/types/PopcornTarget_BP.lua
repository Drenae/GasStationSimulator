---@meta

---@class APopcornTarget_BP_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Box UBoxComponent
---@field StaticMesh UStaticMeshComponent
---@field DefaultSceneRoot USceneComponent
---@field AttachedNpc AAICharacterBase
local APopcornTarget_BP_C = {}

function APopcornTarget_BP_C:TryHideTarget() end
---@param OutNpc AAICharacterBase
---@return boolean
function APopcornTarget_BP_C:CanAttachedNpcEatPopcorn(OutNpc) end
function APopcornTarget_BP_C:TryShowTarget() end
---@param OverlappedComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
---@param bFromSweep boolean
---@param SweepResult FHitResult
function APopcornTarget_BP_C:BndEvt__PopcornTarget_BP_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult) end
---@param AI AAICharacterBase
function APopcornTarget_BP_C:OnTargetHitByAi(AI) end
---@param AICharacterBase AAICharacterBase
function APopcornTarget_BP_C:OnCooldownEnd(AICharacterBase) end
function APopcornTarget_BP_C:OnStart() end
function APopcornTarget_BP_C:OnEnd() end
function APopcornTarget_BP_C:ReceiveDestroyed() end
---@param NPC AAICharacterBase
function APopcornTarget_BP_C:BeginPlayWithNpc(NPC) end
---@param EntryPoint int32
function APopcornTarget_BP_C:ExecuteUbergraph_PopcornTarget_BP(EntryPoint) end


