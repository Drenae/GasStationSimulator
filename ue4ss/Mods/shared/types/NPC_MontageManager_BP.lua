---@meta

---@class UNPC_MontageManager_BP_C : UNPC_MontageManager
---@field UberGraphFrame FPointerToUberGraphFrame
---@field DirectionToRotate ERotationDirection::Type
---@field ['Warp Target'] USceneComponent
---@field ['Montages Skeletons'] TArray<FBaseCharacterSkeletonMontage>
---@field ['MontageTag to Check'] FGameplayTag
---@field PositioningTagToCheck FGameplayTag
---@field PositioningMontages TArray<FBaseCharacterSkeletonMontage>
---@field SittingHitReacts TArray<FBaseCharacterSkeletonMontage>
---@field ['Actor to Spawn'] TSubclassOf<AActor>
---@field ['Part to Activate'] FGameplayTag
---@field RVLeavingMontages TArray<FBaseCharacterSkeletonMontage>
---@field ['Minigames Montages'] TArray<FBaseCharacterSkeletonMontage>
---@field ['Minigames Extra Objects Montages'] TArray<FBaseCharacterSkeletonMontage>
---@field CurrentGuestServiceSpot ARvGuestServiceSpot
---@field SpawnedActorInHandRef AActor
---@field CurrentGuestServiceTag FGameplayTag
---@field bIsInMinigame boolean
local UNPC_MontageManager_BP_C = {}

