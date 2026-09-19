---@meta

---@class AAlligator_BP_C : ASkeletalMeshActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ChristmasHat UStaticMeshComponent
---@field AlligatorSoundMaker UAudioComponent
---@field TrashMealCheck UBoxComponent
---@field ChristmasHatToLoad TSoftObjectPtr<UStaticMesh>
---@field isChristmasHatSet boolean
local AAlligator_BP_C = {}

---@param NotifyName FName
function AAlligator_BP_C:OnNotifyEnd_FC9C90DA4F3B5AFA0FA1309268648D21(NotifyName) end
---@param NotifyName FName
function AAlligator_BP_C:OnNotifyBegin_FC9C90DA4F3B5AFA0FA1309268648D21(NotifyName) end
---@param NotifyName FName
function AAlligator_BP_C:OnInterrupted_FC9C90DA4F3B5AFA0FA1309268648D21(NotifyName) end
---@param NotifyName FName
function AAlligator_BP_C:OnBlendOut_FC9C90DA4F3B5AFA0FA1309268648D21(NotifyName) end
---@param NotifyName FName
function AAlligator_BP_C:OnCompleted_FC9C90DA4F3B5AFA0FA1309268648D21(NotifyName) end
---@param NotifyName FName
function AAlligator_BP_C:OnNotifyEnd_B8BBEB0F4CBB861A6D725B9780A3DD79(NotifyName) end
---@param NotifyName FName
function AAlligator_BP_C:OnNotifyBegin_B8BBEB0F4CBB861A6D725B9780A3DD79(NotifyName) end
---@param NotifyName FName
function AAlligator_BP_C:OnInterrupted_B8BBEB0F4CBB861A6D725B9780A3DD79(NotifyName) end
---@param NotifyName FName
function AAlligator_BP_C:OnBlendOut_B8BBEB0F4CBB861A6D725B9780A3DD79(NotifyName) end
---@param NotifyName FName
function AAlligator_BP_C:OnCompleted_B8BBEB0F4CBB861A6D725B9780A3DD79(NotifyName) end
function AAlligator_BP_C:ReceiveBeginPlay() end
---@param OverlappedComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
---@param bFromSweep boolean
---@param SweepResult FHitResult
function AAlligator_BP_C:TrashEater(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult) end
---@param bAppliedSetting boolean
function AAlligator_BP_C:OnGameplaySettingsApplied(bAppliedSetting) end
---@param EntryPoint int32
function AAlligator_BP_C:ExecuteUbergraph_Alligator_BP(EntryPoint) end


