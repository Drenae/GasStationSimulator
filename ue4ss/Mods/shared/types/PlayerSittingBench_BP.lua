---@meta

---@class APlayerSittingBench_BP_C : ABP_AirstripInteraction_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field arrow UArrowComponent
---@field StaticMesh UStaticMeshComponent
---@field bOverlap boolean
---@field IntroSequence TSoftObjectPtr<ALevelSequenceActor>
---@field PlayerInitLocation FVector
---@field ['Base Body Mesh'] UPostapoSkeletalMeshComponent
local APlayerSittingBench_BP_C = {}

---@return FName
function APlayerSittingBench_BP_C:GetInteractionName() end
---@param Visible boolean
function APlayerSittingBench_BP_C:SetPlayerMeshes(Visible) end
function APlayerSittingBench_BP_C:ReceiveBeginPlay() end
function APlayerSittingBench_BP_C:InvokeInteraction() end
---@param EntryPoint int32
function APlayerSittingBench_BP_C:ExecuteUbergraph_PlayerSittingBench_BP(EntryPoint) end


