---@meta

---@class ABP_RVCampRuby_C : ARubyCharacter
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SM_Megaphone UStaticMeshComponent
---@field RubyShotGunOnTable USkeletalMeshComponent
---@field Sk_RubyShotgun_02 USkeletalMeshComponent
---@field Body USkeletalMeshComponent
---@field RubyChair TSoftObjectPtr<AActor>
---@field NewVar_0 TSoftObjectPtr<UPrimaryDataAsset>
---@field ['Q018_Quest Finished'] TSoftObjectPtr<UQuestBase>
---@field ['Q019_Quest Finished'] TSoftObjectPtr<UQuestBase>
local ABP_RVCampRuby_C = {}

---@return FName
function ABP_RVCampRuby_C:GetInteractionName() end
function ABP_RVCampRuby_C:PositionRubyTochair() end
---@param bShotGunInHands boolean
function ABP_RVCampRuby_C:HandleShotGunsVisibilities(bShotGunInHands) end
function ABP_RVCampRuby_C:UserConstructionScript() end
---@param NotifyName FName
function ABP_RVCampRuby_C:OnNotifyEnd_C5EAC32A49803235B843009527E2BE8A(NotifyName) end
---@param NotifyName FName
function ABP_RVCampRuby_C:OnNotifyBegin_C5EAC32A49803235B843009527E2BE8A(NotifyName) end
---@param NotifyName FName
function ABP_RVCampRuby_C:OnInterrupted_C5EAC32A49803235B843009527E2BE8A(NotifyName) end
---@param NotifyName FName
function ABP_RVCampRuby_C:OnBlendOut_C5EAC32A49803235B843009527E2BE8A(NotifyName) end
---@param NotifyName FName
function ABP_RVCampRuby_C:OnCompleted_C5EAC32A49803235B843009527E2BE8A(NotifyName) end
function ABP_RVCampRuby_C:ReceiveBeginPlay() end
---@param EndPlayReason EEndPlayReason::Type
function ABP_RVCampRuby_C:ReceiveEndPlay(EndPlayReason) end
function ABP_RVCampRuby_C:PlayShotGunMontage() end
---@param bShotGunInHand boolean
function ABP_RVCampRuby_C:SwitchRubyShotGunState(bShotGunInHand) end
---@param QuestFinished UQuestBase
function ABP_RVCampRuby_C:OnQuestFinished_Event_0(QuestFinished) end
---@param EntryPoint int32
function ABP_RVCampRuby_C:ExecuteUbergraph_BP_RVCampRuby(EntryPoint) end


