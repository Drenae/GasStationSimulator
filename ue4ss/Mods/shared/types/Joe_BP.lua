---@meta

---@class AJoe_BP_C : AJoeCharacter
---@field UberGraphFrame FPointerToUberGraphFrame
---@field JoePilot_hat_SM UStaticMeshComponent
---@field ['Goal Actor'] AActor
local AJoe_BP_C = {}

---@return boolean
function AJoe_BP_C:IsTapingQuestActive() end
---@param NotifyName FName
function AJoe_BP_C:OnNotifyEnd_5E39011A444D76C084CD8983D260E2F4(NotifyName) end
---@param NotifyName FName
function AJoe_BP_C:OnNotifyBegin_5E39011A444D76C084CD8983D260E2F4(NotifyName) end
---@param NotifyName FName
function AJoe_BP_C:OnInterrupted_5E39011A444D76C084CD8983D260E2F4(NotifyName) end
---@param NotifyName FName
function AJoe_BP_C:OnBlendOut_5E39011A444D76C084CD8983D260E2F4(NotifyName) end
---@param NotifyName FName
function AJoe_BP_C:OnCompleted_5E39011A444D76C084CD8983D260E2F4(NotifyName) end
function AJoe_BP_C:ReceiveBeginPlay() end
---@param GameLoaded boolean
function AJoe_BP_C:OnGameFinishLoaded(GameLoaded) end
function AJoe_BP_C:DestroyJoe() end
function AJoe_BP_C:SetJoePosition_Plane() end
function AJoe_BP_C:SetJoePosition_PlaneNoRange() end
function AJoe_BP_C:SetJoePosition_Bench() end
function AJoe_BP_C:ForceToMountPlane() end
---@param EntryPoint int32
function AJoe_BP_C:ExecuteUbergraph_Joe_BP(EntryPoint) end


