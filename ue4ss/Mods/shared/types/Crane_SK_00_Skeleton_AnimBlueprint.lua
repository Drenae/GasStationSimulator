---@meta

---@class UCrane_SK_00_Skeleton_AnimBlueprint_C : UCraneAnimInstance
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AnimGraphNode_Root FAnimNode_Root
---@field AnimGraphNode_ModifyBone_5 FAnimNode_ModifyBone
---@field AnimGraphNode_ModifyBone_4 FAnimNode_ModifyBone
---@field AnimGraphNode_ModifyBone_3 FAnimNode_ModifyBone
---@field AnimGraphNode_LayeredBoneBlend_2 FAnimNode_LayeredBoneBlend
---@field AnimGraphNode_BlendSpacePlayer_2 FAnimNode_BlendSpacePlayer
---@field AnimGraphNode_ComponentToLocalSpace_2 FAnimNode_ConvertComponentToLocalSpace
---@field AnimGraphNode_LocalToComponentSpace_2 FAnimNode_ConvertLocalToComponentSpace
---@field AnimGraphNode_BlendSpacePlayer_1 FAnimNode_BlendSpacePlayer
---@field AnimGraphNode_LayeredBoneBlend_1 FAnimNode_LayeredBoneBlend
---@field AnimGraphNode_CopyBone FAnimNode_CopyBone
---@field AnimGraphNode_Slot FAnimNode_Slot
---@field AnimGraphNode_ComponentToLocalSpace_1 FAnimNode_ConvertComponentToLocalSpace
---@field AnimGraphNode_LayeredBoneBlend FAnimNode_LayeredBoneBlend
---@field AnimGraphNode_BlendSpacePlayer FAnimNode_BlendSpacePlayer
---@field AnimGraphNode_LocalToComponentSpace_1 FAnimNode_ConvertLocalToComponentSpace
---@field AnimGraphNode_ModifyBone_2 FAnimNode_ModifyBone
---@field AnimGraphNode_ModifyBone_1 FAnimNode_ModifyBone
---@field AnimGraphNode_ComponentToLocalSpace FAnimNode_ConvertComponentToLocalSpace
---@field AnimGraphNode_ModifyBone FAnimNode_ModifyBone
---@field AnimGraphNode_LookAt FAnimNode_LookAt
---@field AnimGraphNode_LocalToComponentSpace FAnimNode_ConvertLocalToComponentSpace
---@field Time float
---@field bRopeTimer boolean
---@field RopeTimerActive boolean
---@field PistonAlpha float
---@field ['Delta Time X'] float
---@field bPistonUp boolean
---@field TargetRopeRotation FRotator
---@field TargetMagnetRotation FRotator
---@field CranePlatformRotation FRotator
---@field MagnetTransform FVector
---@field GearRotation FRotator
---@field ActorsToIgnore TArray<AActor>
---@field CurrentRopeRotation FRotator
---@field CurrentMagnetRotation FRotator
---@field RopeRotationSpeed float
---@field MagnetRotationSpeed float
---@field TargetMagnetPosition float
local UCrane_SK_00_Skeleton_AnimBlueprint_C = {}

---@param AnimGraph FPoseLink
function UCrane_SK_00_Skeleton_AnimBlueprint_C:AnimGraph(AnimGraph) end
function UCrane_SK_00_Skeleton_AnimBlueprint_C:SmoothPhysicsRotation() end
function UCrane_SK_00_Skeleton_AnimBlueprint_C:CopyPhysicsRotation() end
UCrane_SK_00_Skeleton_AnimBlueprint_C['Handle Magnet Rotation'] = function(self, ) end
---@param DeltaT float
---@param BTimerEnd boolean
function UCrane_SK_00_Skeleton_AnimBlueprint_C:RopeSwithTimer(DeltaT, BTimerEnd) end
---@param DeltaT float
UCrane_SK_00_Skeleton_AnimBlueprint_C['Handle Rope'] = function(self, DeltaT) end
---@param MagnetSpeedRatio float
function UCrane_SK_00_Skeleton_AnimBlueprint_C:HandleMagnetZ(MagnetSpeedRatio) end
---@param PitchRate float
---@param bActive boolean
function UCrane_SK_00_Skeleton_AnimBlueprint_C:HandleArmPitch(PitchRate, bActive) end
---@param ExtendRatio float
---@param bActive boolean
function UCrane_SK_00_Skeleton_AnimBlueprint_C:HandleArmExtenstion(ExtendRatio, bActive) end
---@param TurnValue float
---@param bActive boolean
function UCrane_SK_00_Skeleton_AnimBlueprint_C:HandleYawTurning(TurnValue, bActive) end
---@param DeltaTimeX float
function UCrane_SK_00_Skeleton_AnimBlueprint_C:BlueprintUpdateAnimation(DeltaTimeX) end
function UCrane_SK_00_Skeleton_AnimBlueprint_C:BlueprintBeginPlay() end
---@param EntryPoint int32
function UCrane_SK_00_Skeleton_AnimBlueprint_C:ExecuteUbergraph_Crane_SK_00_Skeleton_AnimBlueprint(EntryPoint) end