---@param Tag FGameplayTag
---@param Current_Hands_Layer_Pose TSoftObjectPtr<UAnimSequence>
function UNPC_MontageManager_BP_C:FindPoseToLoad(Tag, Current_Hands_Layer_Pose) end
function UNPC_MontageManager_BP_C:HandleSittingDirection() end
---@param bSameFacing boolean
function UNPC_MontageManager_BP_C:CheckFacingForSitting(bSameFacing) end
---@param AsCharacter ACharacter
function UNPC_MontageManager_BP_C:GetOwnerCharacter(AsCharacter) end
---@param WarpTarget USceneComponent
function UNPC_MontageManager_BP_C:HandlePositioning(WarpTarget) end
---@param AsHuman_Anim_Instance UHumanAnimInstance
---@param AsHuman_Shared_Anim_Instance UHumanSharedAnimInstance
function UNPC_MontageManager_BP_C:GetAnimInstance(AsHuman_Anim_Instance, AsHuman_Shared_Anim_Instance) end
---@param Current_Positioning_Step UAnimMontage
function UNPC_MontageManager_BP_C:ChoosePositiongMontage(Current_Positioning_Step) end
---@param NotifyName FName
function UNPC_MontageManager_BP_C:OnNotifyEnd_FFEE344F4CDBB05C58EDD89038306F27(NotifyName) end
---@param NotifyName FName
function UNPC_MontageManager_BP_C:OnNotifyBegin_FFEE344F4CDBB05C58EDD89038306F27(NotifyName) end
---@param NotifyName FName
function UNPC_MontageManager_BP_C:OnInterrupted_FFEE344F4CDBB05C58EDD89038306F27(NotifyName) end
---@param NotifyName FName
function UNPC_MontageManager_BP_C:OnBlendOut_FFEE344F4CDBB05C58EDD89038306F27(NotifyName) end
---@param NotifyName FName
function UNPC_MontageManager_BP_C:OnCompleted_FFEE344F4CDBB05C58EDD89038306F27(NotifyName) end
---@param NotifyName FName
function UNPC_MontageManager_BP_C:OnNotifyEnd_7D872FC0441D990C0F723280E0A0B21B(NotifyName) end
---@param NotifyName FName
function UNPC_MontageManager_BP_C:OnNotifyBegin_7D872FC0441D990C0F723280E0A0B21B(NotifyName) end
---@param NotifyName FName
function UNPC_MontageManager_BP_C:OnInterrupted_7D872FC0441D990C0F723280E0A0B21B(NotifyName) end
---@param NotifyName FName
function UNPC_MontageManager_BP_C:OnBlendOut_7D872FC0441D990C0F723280E0A0B21B(NotifyName) end
---@param NotifyName FName
function UNPC_MontageManager_BP_C:OnCompleted_7D872FC0441D990C0F723280E0A0B21B(NotifyName) end
---@param NotifyName FName
function UNPC_MontageManager_BP_C:OnNotifyEnd_FCDD81964763E244B2DAF3B32920CAFA(NotifyName) end
---@param NotifyName FName
function UNPC_MontageManager_BP_C:OnNotifyBegin_FCDD81964763E244B2DAF3B32920CAFA(NotifyName) end
---@param NotifyName FName
function UNPC_MontageManager_BP_C:OnInterrupted_FCDD81964763E244B2DAF3B32920CAFA(NotifyName) end
---@param NotifyName FName
function UNPC_MontageManager_BP_C:OnBlendOut_FCDD81964763E244B2DAF3B32920CAFA(NotifyName) end
---@param NotifyName FName
function UNPC_MontageManager_BP_C:OnCompleted_FCDD81964763E244B2DAF3B32920CAFA(NotifyName) end
---@param NotifyName FName
function UNPC_MontageManager_BP_C:OnNotifyEnd_39C203D346575BEA23B5549A62B9B1B4(NotifyName) end
---@param NotifyName FName
function UNPC_MontageManager_BP_C:OnNotifyBegin_39C203D346575BEA23B5549A62B9B1B4(NotifyName) end
---@param NotifyName FName
function UNPC_MontageManager_BP_C:OnInterrupted_39C203D346575BEA23B5549A62B9B1B4(NotifyName) end
---@param NotifyName FName
function UNPC_MontageManager_BP_C:OnBlendOut_39C203D346575BEA23B5549A62B9B1B4(NotifyName) end
---@param NotifyName FName
function UNPC_MontageManager_BP_C:OnCompleted_39C203D346575BEA23B5549A62B9B1B4(NotifyName) end
---@param NotifyName FName
function UNPC_MontageManager_BP_C:OnNotifyEnd_267C8E1D47A39282F017A39B7CCA2E65(NotifyName) end
---@param NotifyName FName
function UNPC_MontageManager_BP_C:OnNotifyBegin_267C8E1D47A39282F017A39B7CCA2E65(NotifyName) end
---@param NotifyName FName
function UNPC_MontageManager_BP_C:OnInterrupted_267C8E1D47A39282F017A39B7CCA2E65(NotifyName) end
---@param NotifyName FName
function UNPC_MontageManager_BP_C:OnBlendOut_267C8E1D47A39282F017A39B7CCA2E65(NotifyName) end
---@param NotifyName FName
function UNPC_MontageManager_BP_C:OnCompleted_267C8E1D47A39282F017A39B7CCA2E65(NotifyName) end
---@param NotifyName FName
function UNPC_MontageManager_BP_C:OnNotifyEnd_5F7B398E4DE3C3F4739D0C84726EBC86(NotifyName) end
---@param NotifyName FName
function UNPC_MontageManager_BP_C:OnNotifyBegin_5F7B398E4DE3C3F4739D0C84726EBC86(NotifyName) end
---@param NotifyName FName
function UNPC_MontageManager_BP_C:OnInterrupted_5F7B398E4DE3C3F4739D0C84726EBC86(NotifyName) end
---@param NotifyName FName
function UNPC_MontageManager_BP_C:OnBlendOut_5F7B398E4DE3C3F4739D0C84726EBC86(NotifyName) end
---@param NotifyName FName
function UNPC_MontageManager_BP_C:OnCompleted_5F7B398E4DE3C3F4739D0C84726EBC86(NotifyName) end
---@param NotifyName FName
function UNPC_MontageManager_BP_C:OnNotifyEnd_E01AEFFF4AE4974F36C483AF29642D41(NotifyName) end
---@param NotifyName FName
function UNPC_MontageManager_BP_C:OnNotifyBegin_E01AEFFF4AE4974F36C483AF29642D41(NotifyName) end
---@param NotifyName FName
function UNPC_MontageManager_BP_C:OnInterrupted_E01AEFFF4AE4974F36C483AF29642D41(NotifyName) end
---@param NotifyName FName
function UNPC_MontageManager_BP_C:OnBlendOut_E01AEFFF4AE4974F36C483AF29642D41(NotifyName) end
---@param NotifyName FName
function UNPC_MontageManager_BP_C:OnCompleted_E01AEFFF4AE4974F36C483AF29642D41(NotifyName) end
---@param NotifyName FName
function UNPC_MontageManager_BP_C:OnNotifyEnd_2E51617B43BCB7D7887A49B47980E171(NotifyName) end
---@param NotifyName FName
function UNPC_MontageManager_BP_C:OnNotifyBegin_2E51617B43BCB7D7887A49B47980E171(NotifyName) end
---@param NotifyName FName
function UNPC_MontageManager_BP_C:OnInterrupted_2E51617B43BCB7D7887A49B47980E171(NotifyName) end
---@param NotifyName FName
function UNPC_MontageManager_BP_C:OnBlendOut_2E51617B43BCB7D7887A49B47980E171(NotifyName) end
---@param NotifyName FName
function UNPC_MontageManager_BP_C:OnCompleted_2E51617B43BCB7D7887A49B47980E171(NotifyName) end
---@param Loaded UObject
function UNPC_MontageManager_BP_C:OnLoaded_B94379784236DF94DAACC38E2F260E9E(Loaded) end
---@param NotifyName FName
function UNPC_MontageManager_BP_C:OnNotifyEnd_BD08DC5A4D9B883B6EE5778D23466221(NotifyName) end
---@param NotifyName FName
function UNPC_MontageManager_BP_C:OnNotifyBegin_BD08DC5A4D9B883B6EE5778D23466221(NotifyName) end
---@param NotifyName FName
function UNPC_MontageManager_BP_C:OnInterrupted_BD08DC5A4D9B883B6EE5778D23466221(NotifyName) end
---@param NotifyName FName
function UNPC_MontageManager_BP_C:OnBlendOut_BD08DC5A4D9B883B6EE5778D23466221(NotifyName) end
---@param NotifyName FName
function UNPC_MontageManager_BP_C:OnCompleted_BD08DC5A4D9B883B6EE5778D23466221(NotifyName) end
---@param NotifyName FName
function UNPC_MontageManager_BP_C:OnNotifyEnd_2EF0553049229A2AD95FEA85D55A36A8(NotifyName) end
---@param NotifyName FName
function UNPC_MontageManager_BP_C:OnNotifyBegin_2EF0553049229A2AD95FEA85D55A36A8(NotifyName) end
---@param NotifyName FName
function UNPC_MontageManager_BP_C:OnInterrupted_2EF0553049229A2AD95FEA85D55A36A8(NotifyName) end
---@param NotifyName FName
function UNPC_MontageManager_BP_C:OnBlendOut_2EF0553049229A2AD95FEA85D55A36A8(NotifyName) end
---@param NotifyName FName
function UNPC_MontageManager_BP_C:OnCompleted_2EF0553049229A2AD95FEA85D55A36A8(NotifyName) end
---@param MovementResult EPathFollowingResult::Type
function UNPC_MontageManager_BP_C:OnFail_5E90E8B94F052E5AE7F91F829262F0AC(MovementResult) end
---@param MovementResult EPathFollowingResult::Type
function UNPC_MontageManager_BP_C:OnSuccess_5E90E8B94F052E5AE7F91F829262F0AC(MovementResult) end
---@param MovementResult EPathFollowingResult::Type
function UNPC_MontageManager_BP_C:OnFail_95D3A3524AB0B4610B7948B6F0219570(MovementResult) end
---@param MovementResult EPathFollowingResult::Type
function UNPC_MontageManager_BP_C:OnSuccess_95D3A3524AB0B4610B7948B6F0219570(MovementResult) end
---@param NotifyName FName
function UNPC_MontageManager_BP_C:OnNotifyEnd_EF1E4D604AA0CE35CBA55A82B81865ED(NotifyName) end
---@param NotifyName FName
function UNPC_MontageManager_BP_C:OnNotifyBegin_EF1E4D604AA0CE35CBA55A82B81865ED(NotifyName) end
---@param NotifyName FName
function UNPC_MontageManager_BP_C:OnInterrupted_EF1E4D604AA0CE35CBA55A82B81865ED(NotifyName) end
---@param NotifyName FName
function UNPC_MontageManager_BP_C:OnBlendOut_EF1E4D604AA0CE35CBA55A82B81865ED(NotifyName) end
---@param NotifyName FName
function UNPC_MontageManager_BP_C:OnCompleted_EF1E4D604AA0CE35CBA55A82B81865ED(NotifyName) end
function UNPC_MontageManager_BP_C:ReceiveBeginPlay() end
---@param WarpTarget USceneComponent
---@param MontageToPlayAfterPositioning UAnimMontage
---@param ExtraObject AActor
---@param ExtraObjectMontage UAnimMontage
---@param ObjectToAttach UPrimitiveComponent
---@param bShouldResetDefaultCharState boolean
---@param PlayRate float
---@param StartingSection FName
---@param bShouldPlayExtraObjectMontage boolean
---@param bShouldAttachObject boolean
---@param ExtraObjectSkelMeshComp USkeletalMeshComponent
function UNPC_MontageManager_BP_C:PlayPositioningStepMontage(WarpTarget, MontageToPlayAfterPositioning, ExtraObject, ExtraObjectMontage, ObjectToAttach, bShouldResetDefaultCharState, PlayRate, StartingSection, bShouldPlayExtraObjectMontage, bShouldAttachObject, ExtraObjectSkelMeshComp) end
---@param SittingWarpTarget USceneComponent
---@param PlayRate float
---@param StartingSection FName
function UNPC_MontageManager_BP_C:PlaySittingMontage(SittingWarpTarget, PlayRate, StartingSection) end
function UNPC_MontageManager_BP_C:PlaySittingEnd() end
---@param MontageToPlay UAnimMontage
---@param bShouldResetDefaultCharState boolean
---@param PlayRate float
---@param ExtraObjectMontageToPlay UAnimMontage
function UNPC_MontageManager_BP_C:PlayEndMontage(MontageToPlay, bShouldResetDefaultCharState, PlayRate, ExtraObjectMontageToPlay) end
---@param ObjectToAttach UActorComponent
---@param SocketName FName
function UNPC_MontageManager_BP_C:AttachObjectToHand(ObjectToAttach, SocketName) end
function UNPC_MontageManager_BP_C:DetachObjectFromHand() end
function UNPC_MontageManager_BP_C:FinishPositioningIfActive() end
---@param PlayRate float
function UNPC_MontageManager_BP_C:SittingHitReact(PlayRate) end
---@param ActorToSpawn TSubclassOf<AActor>
---@param SocketName FName
---@param SocketTransform FTransform
function UNPC_MontageManager_BP_C:SpawnActorInHands(ActorToSpawn, SocketName, SocketTransform) end
function UNPC_MontageManager_BP_C:DespawnSpawnedActosInHands() end
---@param CarryingPose FGameplayTag
function UNPC_MontageManager_BP_C:ActivateHandLayer(CarryingPose) end
function UNPC_MontageManager_BP_C:DeactivateHandsLayer() end
---@param CurrentRV AActor
---@param PlayRate float
function UNPC_MontageManager_BP_C:PlayRVSpawningAnimation(CurrentRV, PlayRate) end
---@param ServiceTag FGameplayTag
---@param GuestServiceSpot ARvGuestServiceSpot
---@param Customer AAICharacterBase
---@param Employee ARVCampEmployee
function UNPC_MontageManager_BP_C:OnStartedRvGuestService_Event(ServiceTag, GuestServiceSpot, Customer, Employee) end
---@param ServiceTag FGameplayTag
---@param GuestServiceSpot ARvGuestServiceSpot
---@param Customer AAICharacterBase
---@param Employee ARVCampEmployee
function UNPC_MontageManager_BP_C:OnEndedRvGuestService_Event(ServiceTag, GuestServiceSpot, Customer, Employee) end
---@param ServiceTag FGameplayTag
---@param GuestServiceSpot ARvGuestServiceSpot
---@param Customer AAICharacterBase
---@param Employee ARVCampEmployee
function UNPC_MontageManager_BP_C:OnServiceStarted_Automated(ServiceTag, GuestServiceSpot, Customer, Employee) end
---@param ServiceTag FGameplayTag
---@param GuestServiceSpot ARvGuestServiceSpot
---@param Customer AAICharacterBase
---@param Employee ARVCampEmployee
function UNPC_MontageManager_BP_C:OnServiceEnded_Automated(ServiceTag, GuestServiceSpot, Customer, Employee) end
---@param ServiceTag FGameplayTag
---@param GuestServiceSpot ARvGuestServiceSpot
---@param Customer AAICharacterBase
function UNPC_MontageManager_BP_C:OnServiceStarted(ServiceTag, GuestServiceSpot, Customer) end
---@param ServiceTag FGameplayTag
---@param GuestServiceSpot ARvGuestServiceSpot
---@param Customer AAICharacterBase
function UNPC_MontageManager_BP_C:OnServiceEnded(ServiceTag, GuestServiceSpot, Customer) end
function UNPC_MontageManager_BP_C:OnServiceEnded_Automated_BlendOut() end
---@param ActorToSpawn TSubclassOf<AActor>
---@param SocketName FName
function UNPC_MontageManager_BP_C:GuestServiceSpawnActorInHand(ActorToSpawn, SocketName) end
---@param EndPlayReason EEndPlayReason::Type
function UNPC_MontageManager_BP_C:ReceiveEndPlay(EndPlayReason) end
---@param ServiceTag FGameplayTag
---@param GuestServiceSpot ARvGuestServiceSpot
---@param Customer UObject
function UNPC_MontageManager_BP_C:OnServiceStarted_Sauna(ServiceTag, GuestServiceSpot, Customer) end
---@param ServiceTag FGameplayTag
---@param GuestServiceSpot ARvGuestServiceSpot
---@param Customer UObject
function UNPC_MontageManager_BP_C:OnServiceEnded_Sauna(ServiceTag, GuestServiceSpot, Customer) end
function UNPC_MontageManager_BP_C:PlayRVMinigameMainSKMAnimation() end
---@param EntryPoint int32
function UNPC_MontageManager_BP_C:ExecuteUbergraph_NPC_MontageManager_BP(EntryPoint) end


