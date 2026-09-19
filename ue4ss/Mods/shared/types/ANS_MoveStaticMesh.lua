---@meta

---@class UANS_MoveStaticMesh_C : UAnimNotifyState
---@field ['Socket Name'] FName
---@field bRestoreInitialTransform boolean
---@field bAttach boolean
---@field ['Location Rule'] EAttachmentRule
---@field ['Rotation Rule'] EAttachmentRule
---@field ['Scale Rule'] EAttachmentRule
---@field bDetach boolean
---@field bCacheTransform boolean
local UANS_MoveStaticMesh_C = {}

---@param NewParam UAnimInstance
---@param PickedComponent UActorComponent
---@param PickedComponentsArray TArray<UActorComponent>
---@param MeshInitialTransform FTransform
function UANS_MoveStaticMesh_C:HandleDetaching(NewParam, PickedComponent, PickedComponentsArray, MeshInitialTransform) end
---@param NewParam UAnimInstance
---@param PickedComponent UActorComponent
---@param PickedComponentsArray TArray<UActorComponent>
---@param MeshInitialTransform FTransform
function UANS_MoveStaticMesh_C:HandleAttaching(NewParam, PickedComponent, PickedComponentsArray, MeshInitialTransform) end
---@param MeshComp USkeletalMeshComponent
---@param Animation UAnimSequenceBase
---@return boolean
function UANS_MoveStaticMesh_C:Received_NotifyEnd(MeshComp, Animation) end
---@param MeshComp USkeletalMeshComponent
---@param Animation UAnimSequenceBase
---@param TotalDuration float
---@return boolean
function UANS_MoveStaticMesh_C:Received_NotifyBegin(MeshComp, Animation, TotalDuration) end


