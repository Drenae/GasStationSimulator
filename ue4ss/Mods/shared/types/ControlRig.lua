---@meta

---@class AControlRigControlActor : AActor
---@field ActorToTrack AActor
---@field ControlRigClass TSubclassOf<UControlRig>
---@field bRefreshOnTick boolean
---@field bIsSelectable boolean
---@field MaterialOverride UMaterialInterface
---@field ColorParameter FString
---@field bCastShadows boolean
---@field ActorRootComponent USceneComponent
---@field ControlRig UControlRig
---@field ControlNames TArray<FName>
---@field GizmoTransforms TArray<FTransform>
---@field Components TArray<UStaticMeshComponent>
---@field Materials TArray<UMaterialInstanceDynamic>
---@field ColorParameterName FName
local AControlRigControlActor = {}

function AControlRigControlActor:Refresh() end
function AControlRigControlActor:Clear() end


---@class AControlRigGizmoActor : AActor
---@field ActorRootComponent USceneComponent
---@field StaticMeshComponent UStaticMeshComponent
---@field ControlRigIndex uint32
---@field ControlName FName
---@field ColorParameterName FName
---@field bEnabled boolean
---@field bSelected boolean
---@field bSelectable boolean
---@field bHovered boolean
local AControlRigGizmoActor = {}

---@param bInSelected boolean
function AControlRigGizmoActor:SetSelected(bInSelected) end
---@param bInSelectable boolean
function AControlRigGizmoActor:SetSelectable(bInSelectable) end
---@param bInHovered boolean
function AControlRigGizmoActor:SetHovered(bInHovered) end
---@param InTransform FTransform
function AControlRigGizmoActor:SetGlobalTransform(InTransform) end
---@param bInEnabled boolean
function AControlRigGizmoActor:SetEnabled(bInEnabled) end
---@param NewTransform FTransform
function AControlRigGizmoActor:OnTransformChanged(NewTransform) end
---@param bIsSelected boolean
function AControlRigGizmoActor:OnSelectionChanged(bIsSelected) end
---@param bIsManipulating boolean
function AControlRigGizmoActor:OnManipulatingChanged(bIsManipulating) end
---@param bIsSelected boolean
function AControlRigGizmoActor:OnHoveredChanged(bIsSelected) end
---@param bIsEnabled boolean
function AControlRigGizmoActor:OnEnabledChanged(bIsEnabled) end
---@return boolean
function AControlRigGizmoActor:IsSelectedInEditor() end
---@return boolean
function AControlRigGizmoActor:IsHovered() end
---@return boolean
function AControlRigGizmoActor:IsEnabled() end
---@return FTransform
function AControlRigGizmoActor:GetGlobalTransform() end


---@class FAimTarget
---@field Weight float
---@field Transform FTransform
---@field AlignVector FVector
local FAimTarget = {}



---@class FAnimNode_ControlRig : FAnimNode_ControlRigBase
---@field ControlRigClass TSubclassOf<UControlRig>
---@field ControlRig UControlRig
---@field alpha float
---@field AlphaInputType EAnimAlphaInputType
---@field bAlphaBoolEnabled boolean
---@field bSetRefPoseFromSkeleton boolean
---@field AlphaScaleBias FInputScaleBias
---@field AlphaBoolBlend FInputAlphaBoolBlend
---@field AlphaCurveName FName
---@field AlphaScaleBiasClamp FInputScaleBiasClamp
---@field InputMapping TMap<FName, FName>
---@field OutputMapping TMap<FName, FName>
---@field LODThreshold int32
local FAnimNode_ControlRig = {}



---@class FAnimNode_ControlRigBase : FAnimNode_CustomProperty
---@field Source FPoseLink
---@field ControlRigBoneMapping TMap<FName, uint16>
---@field ControlRigCurveMapping TMap<FName, uint16>
---@field InputToCurveMappingUIDs TMap<FName, uint16>
---@field NodeMappingContainer TWeakObjectPtr<UNodeMappingContainer>
---@field InputSettings FControlRigIOSettings
---@field OutputSettings FControlRigIOSettings
---@field bExecute boolean
local FAnimNode_ControlRigBase = {}



---@class FAnimNode_ControlRigInputPose : FAnimNode_Base
---@field InputPose FPoseLink
local FAnimNode_ControlRigInputPose = {}



---@class FAnimNode_ControlRig_ExternalSource : FAnimNode_ControlRigBase
---@field ControlRig TWeakObjectPtr<UControlRig>
local FAnimNode_ControlRig_ExternalSource = {}



---@class FAnimationHierarchy : FNodeHierarchyWithUserData
---@field UserData TArray<FConstraintNodeData>
local FAnimationHierarchy = {}



---@class FBlendTarget
---@field Transform FTransform
---@field Weight float
local FBlendTarget = {}



---@class FCRFourPointBezier
---@field A FVector
---@field B FVector
---@field C FVector
---@field D FVector
local FCRFourPointBezier = {}



---@class FCRSimContainer
---@field TimeStep float
---@field AccumulatedTime float
---@field TimeLeftForStep float
local FCRSimContainer = {}



---@class FCRSimLinearSpring
---@field SubjectA int32
---@field SubjectB int32
---@field Coefficient float
---@field Equilibrium float
local FCRSimLinearSpring = {}



---@class FCRSimPoint
---@field Mass float
---@field Size float
---@field LinearDamping float
---@field InheritMotion float
---@field Position FVector
---@field LinearVelocity FVector
local FCRSimPoint = {}



---@class FCRSimPointConstraint
---@field Type ECRSimConstraintType
---@field SubjectA int32
---@field SubjectB int32
---@field DataA FVector
---@field DataB FVector
local FCRSimPointConstraint = {}



---@class FCRSimPointContainer : FCRSimContainer
---@field Points TArray<FCRSimPoint>
---@field Springs TArray<FCRSimLinearSpring>
---@field Forces TArray<FCRSimPointForce>
---@field CollisionVolumes TArray<FCRSimSoftCollision>
---@field Constraints TArray<FCRSimPointConstraint>
---@field PreviousStep TArray<FCRSimPoint>
local FCRSimPointContainer = {}



---@class FCRSimPointForce
---@field ForceType ECRSimPointForceType
---@field Vector FVector
---@field Coefficient float
---@field bNormalize boolean
local FCRSimPointForce = {}



---@class FCRSimSoftCollision
---@field Transform FTransform
---@field ShapeType ECRSimSoftCollisionType
---@field MinimumDistance float
---@field MaximumDistance float
---@field FalloffType EControlRigAnimEasingType
---@field Coefficient float
---@field bInverted boolean
local FCRSimSoftCollision = {}



---@class FCachedRigElement
---@field Key FRigElementKey
---@field Index uint16
---@field ContainerVersion int32
local FCachedRigElement = {}



---@class FChannelMapInfo
---@field ControlIndex int32
---@field TotalChannelIndex int32
---@field ChannelIndex int32
---@field ParentControlIndex int32
---@field ChannelTypeName FName
local FChannelMapInfo = {}



---@class FConstraintNodeData
---@field RelativeParent FTransform
---@field ConstraintOffset FConstraintOffset
---@field LinkedNode FName
---@field Constraints TArray<FTransformConstraint>
local FConstraintNodeData = {}



---@class FConstraintTarget
---@field Transform FTransform
---@field Weight float
---@field bMaintainOffset boolean
---@field Filter FTransformFilter
local FConstraintTarget = {}



---@class FControlRigAnimInstanceProxy : FAnimInstanceProxy
local FControlRigAnimInstanceProxy = {}


---@class FControlRigComponentMappedBone
---@field Source FName
---@field Target FName
local FControlRigComponentMappedBone = {}



---@class FControlRigComponentMappedComponent
---@field Component USceneComponent
---@field ElementName FName
---@field ElementType ERigElementType
---@field Direction EControlRigComponentMapDirection
local FControlRigComponentMappedComponent = {}



---@class FControlRigComponentMappedCurve
---@field Source FName
---@field Target FName
local FControlRigComponentMappedCurve = {}



---@class FControlRigComponentMappedElement
---@field ComponentReference FComponentReference
---@field TransformIndex int32
---@field TransformName FName
---@field ElementType ERigElementType
---@field ElementName FName
---@field Direction EControlRigComponentMapDirection
---@field Offset FTransform
---@field Weight float
---@field SPACE EControlRigComponentSpace
---@field SceneComponent USceneComponent
---@field ElementIndex int32
---@field SubIndex int32
local FControlRigComponentMappedElement = {}



---@class FControlRigDrawContainer
---@field Instructions TArray<FControlRigDrawInstruction>
local FControlRigDrawContainer = {}



---@class FControlRigDrawInstruction
---@field Name FName
---@field PrimitiveType EControlRigDrawSettings::Type
---@field Positions TArray<FVector>
---@field Color FLinearColor
---@field Thickness float
---@field Transform FTransform
local FControlRigDrawInstruction = {}



---@class FControlRigDrawInterface : FControlRigDrawContainer
local FControlRigDrawInterface = {}


---@class FControlRigExecuteContext : FRigVMExecuteContext
local FControlRigExecuteContext = {}


---@class FControlRigGizmoDefinition
---@field GizmoName FName
---@field StaticMesh TSoftObjectPtr<UStaticMesh>
---@field Transform FTransform
local FControlRigGizmoDefinition = {}



---@class FControlRigIOSettings
---@field bUpdatePose boolean
---@field bUpdateCurves boolean
local FControlRigIOSettings = {}



---@class FControlRigLayerInstanceProxy : FAnimInstanceProxy
local FControlRigLayerInstanceProxy = {}


---@class FControlRigSequenceObjectReference
---@field ControlRigClass TSubclassOf<UControlRig>
local FControlRigSequenceObjectReference = {}



---@class FControlRigSequenceObjectReferenceMap
---@field BindingIds TArray<FGuid>
---@field References TArray<FControlRigSequenceObjectReferences>
local FControlRigSequenceObjectReferenceMap = {}



---@class FControlRigSequenceObjectReferences
---@field Array TArray<FControlRigSequenceObjectReference>
local FControlRigSequenceObjectReferences = {}



---@class FControlRigSequencerAnimInstanceProxy : FAnimSequencerInstanceProxy
local FControlRigSequencerAnimInstanceProxy = {}


---@class FControlRigSettingsPerPinBool
---@field Values TMap<FString, boolean>
local FControlRigSettingsPerPinBool = {}



---@class FControlRigValidationContext
local FControlRigValidationContext = {}


---@class FEnumParameterNameAndCurve
---@field ParameterName FName
---@field ParameterCurve FMovieSceneByteChannel
local FEnumParameterNameAndCurve = {}



---@class FGizmoActorCreationParam
local FGizmoActorCreationParam = {}


---@class FIntegerParameterNameAndCurve
---@field ParameterName FName
---@field ParameterCurve FMovieSceneIntegerChannel
local FIntegerParameterNameAndCurve = {}



---@class FMathRBFInterpolateQuatColor_Target
---@field Target FQuat
---@field Value FLinearColor
local FMathRBFInterpolateQuatColor_Target = {}



---@class FMathRBFInterpolateQuatFloat_Target
---@field Target FQuat
---@field Value float
local FMathRBFInterpolateQuatFloat_Target = {}



---@class FMathRBFInterpolateQuatQuat_Target
---@field Target FQuat
---@field Value FQuat
local FMathRBFInterpolateQuatQuat_Target = {}



---@class FMathRBFInterpolateQuatVector_Target
---@field Target FQuat
---@field Value FVector
local FMathRBFInterpolateQuatVector_Target = {}



---@class FMathRBFInterpolateQuatXform_Target
---@field Target FQuat
---@field Value FTransform
local FMathRBFInterpolateQuatXform_Target = {}



---@class FMathRBFInterpolateVectorColor_Target
---@field Target FVector
---@field Value FLinearColor
local FMathRBFInterpolateVectorColor_Target = {}



---@class FMathRBFInterpolateVectorFloat_Target
---@field Target FVector
---@field Value float
local FMathRBFInterpolateVectorFloat_Target = {}



---@class FMathRBFInterpolateVectorQuat_Target
---@field Target FVector
---@field Value FQuat
local FMathRBFInterpolateVectorQuat_Target = {}



---@class FMathRBFInterpolateVectorVector_Target
---@field Target FVector
---@field Value FVector
local FMathRBFInterpolateVectorVector_Target = {}



---@class FMathRBFInterpolateVectorXform_Target
---@field Target FVector
---@field Value FTransform
local FMathRBFInterpolateVectorXform_Target = {}



---@class FMovieSceneControlRigInstanceData : FMovieSceneSequenceInstanceData
---@field bAdditive boolean
---@field bApplyBoneFilter boolean
---@field BoneFilter FInputBlendPose
---@field Weight FMovieSceneFloatChannel
---@field Operand FMovieSceneEvaluationOperand
local FMovieSceneControlRigInstanceData = {}



---@class FMovieSceneControlRigParameterTemplate : FMovieSceneParameterSectionTemplate
---@field Enums TArray<FEnumParameterNameAndCurve>
---@field Integers TArray<FIntegerParameterNameAndCurve>
local FMovieSceneControlRigParameterTemplate = {}



---@class FRigBone : FRigElement
---@field ParentName FName
---@field ParentIndex int32
---@field InitialTransform FTransform
---@field GlobalTransform FTransform
---@field LocalTransform FTransform
---@field Dependents TArray<int32>
---@field Type ERigBoneType
local FRigBone = {}



---@class FRigBoneHierarchy
---@field Bones TArray<FRigBone>
---@field NameToIndexMapping TMap<FName, int32>
---@field Selection TArray<FName>
local FRigBoneHierarchy = {}



---@class FRigControl : FRigElement
---@field ControlType ERigControlType
---@field DisplayName FName
---@field ParentName FName
---@field ParentIndex int32
---@field SpaceName FName
---@field SpaceIndex int32
---@field OffsetTransform FTransform
---@field InitialValue FRigControlValue
---@field Value FRigControlValue
---@field PrimaryAxis ERigControlAxis
---@field bIsCurve boolean
---@field bAnimatable boolean
---@field bLimitTranslation boolean
---@field bLimitRotation boolean
---@field bLimitScale boolean
---@field bDrawLimits boolean
---@field MinimumValue FRigControlValue
---@field MaximumValue FRigControlValue
---@field bGizmoEnabled boolean
---@field bGizmoVisible boolean
---@field GizmoName FName
---@field GizmoTransform FTransform
---@field GizmoColor FLinearColor
---@field Dependents TArray<int32>
---@field bIsTransientControl boolean
---@field ControlEnum UEnum
local FRigControl = {}



---@class FRigControlHierarchy
---@field Controls TArray<FRigControl>
---@field NameToIndexMapping TMap<FName, int32>
---@field Selection TArray<FName>
local FRigControlHierarchy = {}



---@class FRigControlModifiedContext
local FRigControlModifiedContext = {}


---@class FRigControlValue
---@field FloatStorage FRigControlValueStorage
---@field storage FTransform
local FRigControlValue = {}



---@class FRigControlValueStorage
---@field Float00 float
---@field Float01 float
---@field Float02 float
---@field Float03 float
---@field Float10 float
---@field Float11 float
---@field Float12 float
---@field Float13 float
---@field Float20 float
---@field Float21 float
---@field Float22 float
---@field Float23 float
---@field Float30 float
---@field Float31 float
---@field Float32 float
---@field Float33 float
---@field bValid boolean
local FRigControlValueStorage = {}



---@class FRigCurve : FRigElement
---@field Value float
local FRigCurve = {}



---@class FRigCurveContainer
---@field Curves TArray<FRigCurve>
---@field NameToIndexMapping TMap<FName, int32>
---@field Selection TArray<FName>
local FRigCurveContainer = {}



---@class FRigElement
---@field Name FName
---@field Index int32
local FRigElement = {}



---@class FRigElementKey
---@field Type ERigElementType
---@field Name FName
local FRigElementKey = {}



---@class FRigElementKeyCollection
local FRigElementKeyCollection = {}


---@class FRigEventContext
local FRigEventContext = {}


---@class FRigHierarchyContainer
---@field BoneHierarchy FRigBoneHierarchy
---@field SpaceHierarchy FRigSpaceHierarchy
---@field ControlHierarchy FRigControlHierarchy
---@field CurveContainer FRigCurveContainer
---@field Version int32
local FRigHierarchyContainer = {}



---@class FRigHierarchyCopyPasteContent
---@field Types TArray<ERigElementType>
---@field Contents TArray<FString>
---@field LocalTransforms TArray<FTransform>
---@field GlobalTransforms TArray<FTransform>
local FRigHierarchyCopyPasteContent = {}



---@class FRigHierarchyRef
local FRigHierarchyRef = {}


---@class FRigInfluenceEntry
---@field Source FRigElementKey
---@field AffectedList TArray<FRigElementKey>
local FRigInfluenceEntry = {}



---@class FRigInfluenceEntryModifier
---@field AffectedList TArray<FRigElementKey>
local FRigInfluenceEntryModifier = {}



---@class FRigInfluenceMap
---@field EventName FName
---@field Entries TArray<FRigInfluenceEntry>
---@field KeyToIndex TMap<FRigElementKey, int32>
local FRigInfluenceMap = {}



---@class FRigInfluenceMapPerEvent
---@field Maps TArray<FRigInfluenceMap>
---@field EventToIndex TMap<FName, int32>
local FRigInfluenceMapPerEvent = {}



---@class FRigMirrorSettings
---@field MirrorAxis EAxis::Type
---@field AxisToFlip EAxis::Type
---@field OldName FString
---@field NewName FString
local FRigMirrorSettings = {}



---@class FRigPose
---@field Elements TArray<FRigPoseElement>
local FRigPose = {}



---@class FRigPoseElement
---@field Index FCachedRigElement
---@field GlobalTransform FTransform
---@field LocalTransform FTransform
---@field CurveValue float
local FRigPoseElement = {}



---@class FRigSpace : FRigElement
---@field SpaceType ERigSpaceType
---@field ParentName FName
---@field ParentIndex int32
---@field InitialTransform FTransform
---@field LocalTransform FTransform
local FRigSpace = {}



---@class FRigSpaceHierarchy
---@field Spaces TArray<FRigSpace>
---@field NameToIndexMapping TMap<FName, int32>
---@field Selection TArray<FName>
local FRigSpaceHierarchy = {}



---@class FRigUnit : FRigVMStruct
local FRigUnit = {}


---@class FRigUnitMutable : FRigUnit
---@field ExecuteContext FControlRigExecuteContext
local FRigUnitMutable = {}



---@class FRigUnit_AccumulateFloatAdd : FRigUnit_SimBase
---@field Increment float
---@field InitialValue float
---@field bIntegrateDeltaTime boolean
---@field Result float
---@field AccumulatedValue float
local FRigUnit_AccumulateFloatAdd = {}



---@class FRigUnit_AccumulateFloatLerp : FRigUnit_SimBase
---@field TargetValue float
---@field InitialValue float
---@field Blend float
---@field bIntegrateDeltaTime boolean
---@field Result float
---@field AccumulatedValue float
local FRigUnit_AccumulateFloatLerp = {}



---@class FRigUnit_AccumulateFloatMul : FRigUnit_SimBase
---@field Multiplier float
---@field InitialValue float
---@field bIntegrateDeltaTime boolean
---@field Result float
---@field AccumulatedValue float
local FRigUnit_AccumulateFloatMul = {}



---@class FRigUnit_AccumulateFloatRange : FRigUnit_SimBase
---@field Value float
---@field Minimum float
---@field Maximum float
---@field AccumulatedMinimum float
---@field AccumulatedMaximum float
local FRigUnit_AccumulateFloatRange = {}



---@class FRigUnit_AccumulateQuatLerp : FRigUnit_SimBase
---@field TargetValue FQuat
---@field InitialValue FQuat
---@field Blend float
---@field bIntegrateDeltaTime boolean
---@field Result FQuat
---@field AccumulatedValue FQuat
local FRigUnit_AccumulateQuatLerp = {}



---@class FRigUnit_AccumulateQuatMul : FRigUnit_SimBase
---@field Multiplier FQuat
---@field InitialValue FQuat
---@field bFlipOrder boolean
---@field bIntegrateDeltaTime boolean
---@field Result FQuat
---@field AccumulatedValue FQuat
local FRigUnit_AccumulateQuatMul = {}



---@class FRigUnit_AccumulateTransformLerp : FRigUnit_SimBase
---@field TargetValue FTransform
---@field InitialValue FTransform
---@field Blend float
---@field bIntegrateDeltaTime boolean
---@field Result FTransform
---@field AccumulatedValue FTransform
local FRigUnit_AccumulateTransformLerp = {}



---@class FRigUnit_AccumulateTransformMul : FRigUnit_SimBase
---@field Multiplier FTransform
---@field InitialValue FTransform
---@field bFlipOrder boolean
---@field bIntegrateDeltaTime boolean
---@field Result FTransform
---@field AccumulatedValue FTransform
local FRigUnit_AccumulateTransformMul = {}



---@class FRigUnit_AccumulateVectorAdd : FRigUnit_SimBase
---@field Increment FVector
---@field InitialValue FVector
---@field bIntegrateDeltaTime boolean
---@field Result FVector
---@field AccumulatedValue FVector
local FRigUnit_AccumulateVectorAdd = {}



---@class FRigUnit_AccumulateVectorLerp : FRigUnit_SimBase
---@field TargetValue FVector
---@field InitialValue FVector
---@field Blend float
---@field bIntegrateDeltaTime boolean
---@field Result FVector
---@field AccumulatedValue FVector
local FRigUnit_AccumulateVectorLerp = {}



---@class FRigUnit_AccumulateVectorMul : FRigUnit_SimBase
---@field Multiplier FVector
---@field InitialValue FVector
---@field bIntegrateDeltaTime boolean
---@field Result FVector
---@field AccumulatedValue FVector
local FRigUnit_AccumulateVectorMul = {}



---@class FRigUnit_AccumulateVectorRange : FRigUnit_SimBase
---@field Value FVector
---@field Minimum FVector
---@field Maximum FVector
---@field AccumulatedMinimum FVector
---@field AccumulatedMaximum FVector
local FRigUnit_AccumulateVectorRange = {}



---@class FRigUnit_AddBoneTransform : FRigUnitMutable
---@field Bone FName
---@field Transform FTransform
---@field Weight float
---@field bPostMultiply boolean
---@field bPropagateToChildren boolean
---@field CachedBone FCachedRigElement
local FRigUnit_AddBoneTransform = {}



---@class FRigUnit_Add_FloatFloat : FRigUnit_BinaryFloatOp
local FRigUnit_Add_FloatFloat = {}


---@class FRigUnit_Add_VectorVector : FRigUnit_BinaryVectorOp
local FRigUnit_Add_VectorVector = {}


---@class FRigUnit_AimBone : FRigUnit_HighlevelBaseMutable
---@field Bone FName
---@field Primary FRigUnit_AimBone_Target
---@field Secondary FRigUnit_AimBone_Target
---@field Weight float
---@field bPropagateToChildren boolean
---@field DebugSettings FRigUnit_AimBone_DebugSettings
---@field CachedBoneIndex FCachedRigElement
---@field PrimaryCachedSpace FCachedRigElement
---@field SecondaryCachedSpace FCachedRigElement
local FRigUnit_AimBone = {}



---@class FRigUnit_AimBoneMath : FRigUnit_HighlevelBase
---@field InputTransform FTransform
---@field Primary FRigUnit_AimItem_Target
---@field Secondary FRigUnit_AimItem_Target
---@field Weight float
---@field Result FTransform
---@field DebugSettings FRigUnit_AimBone_DebugSettings
---@field PrimaryCachedSpace FCachedRigElement
---@field SecondaryCachedSpace FCachedRigElement
local FRigUnit_AimBoneMath = {}



---@class FRigUnit_AimBone_DebugSettings
---@field bEnabled boolean
---@field Scale float
---@field WorldOffset FTransform
local FRigUnit_AimBone_DebugSettings = {}



---@class FRigUnit_AimBone_Target
---@field Weight float
---@field Axis FVector
---@field Target FVector
---@field Kind EControlRigVectorKind
---@field SPACE FName
local FRigUnit_AimBone_Target = {}



---@class FRigUnit_AimConstraint : FRigUnitMutable
---@field Joint FName
---@field AimMode EAimMode
---@field UpMode EAimMode
---@field AimVector FVector
---@field UpVector FVector
---@field AimTargets TArray<FAimTarget>
---@field UpTargets TArray<FAimTarget>
---@field WorkData FRigUnit_AimConstraint_WorkData
local FRigUnit_AimConstraint = {}



---@class FRigUnit_AimConstraint_WorkData
---@field ConstraintData TArray<FConstraintData>
local FRigUnit_AimConstraint_WorkData = {}



---@class FRigUnit_AimItem : FRigUnit_HighlevelBaseMutable
---@field Item FRigElementKey
---@field Primary FRigUnit_AimItem_Target
---@field Secondary FRigUnit_AimItem_Target
---@field Weight float
---@field DebugSettings FRigUnit_AimBone_DebugSettings
---@field CachedItem FCachedRigElement
---@field PrimaryCachedSpace FCachedRigElement
---@field SecondaryCachedSpace FCachedRigElement
local FRigUnit_AimItem = {}



---@class FRigUnit_AimItem_Target
---@field Weight float
---@field Axis FVector
---@field Target FVector
---@field Kind EControlRigVectorKind
---@field SPACE FRigElementKey
local FRigUnit_AimItem_Target = {}



---@class FRigUnit_AlphaInterp : FRigUnit_SimBase
---@field Value float
---@field Scale float
---@field Bias float
---@field bMapRange boolean
---@field InRange FInputRange
---@field OutRange FInputRange
---@field bClampResult boolean
---@field ClampMin float
---@field ClampMax float
---@field bInterpResult boolean
---@field InterpSpeedIncreasing float
---@field InterpSpeedDecreasing float
---@field Result float
---@field ScaleBiasClamp FInputScaleBiasClamp
local FRigUnit_AlphaInterp = {}



---@class FRigUnit_AlphaInterpVector : FRigUnit_SimBase
---@field Value FVector
---@field Scale float
---@field Bias float
---@field bMapRange boolean
---@field InRange FInputRange
---@field OutRange FInputRange
---@field bClampResult boolean
---@field ClampMin float
---@field ClampMax float
---@field bInterpResult boolean
---@field InterpSpeedIncreasing float
---@field InterpSpeedDecreasing float
---@field Result FVector
---@field ScaleBiasClamp FInputScaleBiasClamp
local FRigUnit_AlphaInterpVector = {}



---@class FRigUnit_AnimBase : FRigUnit
local FRigUnit_AnimBase = {}


---@class FRigUnit_AnimEasing : FRigUnit_AnimBase
---@field Value float
---@field Type EControlRigAnimEasingType
---@field SourceMinimum float
---@field SourceMaximum float
---@field TargetMinimum float
---@field TargetMaximum float
---@field Result float
local FRigUnit_AnimEasing = {}



---@class FRigUnit_AnimEasingType : FRigUnit_AnimBase
---@field Type EControlRigAnimEasingType
local FRigUnit_AnimEasingType = {}



---@class FRigUnit_AnimEvalRichCurve : FRigUnit_AnimBase
---@field Value float
---@field Curve FRuntimeFloatCurve
---@field SourceMinimum float
---@field SourceMaximum float
---@field TargetMinimum float
---@field TargetMaximum float
---@field Result float
local FRigUnit_AnimEvalRichCurve = {}



---@class FRigUnit_AnimRichCurve : FRigUnit_AnimBase
---@field Curve FRuntimeFloatCurve
local FRigUnit_AnimRichCurve = {}



---@class FRigUnit_ApplyFK : FRigUnitMutable
---@field Joint FName
---@field Transform FTransform
---@field Filter FTransformFilter
---@field ApplyTransformMode EApplyTransformMode
---@field ApplyTransformSpace ETransformSpaceMode
---@field BaseTransform FTransform
---@field BaseJoint FName
local FRigUnit_ApplyFK = {}



---@class FRigUnit_BeginExecution : FRigUnit
---@field ExecuteContext FControlRigExecuteContext
local FRigUnit_BeginExecution = {}



---@class FRigUnit_BinaryFloatOp : FRigUnit
---@field Argument0 float
---@field Argument1 float
---@field Result float
local FRigUnit_BinaryFloatOp = {}



---@class FRigUnit_BinaryQuaternionOp : FRigUnit
---@field Argument0 FQuat
---@field Argument1 FQuat
---@field Result FQuat
local FRigUnit_BinaryQuaternionOp = {}



---@class FRigUnit_BinaryTransformOp : FRigUnit
---@field Argument0 FTransform
---@field Argument1 FTransform
---@field Result FTransform
local FRigUnit_BinaryTransformOp = {}



---@class FRigUnit_BinaryVectorOp : FRigUnit
---@field Argument0 FVector
---@field Argument1 FVector
---@field Result FVector
local FRigUnit_BinaryVectorOp = {}



---@class FRigUnit_BlendTransform : FRigUnit
---@field Source FTransform
---@field Targets TArray<FBlendTarget>
---@field Result FTransform
local FRigUnit_BlendTransform = {}



---@class FRigUnit_BoneHarmonics : FRigUnit_HighlevelBaseMutable
---@field Bones TArray<FRigUnit_BoneHarmonics_BoneTarget>
---@field WaveSpeed FVector
---@field WaveFrequency FVector
---@field WaveAmplitude FVector
---@field WaveOffset FVector
---@field WaveNoise FVector
---@field WaveEase EControlRigAnimEasingType
---@field WaveMinimum float
---@field WaveMaximum float
---@field RotationOrder EControlRigRotationOrder
---@field bPropagateToChildren boolean
---@field WorkData FRigUnit_BoneHarmonics_WorkData
local FRigUnit_BoneHarmonics = {}



---@class FRigUnit_BoneHarmonics_BoneTarget
---@field Bone FName
---@field Ratio float
local FRigUnit_BoneHarmonics_BoneTarget = {}



---@class FRigUnit_BoneHarmonics_WorkData
---@field CachedItems TArray<FCachedRigElement>
---@field WaveTime FVector
local FRigUnit_BoneHarmonics_WorkData = {}



---@class FRigUnit_BoneName : FRigUnit
---@field Bone FName
local FRigUnit_BoneName = {}



---@class FRigUnit_CCDIK : FRigUnit_HighlevelBaseMutable
---@field StartBone FName
---@field EffectorBone FName
---@field EffectorTransform FTransform
---@field Precision float
---@field Weight float
---@field MaxIterations int32
---@field bStartFromTail boolean
---@field BaseRotationLimit float
---@field RotationLimits TArray<FRigUnit_CCDIK_RotationLimit>
---@field bPropagateToChildren boolean
---@field WorkData FRigUnit_CCDIK_WorkData
local FRigUnit_CCDIK = {}



---@class FRigUnit_CCDIKPerItem : FRigUnit_HighlevelBaseMutable
---@field Items FRigElementKeyCollection
---@field EffectorTransform FTransform
---@field Precision float
---@field Weight float
---@field MaxIterations int32
---@field bStartFromTail boolean
---@field BaseRotationLimit float
---@field RotationLimits TArray<FRigUnit_CCDIK_RotationLimitPerItem>
---@field bPropagateToChildren boolean
---@field WorkData FRigUnit_CCDIK_WorkData
local FRigUnit_CCDIKPerItem = {}



---@class FRigUnit_CCDIK_RotationLimit
---@field Bone FName
---@field Limit float
local FRigUnit_CCDIK_RotationLimit = {}



---@class FRigUnit_CCDIK_RotationLimitPerItem
---@field Item FRigElementKey
---@field Limit float
local FRigUnit_CCDIK_RotationLimitPerItem = {}



---@class FRigUnit_CCDIK_WorkData
---@field Chain TArray<FCCDIKChainLink>
---@field CachedItems TArray<FCachedRigElement>
---@field RotationLimitIndex TArray<int32>
---@field RotationLimitsPerItem TArray<float>
---@field CachedEffector FCachedRigElement
local FRigUnit_CCDIK_WorkData = {}



---@class FRigUnit_ChainHarmonics : FRigUnit_HighlevelBaseMutable
---@field ChainRoot FName
---@field Speed FVector
---@field Reach FRigUnit_ChainHarmonics_Reach
---@field wave FRigUnit_ChainHarmonics_Wave
---@field WaveCurve FRuntimeFloatCurve
---@field Pendulum FRigUnit_ChainHarmonics_Pendulum
---@field bDrawDebug boolean
---@field DrawWorldOffset FTransform
---@field WorkData FRigUnit_ChainHarmonics_WorkData
local FRigUnit_ChainHarmonics = {}



---@class FRigUnit_ChainHarmonicsPerItem : FRigUnit_HighlevelBaseMutable
---@field ChainRoot FRigElementKey
---@field Speed FVector
---@field Reach FRigUnit_ChainHarmonics_Reach
---@field wave FRigUnit_ChainHarmonics_Wave
---@field WaveCurve FRuntimeFloatCurve
---@field Pendulum FRigUnit_ChainHarmonics_Pendulum
---@field bDrawDebug boolean
---@field DrawWorldOffset FTransform
---@field WorkData FRigUnit_ChainHarmonics_WorkData
local FRigUnit_ChainHarmonicsPerItem = {}



---@class FRigUnit_ChainHarmonics_Pendulum
---@field bEnabled boolean
---@field PendulumStiffness float
---@field PendulumGravity FVector
---@field PendulumBlend float
---@field PendulumDrag float
---@field PendulumMinimum float
---@field PendulumMaximum float
---@field PendulumEase EControlRigAnimEasingType
---@field UnwindAxis FVector
---@field UnwindMinimum float
---@field UnwindMaximum float
local FRigUnit_ChainHarmonics_Pendulum = {}



---@class FRigUnit_ChainHarmonics_Reach
---@field bEnabled boolean
---@field ReachTarget FVector
---@field ReachAxis FVector
---@field ReachMinimum float
---@field ReachMaximum float
---@field ReachEase EControlRigAnimEasingType
local FRigUnit_ChainHarmonics_Reach = {}



---@class FRigUnit_ChainHarmonics_Wave
---@field bEnabled boolean
---@field WaveFrequency FVector
---@field WaveAmplitude FVector
---@field WaveOffset FVector
---@field WaveNoise FVector
---@field WaveMinimum float
---@field WaveMaximum float
---@field WaveEase EControlRigAnimEasingType
local FRigUnit_ChainHarmonics_Wave = {}



---@class FRigUnit_ChainHarmonics_WorkData
---@field Time FVector
---@field Items TArray<FCachedRigElement>
---@field Ratio TArray<float>
---@field LocalTip TArray<FVector>
---@field PendulumTip TArray<FVector>
---@field PendulumPosition TArray<FVector>
---@field PendulumVelocity TArray<FVector>
---@field HierarchyLine TArray<FVector>
---@field VelocityLines TArray<FVector>
local FRigUnit_ChainHarmonics_WorkData = {}



---@class FRigUnit_Clamp_Float : FRigUnit
---@field Value float
---@field Min float
---@field Max float
---@field Result float
local FRigUnit_Clamp_Float = {}



---@class FRigUnit_CollectionBase : FRigUnit
local FRigUnit_CollectionBase = {}


---@class FRigUnit_CollectionBaseMutable : FRigUnitMutable
local FRigUnit_CollectionBaseMutable = {}


---@class FRigUnit_CollectionChain : FRigUnit_CollectionBase
---@field FirstItem FRigElementKey
---@field LastItem FRigElementKey
---@field Reverse boolean
---@field Collection FRigElementKeyCollection
---@field CachedCollection FRigElementKeyCollection
---@field CachedHierarchyHash int32
local FRigUnit_CollectionChain = {}



---@class FRigUnit_CollectionChildren : FRigUnit_CollectionBase
---@field Parent FRigElementKey
---@field bIncludeParent boolean
---@field bRecursive boolean
---@field TypeToSearch ERigElementType
---@field Collection FRigElementKeyCollection
---@field CachedCollection FRigElementKeyCollection
---@field CachedHierarchyHash int32
local FRigUnit_CollectionChildren = {}



---@class FRigUnit_CollectionCount : FRigUnit_CollectionBase
---@field Collection FRigElementKeyCollection
---@field Count int32
local FRigUnit_CollectionCount = {}



---@class FRigUnit_CollectionDifference : FRigUnit_CollectionBase
---@field A FRigElementKeyCollection
---@field B FRigElementKeyCollection
---@field Collection FRigElementKeyCollection
local FRigUnit_CollectionDifference = {}



---@class FRigUnit_CollectionIntersection : FRigUnit_CollectionBase
---@field A FRigElementKeyCollection
---@field B FRigElementKeyCollection
---@field Collection FRigElementKeyCollection
local FRigUnit_CollectionIntersection = {}



---@class FRigUnit_CollectionItemAtIndex : FRigUnit_CollectionBase
---@field Collection FRigElementKeyCollection
---@field Index int32
---@field Item FRigElementKey
local FRigUnit_CollectionItemAtIndex = {}



---@class FRigUnit_CollectionItems : FRigUnit_CollectionBase
---@field Items TArray<FRigElementKey>
---@field Collection FRigElementKeyCollection
local FRigUnit_CollectionItems = {}



---@class FRigUnit_CollectionLoop : FRigUnit_CollectionBaseMutable
---@field Collection FRigElementKeyCollection
---@field Item FRigElementKey
---@field Index int32
---@field Count int32
---@field Ratio float
---@field Continue boolean
---@field Completed FControlRigExecuteContext
local FRigUnit_CollectionLoop = {}



---@class FRigUnit_CollectionNameSearch : FRigUnit_CollectionBase
---@field PartialName FName
---@field TypeToSearch ERigElementType
---@field Collection FRigElementKeyCollection
---@field CachedCollection FRigElementKeyCollection
---@field CachedHierarchyHash int32
local FRigUnit_CollectionNameSearch = {}



---@class FRigUnit_CollectionReplaceItems : FRigUnit_CollectionBase
---@field Items FRigElementKeyCollection
---@field Old FName
---@field New FName
---@field RemoveInvalidItems boolean
---@field Collection FRigElementKeyCollection
---@field CachedCollection FRigElementKeyCollection
---@field CachedHierarchyHash int32
local FRigUnit_CollectionReplaceItems = {}



---@class FRigUnit_CollectionReverse : FRigUnit_CollectionBase
---@field Collection FRigElementKeyCollection
---@field Reversed FRigElementKeyCollection
local FRigUnit_CollectionReverse = {}



---@class FRigUnit_CollectionUnion : FRigUnit_CollectionBase
---@field A FRigElementKeyCollection
---@field B FRigElementKeyCollection
---@field Collection FRigElementKeyCollection
local FRigUnit_CollectionUnion = {}



---@class FRigUnit_Contains : FRigUnit_NameBase
---@field Name FName
---@field Search FName
---@field Result boolean
local FRigUnit_Contains = {}



---@class FRigUnit_Control : FRigUnit
---@field Transform FEulerTransform
---@field Base FTransform
---@field InitTransform FTransform
---@field Result FTransform
---@field Filter FTransformFilter
local FRigUnit_Control = {}



---@class FRigUnit_ControlName : FRigUnit
---@field Control FName
local FRigUnit_ControlName = {}



---@class FRigUnit_Control_StaticMesh : FRigUnit_Control
---@field MeshTransform FTransform
local FRigUnit_Control_StaticMesh = {}



---@class FRigUnit_ConvertEulerTransform : FRigUnit
---@field Input FEulerTransform
---@field Result FTransform
local FRigUnit_ConvertEulerTransform = {}



---@class FRigUnit_ConvertQuaternion : FRigUnit
---@field Input FQuat
---@field Result FRotator
local FRigUnit_ConvertQuaternion = {}



---@class FRigUnit_ConvertQuaternionToVector : FRigUnit
---@field Input FQuat
---@field Result FVector
local FRigUnit_ConvertQuaternionToVector = {}



---@class FRigUnit_ConvertRotation : FRigUnit
---@field Input FRotator
---@field Result FQuat
local FRigUnit_ConvertRotation = {}



---@class FRigUnit_ConvertRotationToVector : FRigUnit
---@field Input FRotator
---@field Result FVector
local FRigUnit_ConvertRotationToVector = {}



---@class FRigUnit_ConvertTransform : FRigUnit
---@field Input FTransform
---@field Result FEulerTransform
local FRigUnit_ConvertTransform = {}



---@class FRigUnit_ConvertVectorRotation : FRigUnit_ConvertRotation
local FRigUnit_ConvertVectorRotation = {}


---@class FRigUnit_ConvertVectorToQuaternion : FRigUnit
---@field Input FVector
---@field Result FQuat
local FRigUnit_ConvertVectorToQuaternion = {}



---@class FRigUnit_ConvertVectorToRotation : FRigUnit
---@field Input FVector
---@field Result FRotator
local FRigUnit_ConvertVectorToRotation = {}



---@class FRigUnit_DebugArc : FRigUnit_DebugBaseMutable
---@field Transform FTransform
---@field Color FLinearColor
---@field Radius float
---@field MinimumDegrees float
---@field MaximumDegrees float
---@field Thickness float
---@field Detail int32
---@field SPACE FName
---@field WorldOffset FTransform
---@field bEnabled boolean
local FRigUnit_DebugArc = {}



---@class FRigUnit_DebugArcItemSpace : FRigUnit_DebugBaseMutable
---@field Transform FTransform
---@field Color FLinearColor
---@field Radius float
---@field MinimumDegrees float
---@field MaximumDegrees float
---@field Thickness float
---@field Detail int32
---@field SPACE FRigElementKey
---@field WorldOffset FTransform
---@field bEnabled boolean
local FRigUnit_DebugArcItemSpace = {}



---@class FRigUnit_DebugBase : FRigUnit
local FRigUnit_DebugBase = {}


---@class FRigUnit_DebugBaseMutable : FRigUnitMutable
local FRigUnit_DebugBaseMutable = {}


---@class FRigUnit_DebugBezier : FRigUnit_DebugBaseMutable
---@field Bezier FCRFourPointBezier
---@field MinimumU float
---@field MaximumU float
---@field Color FLinearColor
---@field Thickness float
---@field Detail int32
---@field SPACE FName
---@field WorldOffset FTransform
---@field bEnabled boolean
local FRigUnit_DebugBezier = {}



---@class FRigUnit_DebugBezierItemSpace : FRigUnit_DebugBaseMutable
---@field Bezier FCRFourPointBezier
---@field MinimumU float
---@field MaximumU float
---@field Color FLinearColor
---@field Thickness float
---@field Detail int32
---@field SPACE FRigElementKey
---@field WorldOffset FTransform
---@field bEnabled boolean
local FRigUnit_DebugBezierItemSpace = {}



---@class FRigUnit_DebugHierarchy : FRigUnit_DebugBaseMutable
---@field Scale float
---@field Color FLinearColor
---@field Thickness float
---@field WorldOffset FTransform
---@field bEnabled boolean
local FRigUnit_DebugHierarchy = {}



---@class FRigUnit_DebugLine : FRigUnit_DebugBaseMutable
---@field A FVector
---@field B FVector
---@field Color FLinearColor
---@field Thickness float
---@field SPACE FName
---@field WorldOffset FTransform
---@field bEnabled boolean
local FRigUnit_DebugLine = {}



---@class FRigUnit_DebugLineItemSpace : FRigUnit_DebugBaseMutable
---@field A FVector
---@field B FVector
---@field Color FLinearColor
---@field Thickness float
---@field SPACE FRigElementKey
---@field WorldOffset FTransform
---@field bEnabled boolean
local FRigUnit_DebugLineItemSpace = {}



---@class FRigUnit_DebugLineStrip : FRigUnit_DebugBaseMutable
---@field Points TArray<FVector>
---@field Color FLinearColor
---@field Thickness float
---@field SPACE FName
---@field WorldOffset FTransform
---@field bEnabled boolean
local FRigUnit_DebugLineStrip = {}



---@class FRigUnit_DebugLineStripItemSpace : FRigUnit_DebugBaseMutable
---@field Points TArray<FVector>
---@field Color FLinearColor
---@field Thickness float
---@field SPACE FRigElementKey
---@field WorldOffset FTransform
---@field bEnabled boolean
local FRigUnit_DebugLineStripItemSpace = {}



---@class FRigUnit_DebugPoint : FRigUnit_DebugBase
---@field Vector FVector
---@field Mode ERigUnitDebugPointMode
---@field Color FLinearColor
---@field Scale float
---@field Thickness float
---@field SPACE FName
---@field WorldOffset FTransform
---@field bEnabled boolean
local FRigUnit_DebugPoint = {}



---@class FRigUnit_DebugPointMutable : FRigUnit_DebugBaseMutable
---@field Vector FVector
---@field Mode ERigUnitDebugPointMode
---@field Color FLinearColor
---@field Scale float
---@field Thickness float
---@field SPACE FName
---@field WorldOffset FTransform
---@field bEnabled boolean
local FRigUnit_DebugPointMutable = {}



---@class FRigUnit_DebugRectangle : FRigUnit_DebugBaseMutable
---@field Transform FTransform
---@field Color FLinearColor
---@field Scale float
---@field Thickness float
---@field SPACE FName
---@field WorldOffset FTransform
---@field bEnabled boolean
local FRigUnit_DebugRectangle = {}



---@class FRigUnit_DebugRectangleItemSpace : FRigUnit_DebugBaseMutable
---@field Transform FTransform
---@field Color FLinearColor
---@field Scale float
---@field Thickness float
---@field SPACE FRigElementKey
---@field WorldOffset FTransform
---@field bEnabled boolean
local FRigUnit_DebugRectangleItemSpace = {}



---@class FRigUnit_DebugTransform : FRigUnit_DebugBase
---@field Transform FTransform
---@field Mode ERigUnitDebugTransformMode
---@field Color FLinearColor
---@field Thickness float
---@field Scale float
---@field SPACE FName
---@field WorldOffset FTransform
---@field bEnabled boolean
local FRigUnit_DebugTransform = {}



---@class FRigUnit_DebugTransformArrayMutable : FRigUnit_DebugBaseMutable
---@field Transforms TArray<FTransform>
---@field Mode ERigUnitDebugTransformMode
---@field Color FLinearColor
---@field Thickness float
---@field Scale float
---@field SPACE FName
---@field WorldOffset FTransform
---@field bEnabled boolean
---@field WorkData FRigUnit_DebugTransformArrayMutable_WorkData
local FRigUnit_DebugTransformArrayMutable = {}



---@class FRigUnit_DebugTransformArrayMutable_WorkData
---@field DrawTransforms TArray<FTransform>
local FRigUnit_DebugTransformArrayMutable_WorkData = {}



---@class FRigUnit_DebugTransformMutable : FRigUnit_DebugBaseMutable
---@field Transform FTransform
---@field Mode ERigUnitDebugTransformMode
---@field Color FLinearColor
---@field Thickness float
---@field Scale float
---@field SPACE FName
---@field WorldOffset FTransform
---@field bEnabled boolean
local FRigUnit_DebugTransformMutable = {}



---@class FRigUnit_DebugTransformMutableItemSpace : FRigUnit_DebugBaseMutable
---@field Transform FTransform
---@field Mode ERigUnitDebugTransformMode
---@field Color FLinearColor
---@field Thickness float
---@field Scale float
---@field SPACE FRigElementKey
---@field WorldOffset FTransform
---@field bEnabled boolean
local FRigUnit_DebugTransformMutableItemSpace = {}



---@class FRigUnit_DeltaFromPreviousFloat : FRigUnit_SimBase
---@field Value float
---@field Delta float
---@field PreviousValue float
---@field Cache float
local FRigUnit_DeltaFromPreviousFloat = {}



---@class FRigUnit_DeltaFromPreviousQuat : FRigUnit_SimBase
---@field Value FQuat
---@field Delta FQuat
---@field PreviousValue FQuat
---@field Cache FQuat
local FRigUnit_DeltaFromPreviousQuat = {}



---@class FRigUnit_DeltaFromPreviousTransform : FRigUnit_SimBase
---@field Value FTransform
---@field Delta FTransform
---@field PreviousValue FTransform
---@field Cache FTransform
local FRigUnit_DeltaFromPreviousTransform = {}



---@class FRigUnit_DeltaFromPreviousVector : FRigUnit_SimBase
---@field Value FVector
---@field Delta FVector
---@field PreviousValue FVector
---@field Cache FVector
local FRigUnit_DeltaFromPreviousVector = {}



---@class FRigUnit_Distance_VectorVector : FRigUnit
---@field Argument0 FVector
---@field Argument1 FVector
---@field Result float
local FRigUnit_Distance_VectorVector = {}



---@class FRigUnit_DistributeRotation : FRigUnit_HighlevelBaseMutable
---@field StartBone FName
---@field EndBone FName
---@field Rotations TArray<FRigUnit_DistributeRotation_Rotation>
---@field RotationEaseType EControlRigAnimEasingType
---@field Weight float
---@field bPropagateToChildren boolean
---@field WorkData FRigUnit_DistributeRotation_WorkData
local FRigUnit_DistributeRotation = {}



---@class FRigUnit_DistributeRotationForCollection : FRigUnit_HighlevelBaseMutable
---@field Items FRigElementKeyCollection
---@field Rotations TArray<FRigUnit_DistributeRotation_Rotation>
---@field RotationEaseType EControlRigAnimEasingType
---@field Weight float
---@field WorkData FRigUnit_DistributeRotation_WorkData
local FRigUnit_DistributeRotationForCollection = {}



---@class FRigUnit_DistributeRotation_Rotation
---@field Rotation FQuat
---@field Ratio float
local FRigUnit_DistributeRotation_Rotation = {}



---@class FRigUnit_DistributeRotation_WorkData
---@field CachedItems TArray<FCachedRigElement>
---@field ItemRotationA TArray<int32>
---@field ItemRotationB TArray<int32>
---@field ItemRotationT TArray<float>
---@field ItemLocalTransforms TArray<FTransform>
local FRigUnit_DistributeRotation_WorkData = {}



---@class FRigUnit_Divide_FloatFloat : FRigUnit_BinaryFloatOp
local FRigUnit_Divide_FloatFloat = {}


---@class FRigUnit_Divide_VectorVector : FRigUnit_BinaryVectorOp
local FRigUnit_Divide_VectorVector = {}


---@class FRigUnit_DrawContainerGetInstruction : FRigUnit
---@field InstructionName FName
---@field Color FLinearColor
---@field Transform FTransform
local FRigUnit_DrawContainerGetInstruction = {}



---@class FRigUnit_DrawContainerSetColor : FRigUnitMutable
---@field InstructionName FName
---@field Color FLinearColor
local FRigUnit_DrawContainerSetColor = {}



---@class FRigUnit_DrawContainerSetThickness : FRigUnitMutable
---@field InstructionName FName
---@field Thickness float
local FRigUnit_DrawContainerSetThickness = {}



---@class FRigUnit_DrawContainerSetTransform : FRigUnitMutable
---@field InstructionName FName
---@field Transform FTransform
local FRigUnit_DrawContainerSetTransform = {}



---@class FRigUnit_EndProfilingTimer : FRigUnit_DebugBaseMutable
---@field NumberOfMeasurements int32
---@field Prefix FString
---@field AccumulatedTime float
---@field MeasurementsLeft int32
local FRigUnit_EndProfilingTimer = {}



---@class FRigUnit_EndsWith : FRigUnit_NameBase
---@field Name FName
---@field Ending FName
---@field Result boolean
local FRigUnit_EndsWith = {}



---@class FRigUnit_FABRIK : FRigUnit_HighlevelBaseMutable
---@field StartBone FName
---@field EffectorBone FName
---@field EffectorTransform FTransform
---@field Precision float
---@field Weight float
---@field bPropagateToChildren boolean
---@field MaxIterations int32
---@field WorkData FRigUnit_FABRIK_WorkData
local FRigUnit_FABRIK = {}



---@class FRigUnit_FABRIKPerItem : FRigUnit_HighlevelBaseMutable
---@field Items FRigElementKeyCollection
---@field EffectorTransform FTransform
---@field Precision float
---@field Weight float
---@field bPropagateToChildren boolean
---@field MaxIterations int32
---@field WorkData FRigUnit_FABRIK_WorkData
local FRigUnit_FABRIKPerItem = {}



---@class FRigUnit_FABRIK_WorkData
---@field Chain TArray<FFABRIKChainLink>
---@field CachedItems TArray<FCachedRigElement>
---@field CachedEffector FCachedRigElement
local FRigUnit_FABRIK_WorkData = {}



---@class FRigUnit_FitChainToCurve : FRigUnit_HighlevelBaseMutable
---@field StartBone FName
---@field EndBone FName
---@field Bezier FCRFourPointBezier
---@field Alignment EControlRigCurveAlignment
---@field Minimum float
---@field Maximum float
---@field SamplingPrecision int32
---@field PrimaryAxis FVector
---@field SecondaryAxis FVector
---@field PoleVectorPosition FVector
---@field Rotations TArray<FRigUnit_FitChainToCurve_Rotation>
---@field RotationEaseType EControlRigAnimEasingType
---@field Weight float
---@field bPropagateToChildren boolean
---@field DebugSettings FRigUnit_FitChainToCurve_DebugSettings
---@field WorkData FRigUnit_FitChainToCurve_WorkData
local FRigUnit_FitChainToCurve = {}



---@class FRigUnit_FitChainToCurvePerItem : FRigUnit_HighlevelBaseMutable
---@field Items FRigElementKeyCollection
---@field Bezier FCRFourPointBezier
---@field Alignment EControlRigCurveAlignment
---@field Minimum float
---@field Maximum float
---@field SamplingPrecision int32
---@field PrimaryAxis FVector
---@field SecondaryAxis FVector
---@field PoleVectorPosition FVector
---@field Rotations TArray<FRigUnit_FitChainToCurve_Rotation>
---@field RotationEaseType EControlRigAnimEasingType
---@field Weight float
---@field bPropagateToChildren boolean
---@field DebugSettings FRigUnit_FitChainToCurve_DebugSettings
---@field WorkData FRigUnit_FitChainToCurve_WorkData
local FRigUnit_FitChainToCurvePerItem = {}



---@class FRigUnit_FitChainToCurve_DebugSettings
---@field bEnabled boolean
---@field Scale float
---@field CurveColor FLinearColor
---@field SegmentsColor FLinearColor
---@field WorldOffset FTransform
local FRigUnit_FitChainToCurve_DebugSettings = {}



---@class FRigUnit_FitChainToCurve_Rotation
---@field Rotation FQuat
---@field Ratio float
local FRigUnit_FitChainToCurve_Rotation = {}



---@class FRigUnit_FitChainToCurve_WorkData
---@field ChainLength float
---@field ItemPositions TArray<FVector>
---@field ItemSegments TArray<float>
---@field CurvePositions TArray<FVector>
---@field CurveSegments TArray<float>
---@field CachedItems TArray<FCachedRigElement>
---@field ItemRotationA TArray<int32>
---@field ItemRotationB TArray<int32>
---@field ItemRotationT TArray<float>
---@field ItemLocalTransforms TArray<FTransform>
local FRigUnit_FitChainToCurve_WorkData = {}



---@class FRigUnit_ForLoopCount : FRigUnitMutable
---@field Count int32
---@field Index int32
---@field Ratio float
---@field Continue boolean
---@field Completed FControlRigExecuteContext
local FRigUnit_ForLoopCount = {}



---@class FRigUnit_FramesToSeconds : FRigUnit_AnimBase
---@field Frames float
---@field Seconds float
local FRigUnit_FramesToSeconds = {}



---@class FRigUnit_GetBoneTransform : FRigUnit
---@field Bone FName
---@field SPACE EBoneGetterSetterMode
---@field Transform FTransform
---@field CachedBone FCachedRigElement
local FRigUnit_GetBoneTransform = {}



---@class FRigUnit_GetControlBool : FRigUnit
---@field Control FName
---@field BoolValue boolean
---@field CachedControlIndex FCachedRigElement
local FRigUnit_GetControlBool = {}



---@class FRigUnit_GetControlFloat : FRigUnit
---@field Control FName
---@field FloatValue float
---@field Minimum float
---@field Maximum float
---@field CachedControlIndex FCachedRigElement
local FRigUnit_GetControlFloat = {}



---@class FRigUnit_GetControlInitialTransform : FRigUnit
---@field Control FName
---@field SPACE EBoneGetterSetterMode
---@field Transform FTransform
---@field CachedControlIndex FCachedRigElement
local FRigUnit_GetControlInitialTransform = {}



---@class FRigUnit_GetControlInteger : FRigUnit
---@field Control FName
---@field IntegerValue int32
---@field Minimum int32
---@field Maximum int32
---@field CachedControlIndex FCachedRigElement
local FRigUnit_GetControlInteger = {}



---@class FRigUnit_GetControlRotator : FRigUnit
---@field Control FName
---@field SPACE EBoneGetterSetterMode
---@field Rotator FRotator
---@field Minimum FRotator
---@field Maximum FRotator
---@field CachedControlIndex FCachedRigElement
local FRigUnit_GetControlRotator = {}



---@class FRigUnit_GetControlTransform : FRigUnit
---@field Control FName
---@field SPACE EBoneGetterSetterMode
---@field Transform FTransform
---@field Minimum FTransform
---@field Maximum FTransform
---@field CachedControlIndex FCachedRigElement
local FRigUnit_GetControlTransform = {}



---@class FRigUnit_GetControlVector : FRigUnit
---@field Control FName
---@field SPACE EBoneGetterSetterMode
---@field Vector FVector
---@field Minimum FVector
---@field Maximum FVector
---@field CachedControlIndex FCachedRigElement
local FRigUnit_GetControlVector = {}



---@class FRigUnit_GetControlVector2D : FRigUnit
---@field Control FName
---@field Vector FVector2D
---@field Minimum FVector2D
---@field Maximum FVector2D
---@field CachedControlIndex FCachedRigElement
local FRigUnit_GetControlVector2D = {}



---@class FRigUnit_GetCurveValue : FRigUnit
---@field Curve FName
---@field Value float
---@field CachedCurveIndex FCachedRigElement
local FRigUnit_GetCurveValue = {}



---@class FRigUnit_GetDeltaTime : FRigUnit_AnimBase
---@field Result float
local FRigUnit_GetDeltaTime = {}



---@class FRigUnit_GetInitialBoneTransform : FRigUnit
---@field Bone FName
---@field SPACE EBoneGetterSetterMode
---@field Transform FTransform
---@field CachedBone FCachedRigElement
local FRigUnit_GetInitialBoneTransform = {}



---@class FRigUnit_GetJointTransform : FRigUnitMutable
---@field Joint FName
---@field Type ETransformGetterType
---@field TransformSpace ETransformSpaceMode
---@field BaseTransform FTransform
---@field BaseJoint FName
---@field Output FTransform
local FRigUnit_GetJointTransform = {}



---@class FRigUnit_GetRelativeBoneTransform : FRigUnit
---@field Bone FName
---@field SPACE FName
---@field Transform FTransform
---@field CachedBone FCachedRigElement
---@field CachedSpace FCachedRigElement
local FRigUnit_GetRelativeBoneTransform = {}



---@class FRigUnit_GetRelativeTransform : FRigUnit_BinaryTransformOp
local FRigUnit_GetRelativeTransform = {}


---@class FRigUnit_GetRelativeTransformForItem : FRigUnit
---@field Child FRigElementKey
---@field bChildInitial boolean
---@field Parent FRigElementKey
---@field bParentInitial boolean
---@field RelativeTransform FTransform
---@field CachedChild FCachedRigElement
---@field CachedParent FCachedRigElement
local FRigUnit_GetRelativeTransformForItem = {}



---@class FRigUnit_GetSpaceTransform : FRigUnit
---@field SPACE FName
---@field SpaceType EBoneGetterSetterMode
---@field Transform FTransform
---@field CachedSpaceIndex FCachedRigElement
local FRigUnit_GetSpaceTransform = {}



---@class FRigUnit_GetTransform : FRigUnit
---@field Item FRigElementKey
---@field SPACE EBoneGetterSetterMode
---@field bInitial boolean
---@field Transform FTransform
---@field CachedIndex FCachedRigElement
local FRigUnit_GetTransform = {}



---@class FRigUnit_GetWorldTime : FRigUnit_AnimBase
---@field Year float
---@field Month float
---@field Day float
---@field WeekDay float
---@field Hours float
---@field Minutes float
---@field Seconds float
---@field OverallSeconds float
local FRigUnit_GetWorldTime = {}



---@class FRigUnit_Harmonics_TargetItem
---@field Item FRigElementKey
---@field Ratio float
local FRigUnit_Harmonics_TargetItem = {}



---@class FRigUnit_HierarchyBase : FRigUnit
local FRigUnit_HierarchyBase = {}


---@class FRigUnit_HierarchyGetChildren : FRigUnit_HierarchyBase
---@field Parent FRigElementKey
---@field bIncludeParent boolean
---@field bRecursive boolean
---@field Children FRigElementKeyCollection
---@field CachedParent FCachedRigElement
---@field CachedChildren FRigElementKeyCollection
local FRigUnit_HierarchyGetChildren = {}



---@class FRigUnit_HierarchyGetParent : FRigUnit_HierarchyBase
---@field Child FRigElementKey
---@field Parent FRigElementKey
---@field CachedChild FCachedRigElement
---@field CachedParent FCachedRigElement
local FRigUnit_HierarchyGetParent = {}



---@class FRigUnit_HierarchyGetParents : FRigUnit_HierarchyBase
---@field Child FRigElementKey
---@field bIncludeChild boolean
---@field bReverse boolean
---@field Parents FRigElementKeyCollection
---@field CachedChild FCachedRigElement
---@field CachedParents FRigElementKeyCollection
local FRigUnit_HierarchyGetParents = {}



---@class FRigUnit_HierarchyGetSiblings : FRigUnit_HierarchyBase
---@field Item FRigElementKey
---@field bIncludeItem boolean
---@field Siblings FRigElementKeyCollection
---@field CachedItem FCachedRigElement
---@field CachedSiblings FRigElementKeyCollection
local FRigUnit_HierarchyGetSiblings = {}



---@class FRigUnit_HighlevelBase : FRigUnit
local FRigUnit_HighlevelBase = {}


---@class FRigUnit_HighlevelBaseMutable : FRigUnitMutable
local FRigUnit_HighlevelBaseMutable = {}


---@class FRigUnit_InverseExecution : FRigUnit
---@field ExecuteContext FControlRigExecuteContext
local FRigUnit_InverseExecution = {}



---@class FRigUnit_InverseQuaterion : FRigUnit_UnaryQuaternionOp
local FRigUnit_InverseQuaterion = {}


---@class FRigUnit_IsInteracting : FRigUnit
---@field bIsInteracting boolean
local FRigUnit_IsInteracting = {}



---@class FRigUnit_Item : FRigUnit
---@field Item FRigElementKey
local FRigUnit_Item = {}



---@class FRigUnit_ItemBase : FRigUnit
local FRigUnit_ItemBase = {}


---@class FRigUnit_ItemBaseMutable : FRigUnitMutable
local FRigUnit_ItemBaseMutable = {}


---@class FRigUnit_ItemExists : FRigUnit_ItemBase
---@field Item FRigElementKey
---@field Exists boolean
---@field CachedIndex FCachedRigElement
local FRigUnit_ItemExists = {}



---@class FRigUnit_ItemHarmonics : FRigUnit_HighlevelBaseMutable
---@field Targets TArray<FRigUnit_Harmonics_TargetItem>
---@field WaveSpeed FVector
---@field WaveFrequency FVector
---@field WaveAmplitude FVector
---@field WaveOffset FVector
---@field WaveNoise FVector
---@field WaveEase EControlRigAnimEasingType
---@field WaveMinimum float
---@field WaveMaximum float
---@field RotationOrder EControlRigRotationOrder
---@field WorkData FRigUnit_BoneHarmonics_WorkData
local FRigUnit_ItemHarmonics = {}



---@class FRigUnit_ItemReplace : FRigUnit_ItemBase
---@field Item FRigElementKey
---@field Old FName
---@field New FName
---@field Result FRigElementKey
local FRigUnit_ItemReplace = {}



---@class FRigUnit_KalmanFloat : FRigUnit_SimBase
---@field Value float
---@field BufferSize int32
---@field Result float
---@field Buffer TArray<float>
---@field LastInsertIndex int32
local FRigUnit_KalmanFloat = {}



---@class FRigUnit_KalmanTransform : FRigUnit_SimBase
---@field Value FTransform
---@field BufferSize int32
---@field Result FTransform
---@field Buffer TArray<FTransform>
---@field LastInsertIndex int32
local FRigUnit_KalmanTransform = {}



---@class FRigUnit_KalmanVector : FRigUnit_SimBase
---@field Value FVector
---@field BufferSize int32
---@field Result FVector
---@field Buffer TArray<FVector>
---@field LastInsertIndex int32
local FRigUnit_KalmanVector = {}



---@class FRigUnit_MapRange_Float : FRigUnit
---@field Value float
---@field MinIn float
---@field MaxIn float
---@field MinOut float
---@field MaxOut float
---@field Result float
local FRigUnit_MapRange_Float = {}



---@class FRigUnit_MathBase : FRigUnit
local FRigUnit_MathBase = {}


---@class FRigUnit_MathBoolAnd : FRigUnit_MathBoolBinaryOp
local FRigUnit_MathBoolAnd = {}


---@class FRigUnit_MathBoolBase : FRigUnit_MathBase
local FRigUnit_MathBoolBase = {}


---@class FRigUnit_MathBoolBinaryOp : FRigUnit_MathBoolBase
---@field A boolean
---@field B boolean
---@field Result boolean
local FRigUnit_MathBoolBinaryOp = {}



---@class FRigUnit_MathBoolConstFalse : FRigUnit_MathBoolConstant
local FRigUnit_MathBoolConstFalse = {}


---@class FRigUnit_MathBoolConstTrue : FRigUnit_MathBoolConstant
local FRigUnit_MathBoolConstTrue = {}


---@class FRigUnit_MathBoolConstant : FRigUnit_MathBoolBase
---@field Value boolean
local FRigUnit_MathBoolConstant = {}



---@class FRigUnit_MathBoolEquals : FRigUnit_MathBoolBase
---@field A boolean
---@field B boolean
---@field Result boolean
local FRigUnit_MathBoolEquals = {}



---@class FRigUnit_MathBoolNand : FRigUnit_MathBoolBinaryOp
local FRigUnit_MathBoolNand = {}


---@class FRigUnit_MathBoolNot : FRigUnit_MathBoolUnaryOp
local FRigUnit_MathBoolNot = {}


---@class FRigUnit_MathBoolNotEquals : FRigUnit_MathBoolBase
---@field A boolean
---@field B boolean
---@field Result boolean
local FRigUnit_MathBoolNotEquals = {}



---@class FRigUnit_MathBoolOr : FRigUnit_MathBoolBinaryOp
local FRigUnit_MathBoolOr = {}


---@class FRigUnit_MathBoolUnaryOp : FRigUnit_MathBoolBase
---@field Value boolean
---@field Result boolean
local FRigUnit_MathBoolUnaryOp = {}



---@class FRigUnit_MathColorAdd : FRigUnit_MathColorBinaryOp
local FRigUnit_MathColorAdd = {}


---@class FRigUnit_MathColorBase : FRigUnit_MathBase
local FRigUnit_MathColorBase = {}


---@class FRigUnit_MathColorBinaryOp : FRigUnit_MathColorBase
---@field A FLinearColor
---@field B FLinearColor
---@field Result FLinearColor
local FRigUnit_MathColorBinaryOp = {}



---@class FRigUnit_MathColorFromFloat : FRigUnit_MathColorBase
---@field Value float
---@field Result FLinearColor
local FRigUnit_MathColorFromFloat = {}



---@class FRigUnit_MathColorLerp : FRigUnit_MathColorBase
---@field A FLinearColor
---@field B FLinearColor
---@field T float
---@field Result FLinearColor
local FRigUnit_MathColorLerp = {}



---@class FRigUnit_MathColorMul : FRigUnit_MathColorBinaryOp
local FRigUnit_MathColorMul = {}


---@class FRigUnit_MathColorSub : FRigUnit_MathColorBinaryOp
local FRigUnit_MathColorSub = {}


---@class FRigUnit_MathFloatAbs : FRigUnit_MathFloatUnaryOp
local FRigUnit_MathFloatAbs = {}


---@class FRigUnit_MathFloatAcos : FRigUnit_MathFloatUnaryOp
local FRigUnit_MathFloatAcos = {}


---@class FRigUnit_MathFloatAdd : FRigUnit_MathFloatBinaryOp
local FRigUnit_MathFloatAdd = {}


---@class FRigUnit_MathFloatAsin : FRigUnit_MathFloatUnaryOp
local FRigUnit_MathFloatAsin = {}


---@class FRigUnit_MathFloatAtan : FRigUnit_MathFloatUnaryOp
local FRigUnit_MathFloatAtan = {}


---@class FRigUnit_MathFloatBase : FRigUnit_MathBase
local FRigUnit_MathFloatBase = {}


---@class FRigUnit_MathFloatBinaryOp : FRigUnit_MathFloatBase
---@field A float
---@field B float
---@field Result float
local FRigUnit_MathFloatBinaryOp = {}



---@class FRigUnit_MathFloatCeil : FRigUnit_MathFloatBase
---@field Value float
---@field Result float
---@field Int int32
local FRigUnit_MathFloatCeil = {}



---@class FRigUnit_MathFloatClamp : FRigUnit_MathFloatBase
---@field Value float
---@field Minimum float
---@field Maximum float
---@field Result float
local FRigUnit_MathFloatClamp = {}



---@class FRigUnit_MathFloatConstHalfPi : FRigUnit_MathFloatConstant
local FRigUnit_MathFloatConstHalfPi = {}


---@class FRigUnit_MathFloatConstPi : FRigUnit_MathFloatConstant
local FRigUnit_MathFloatConstPi = {}


---@class FRigUnit_MathFloatConstTwoPi : FRigUnit_MathFloatConstant
local FRigUnit_MathFloatConstTwoPi = {}


---@class FRigUnit_MathFloatConstant : FRigUnit_MathFloatBase
---@field Value float
local FRigUnit_MathFloatConstant = {}



---@class FRigUnit_MathFloatCos : FRigUnit_MathFloatUnaryOp
local FRigUnit_MathFloatCos = {}


---@class FRigUnit_MathFloatDeg : FRigUnit_MathFloatUnaryOp
local FRigUnit_MathFloatDeg = {}


---@class FRigUnit_MathFloatDiv : FRigUnit_MathFloatBinaryOp
local FRigUnit_MathFloatDiv = {}


---@class FRigUnit_MathFloatEquals : FRigUnit_MathFloatBase
---@field A float
---@field B float
---@field Result boolean
local FRigUnit_MathFloatEquals = {}



---@class FRigUnit_MathFloatFloor : FRigUnit_MathFloatBase
---@field Value float
---@field Result float
---@field Int int32
local FRigUnit_MathFloatFloor = {}



---@class FRigUnit_MathFloatGreater : FRigUnit_MathFloatBase
---@field A float
---@field B float
---@field Result boolean
local FRigUnit_MathFloatGreater = {}



---@class FRigUnit_MathFloatGreaterEqual : FRigUnit_MathFloatBase
---@field A float
---@field B float
---@field Result boolean
local FRigUnit_MathFloatGreaterEqual = {}



---@class FRigUnit_MathFloatIsNearlyEqual : FRigUnit_MathFloatBase
---@field A float
---@field B float
---@field Tolerance float
---@field Result boolean
local FRigUnit_MathFloatIsNearlyEqual = {}



---@class FRigUnit_MathFloatIsNearlyZero : FRigUnit_MathFloatBase
---@field Value float
---@field Tolerance float
---@field Result boolean
local FRigUnit_MathFloatIsNearlyZero = {}



---@class FRigUnit_MathFloatLawOfCosine : FRigUnit_MathFloatBase
---@field A float
---@field B float
---@field C float
---@field AlphaAngle float
---@field BetaAngle float
---@field GammaAngle float
---@field bValid boolean
local FRigUnit_MathFloatLawOfCosine = {}



---@class FRigUnit_MathFloatLerp : FRigUnit_MathFloatBase
---@field A float
---@field B float
---@field T float
---@field Result float
local FRigUnit_MathFloatLerp = {}



---@class FRigUnit_MathFloatLess : FRigUnit_MathFloatBase
---@field A float
---@field B float
---@field Result boolean
local FRigUnit_MathFloatLess = {}



---@class FRigUnit_MathFloatLessEqual : FRigUnit_MathFloatBase
---@field A float
---@field B float
---@field Result boolean
local FRigUnit_MathFloatLessEqual = {}



---@class FRigUnit_MathFloatMax : FRigUnit_MathFloatBinaryOp
local FRigUnit_MathFloatMax = {}


---@class FRigUnit_MathFloatMin : FRigUnit_MathFloatBinaryOp
local FRigUnit_MathFloatMin = {}


---@class FRigUnit_MathFloatMod : FRigUnit_MathFloatBinaryOp
local FRigUnit_MathFloatMod = {}


---@class FRigUnit_MathFloatMul : FRigUnit_MathFloatBinaryOp
local FRigUnit_MathFloatMul = {}


---@class FRigUnit_MathFloatNegate : FRigUnit_MathFloatUnaryOp
local FRigUnit_MathFloatNegate = {}


---@class FRigUnit_MathFloatNotEquals : FRigUnit_MathFloatBase
---@field A float
---@field B float
---@field Result boolean
local FRigUnit_MathFloatNotEquals = {}



---@class FRigUnit_MathFloatPow : FRigUnit_MathFloatBinaryOp
local FRigUnit_MathFloatPow = {}


---@class FRigUnit_MathFloatRad : FRigUnit_MathFloatUnaryOp
local FRigUnit_MathFloatRad = {}


---@class FRigUnit_MathFloatRemap : FRigUnit_MathFloatBase
---@field Value float
---@field SourceMinimum float
---@field SourceMaximum float
---@field TargetMinimum float
---@field TargetMaximum float
---@field bClamp boolean
---@field Result float
local FRigUnit_MathFloatRemap = {}



---@class FRigUnit_MathFloatRound : FRigUnit_MathFloatBase
---@field Value float
---@field Result float
---@field Int int32
local FRigUnit_MathFloatRound = {}



---@class FRigUnit_MathFloatSelectBool : FRigUnit_MathFloatBase
---@field Condition boolean
---@field IfTrue float
---@field IfFalse float
---@field Result float
local FRigUnit_MathFloatSelectBool = {}



---@class FRigUnit_MathFloatSign : FRigUnit_MathFloatUnaryOp
local FRigUnit_MathFloatSign = {}


---@class FRigUnit_MathFloatSin : FRigUnit_MathFloatUnaryOp
local FRigUnit_MathFloatSin = {}


---@class FRigUnit_MathFloatSqrt : FRigUnit_MathFloatUnaryOp
local FRigUnit_MathFloatSqrt = {}


---@class FRigUnit_MathFloatSub : FRigUnit_MathFloatBinaryOp
local FRigUnit_MathFloatSub = {}


---@class FRigUnit_MathFloatTan : FRigUnit_MathFloatUnaryOp
local FRigUnit_MathFloatTan = {}


---@class FRigUnit_MathFloatToInt : FRigUnit_MathFloatBase
---@field Value float
---@field Result int32
local FRigUnit_MathFloatToInt = {}



---@class FRigUnit_MathFloatUnaryOp : FRigUnit_MathFloatBase
---@field Value float
---@field Result float
local FRigUnit_MathFloatUnaryOp = {}



---@class FRigUnit_MathIntAbs : FRigUnit_MathIntUnaryOp
local FRigUnit_MathIntAbs = {}


---@class FRigUnit_MathIntAdd : FRigUnit_MathIntBinaryOp
local FRigUnit_MathIntAdd = {}


---@class FRigUnit_MathIntBase : FRigUnit_MathBase
local FRigUnit_MathIntBase = {}


---@class FRigUnit_MathIntBinaryOp : FRigUnit_MathIntBase
---@field A int32
---@field B int32
---@field Result int32
local FRigUnit_MathIntBinaryOp = {}



---@class FRigUnit_MathIntClamp : FRigUnit_MathIntBase
---@field Value int32
---@field Minimum int32
---@field Maximum int32
---@field Result int32
local FRigUnit_MathIntClamp = {}



---@class FRigUnit_MathIntDiv : FRigUnit_MathIntBinaryOp
local FRigUnit_MathIntDiv = {}


---@class FRigUnit_MathIntEquals : FRigUnit_MathIntBase
---@field A int32
---@field B int32
---@field Result boolean
local FRigUnit_MathIntEquals = {}



---@class FRigUnit_MathIntGreater : FRigUnit_MathIntBase
---@field A int32
---@field B int32
---@field Result boolean
local FRigUnit_MathIntGreater = {}



---@class FRigUnit_MathIntGreaterEqual : FRigUnit_MathIntBase
---@field A int32
---@field B int32
---@field Result boolean
local FRigUnit_MathIntGreaterEqual = {}



---@class FRigUnit_MathIntLess : FRigUnit_MathIntBase
---@field A int32
---@field B int32
---@field Result boolean
local FRigUnit_MathIntLess = {}



---@class FRigUnit_MathIntLessEqual : FRigUnit_MathIntBase
---@field A int32
---@field B int32
---@field Result boolean
local FRigUnit_MathIntLessEqual = {}



---@class FRigUnit_MathIntMax : FRigUnit_MathIntBinaryOp
local FRigUnit_MathIntMax = {}


---@class FRigUnit_MathIntMin : FRigUnit_MathIntBinaryOp
local FRigUnit_MathIntMin = {}


---@class FRigUnit_MathIntMod : FRigUnit_MathIntBinaryOp
local FRigUnit_MathIntMod = {}


---@class FRigUnit_MathIntMul : FRigUnit_MathIntBinaryOp
local FRigUnit_MathIntMul = {}


---@class FRigUnit_MathIntNegate : FRigUnit_MathIntUnaryOp
local FRigUnit_MathIntNegate = {}


---@class FRigUnit_MathIntNotEquals : FRigUnit_MathIntBase
---@field A int32
---@field B int32
---@field Result boolean
local FRigUnit_MathIntNotEquals = {}



---@class FRigUnit_MathIntPow : FRigUnit_MathIntBinaryOp
local FRigUnit_MathIntPow = {}


---@class FRigUnit_MathIntSign : FRigUnit_MathIntUnaryOp
local FRigUnit_MathIntSign = {}


---@class FRigUnit_MathIntSub : FRigUnit_MathIntBinaryOp
local FRigUnit_MathIntSub = {}


---@class FRigUnit_MathIntToFloat : FRigUnit_MathIntBase
---@field Value int32
---@field Result float
local FRigUnit_MathIntToFloat = {}



---@class FRigUnit_MathIntUnaryOp : FRigUnit_MathIntBase
---@field Value int32
---@field Result int32
local FRigUnit_MathIntUnaryOp = {}



---@class FRigUnit_MathIntersectPlane : FRigUnit_MathVectorBase
---@field Start FVector
---@field Direction FVector
---@field PlanePoint FVector
---@field PlaneNormal FVector
---@field Result FVector
---@field Distance float
local FRigUnit_MathIntersectPlane = {}



---@class FRigUnit_MathQuaternionBase : FRigUnit_MathBase
local FRigUnit_MathQuaternionBase = {}


---@class FRigUnit_MathQuaternionBinaryOp : FRigUnit_MathQuaternionBase
---@field A FQuat
---@field B FQuat
---@field Result FQuat
local FRigUnit_MathQuaternionBinaryOp = {}



---@class FRigUnit_MathQuaternionDot : FRigUnit_MathQuaternionBase
---@field A FQuat
---@field B FQuat
---@field Result float
local FRigUnit_MathQuaternionDot = {}



---@class FRigUnit_MathQuaternionEquals : FRigUnit_MathQuaternionBase
---@field A FQuat
---@field B FQuat
---@field Result boolean
local FRigUnit_MathQuaternionEquals = {}



---@class FRigUnit_MathQuaternionFromAxisAndAngle : FRigUnit_MathQuaternionBase
---@field Axis FVector
---@field Angle float
---@field Result FQuat
local FRigUnit_MathQuaternionFromAxisAndAngle = {}



---@class FRigUnit_MathQuaternionFromEuler : FRigUnit_MathQuaternionBase
---@field Euler FVector
---@field RotationOrder EControlRigRotationOrder
---@field Result FQuat
local FRigUnit_MathQuaternionFromEuler = {}



---@class FRigUnit_MathQuaternionFromRotator : FRigUnit_MathQuaternionBase
---@field Rotator FRotator
---@field Result FQuat
local FRigUnit_MathQuaternionFromRotator = {}



---@class FRigUnit_MathQuaternionFromTwoVectors : FRigUnit_MathQuaternionBase
---@field A FVector
---@field B FVector
---@field Result FQuat
local FRigUnit_MathQuaternionFromTwoVectors = {}



---@class FRigUnit_MathQuaternionGetAxis : FRigUnit_MathQuaternionBase
---@field Quaternion FQuat
---@field Axis EAxis::Type
---@field Result FVector
local FRigUnit_MathQuaternionGetAxis = {}



---@class FRigUnit_MathQuaternionInverse : FRigUnit_MathQuaternionUnaryOp
local FRigUnit_MathQuaternionInverse = {}


---@class FRigUnit_MathQuaternionMul : FRigUnit_MathQuaternionBinaryOp
local FRigUnit_MathQuaternionMul = {}


---@class FRigUnit_MathQuaternionNotEquals : FRigUnit_MathQuaternionBase
---@field A FQuat
---@field B FQuat
---@field Result boolean
local FRigUnit_MathQuaternionNotEquals = {}



---@class FRigUnit_MathQuaternionRotateVector : FRigUnit_MathQuaternionBase
---@field Quaternion FQuat
---@field Vector FVector
---@field Result FVector
local FRigUnit_MathQuaternionRotateVector = {}



---@class FRigUnit_MathQuaternionRotationOrder : FRigUnit_MathBase
---@field RotationOrder EControlRigRotationOrder
local FRigUnit_MathQuaternionRotationOrder = {}



---@class FRigUnit_MathQuaternionScale : FRigUnit_MathQuaternionBase
---@field Value FQuat
---@field Scale float
local FRigUnit_MathQuaternionScale = {}



---@class FRigUnit_MathQuaternionSelectBool : FRigUnit_MathQuaternionBase
---@field Condition boolean
---@field IfTrue FQuat
---@field IfFalse FQuat
---@field Result FQuat
local FRigUnit_MathQuaternionSelectBool = {}



---@class FRigUnit_MathQuaternionSlerp : FRigUnit_MathQuaternionBase
---@field A FQuat
---@field B FQuat
---@field T float
---@field Result FQuat
local FRigUnit_MathQuaternionSlerp = {}



---@class FRigUnit_MathQuaternionSwingTwist : FRigUnit_MathQuaternionBase
---@field Input FQuat
---@field TwistAxis FVector
---@field Swing FQuat
---@field Twist FQuat
local FRigUnit_MathQuaternionSwingTwist = {}



---@class FRigUnit_MathQuaternionToAxisAndAngle : FRigUnit_MathQuaternionBase
---@field Value FQuat
---@field Axis FVector
---@field Angle float
local FRigUnit_MathQuaternionToAxisAndAngle = {}



---@class FRigUnit_MathQuaternionToEuler : FRigUnit_MathQuaternionBase
---@field Value FQuat
---@field RotationOrder EControlRigRotationOrder
---@field Result FVector
local FRigUnit_MathQuaternionToEuler = {}



---@class FRigUnit_MathQuaternionToRotator : FRigUnit_MathQuaternionBase
---@field Value FQuat
---@field Result FRotator
local FRigUnit_MathQuaternionToRotator = {}



---@class FRigUnit_MathQuaternionUnaryOp : FRigUnit_MathQuaternionBase
---@field Value FQuat
---@field Result FQuat
local FRigUnit_MathQuaternionUnaryOp = {}



---@class FRigUnit_MathQuaternionUnit : FRigUnit_MathQuaternionUnaryOp
local FRigUnit_MathQuaternionUnit = {}


---@class FRigUnit_MathRBFInterpolateBase : FRigUnit_MathBase
local FRigUnit_MathRBFInterpolateBase = {}


---@class FRigUnit_MathRBFInterpolateQuatBase : FRigUnit_MathRBFInterpolateBase
---@field Input FQuat
---@field DistanceFunction ERBFQuatDistanceType
---@field SmoothingFunction ERBFKernelType
---@field SmoothingAngle float
---@field bNormalizeOutput boolean
---@field TwistAxis FVector
---@field WorkData FRigUnit_MathRBFInterpolateQuatWorkData
local FRigUnit_MathRBFInterpolateQuatBase = {}



---@class FRigUnit_MathRBFInterpolateQuatColor : FRigUnit_MathRBFInterpolateQuatBase
---@field Targets TArray<FMathRBFInterpolateQuatColor_Target>
---@field Output FLinearColor
local FRigUnit_MathRBFInterpolateQuatColor = {}



---@class FRigUnit_MathRBFInterpolateQuatFloat : FRigUnit_MathRBFInterpolateQuatBase
---@field Targets TArray<FMathRBFInterpolateQuatFloat_Target>
---@field Output float
local FRigUnit_MathRBFInterpolateQuatFloat = {}



---@class FRigUnit_MathRBFInterpolateQuatQuat : FRigUnit_MathRBFInterpolateQuatBase
---@field Targets TArray<FMathRBFInterpolateQuatQuat_Target>
---@field Output FQuat
local FRigUnit_MathRBFInterpolateQuatQuat = {}



---@class FRigUnit_MathRBFInterpolateQuatVector : FRigUnit_MathRBFInterpolateQuatBase
---@field Targets TArray<FMathRBFInterpolateQuatVector_Target>
---@field Output FVector
local FRigUnit_MathRBFInterpolateQuatVector = {}



---@class FRigUnit_MathRBFInterpolateQuatWorkData
local FRigUnit_MathRBFInterpolateQuatWorkData = {}


---@class FRigUnit_MathRBFInterpolateQuatXform : FRigUnit_MathRBFInterpolateQuatBase
---@field Targets TArray<FMathRBFInterpolateQuatXform_Target>
---@field Output FTransform
local FRigUnit_MathRBFInterpolateQuatXform = {}



---@class FRigUnit_MathRBFInterpolateVectorBase : FRigUnit_MathRBFInterpolateBase
---@field Input FVector
---@field DistanceFunction ERBFVectorDistanceType
---@field SmoothingFunction ERBFKernelType
---@field SmoothingRadius float
---@field bNormalizeOutput boolean
---@field WorkData FRigUnit_MathRBFInterpolateVectorWorkData
local FRigUnit_MathRBFInterpolateVectorBase = {}



---@class FRigUnit_MathRBFInterpolateVectorColor : FRigUnit_MathRBFInterpolateVectorBase
---@field Targets TArray<FMathRBFInterpolateVectorColor_Target>
---@field Output FLinearColor
local FRigUnit_MathRBFInterpolateVectorColor = {}



---@class FRigUnit_MathRBFInterpolateVectorFloat : FRigUnit_MathRBFInterpolateVectorBase
---@field Targets TArray<FMathRBFInterpolateVectorFloat_Target>
---@field Output float
local FRigUnit_MathRBFInterpolateVectorFloat = {}



---@class FRigUnit_MathRBFInterpolateVectorQuat : FRigUnit_MathRBFInterpolateVectorBase
---@field Targets TArray<FMathRBFInterpolateVectorQuat_Target>
---@field Output FQuat
local FRigUnit_MathRBFInterpolateVectorQuat = {}



---@class FRigUnit_MathRBFInterpolateVectorVector : FRigUnit_MathRBFInterpolateVectorBase
---@field Targets TArray<FMathRBFInterpolateVectorVector_Target>
---@field Output FVector
local FRigUnit_MathRBFInterpolateVectorVector = {}



---@class FRigUnit_MathRBFInterpolateVectorWorkData
local FRigUnit_MathRBFInterpolateVectorWorkData = {}


---@class FRigUnit_MathRBFInterpolateVectorXform : FRigUnit_MathRBFInterpolateVectorBase
---@field Targets TArray<FMathRBFInterpolateVectorXform_Target>
---@field Output FTransform
local FRigUnit_MathRBFInterpolateVectorXform = {}



---@class FRigUnit_MathTransformBase : FRigUnit_MathBase
local FRigUnit_MathTransformBase = {}


---@class FRigUnit_MathTransformBinaryOp : FRigUnit_MathTransformBase
---@field A FTransform
---@field B FTransform
---@field Result FTransform
local FRigUnit_MathTransformBinaryOp = {}



---@class FRigUnit_MathTransformClampSpatially : FRigUnit_MathTransformBase
---@field Value FTransform
---@field Axis EAxis::Type
---@field Type EControlRigClampSpatialMode::Type
---@field Minimum float
---@field Maximum float
---@field SPACE FTransform
---@field bDrawDebug boolean
---@field DebugColor FLinearColor
---@field DebugThickness float
---@field Result FTransform
local FRigUnit_MathTransformClampSpatially = {}



---@class FRigUnit_MathTransformFromEulerTransform : FRigUnit_MathTransformBase
---@field EulerTransform FEulerTransform
---@field Result FTransform
local FRigUnit_MathTransformFromEulerTransform = {}



---@class FRigUnit_MathTransformFromSRT : FRigUnit_MathTransformBase
---@field Location FVector
---@field Rotation FVector
---@field RotationOrder EControlRigRotationOrder
---@field Scale FVector
---@field Transform FTransform
---@field EulerTransform FEulerTransform
local FRigUnit_MathTransformFromSRT = {}



---@class FRigUnit_MathTransformInverse : FRigUnit_MathTransformUnaryOp
local FRigUnit_MathTransformInverse = {}


---@class FRigUnit_MathTransformLerp : FRigUnit_MathTransformBase
---@field A FTransform
---@field B FTransform
---@field T float
---@field Result FTransform
local FRigUnit_MathTransformLerp = {}



---@class FRigUnit_MathTransformMakeAbsolute : FRigUnit_MathTransformBase
---@field Local FTransform
---@field Parent FTransform
---@field Global FTransform
local FRigUnit_MathTransformMakeAbsolute = {}



---@class FRigUnit_MathTransformMakeRelative : FRigUnit_MathTransformBase
---@field Global FTransform
---@field Parent FTransform
---@field Local FTransform
local FRigUnit_MathTransformMakeRelative = {}



---@class FRigUnit_MathTransformMul : FRigUnit_MathTransformBinaryOp
local FRigUnit_MathTransformMul = {}


---@class FRigUnit_MathTransformRotateVector : FRigUnit_MathTransformBase
---@field Transform FTransform
---@field Direction FVector
---@field Result FVector
local FRigUnit_MathTransformRotateVector = {}



---@class FRigUnit_MathTransformSelectBool : FRigUnit_MathTransformBase
---@field Condition boolean
---@field IfTrue FTransform
---@field IfFalse FTransform
---@field Result FTransform
local FRigUnit_MathTransformSelectBool = {}



---@class FRigUnit_MathTransformToEulerTransform : FRigUnit_MathTransformBase
---@field Value FTransform
---@field Result FEulerTransform
local FRigUnit_MathTransformToEulerTransform = {}



---@class FRigUnit_MathTransformTransformVector : FRigUnit_MathTransformBase
---@field Transform FTransform
---@field Location FVector
---@field Result FVector
local FRigUnit_MathTransformTransformVector = {}



---@class FRigUnit_MathTransformUnaryOp : FRigUnit_MathTransformBase
---@field Value FTransform
---@field Result FTransform
local FRigUnit_MathTransformUnaryOp = {}



---@class FRigUnit_MathVectorAbs : FRigUnit_MathVectorUnaryOp
local FRigUnit_MathVectorAbs = {}


---@class FRigUnit_MathVectorAdd : FRigUnit_MathVectorBinaryOp
local FRigUnit_MathVectorAdd = {}


---@class FRigUnit_MathVectorAngle : FRigUnit_MathVectorBase
---@field A FVector
---@field B FVector
---@field Result float
local FRigUnit_MathVectorAngle = {}



---@class FRigUnit_MathVectorBase : FRigUnit_MathBase
local FRigUnit_MathVectorBase = {}


---@class FRigUnit_MathVectorBezierFourPoint : FRigUnit_MathVectorBase
---@field Bezier FCRFourPointBezier
---@field T float
---@field Result FVector
---@field Tangent FVector
local FRigUnit_MathVectorBezierFourPoint = {}



---@class FRigUnit_MathVectorBinaryOp : FRigUnit_MathVectorBase
---@field A FVector
---@field B FVector
---@field Result FVector
local FRigUnit_MathVectorBinaryOp = {}



---@class FRigUnit_MathVectorCeil : FRigUnit_MathVectorUnaryOp
local FRigUnit_MathVectorCeil = {}


---@class FRigUnit_MathVectorClamp : FRigUnit_MathVectorBase
---@field Value FVector
---@field Minimum FVector
---@field Maximum FVector
---@field Result FVector
local FRigUnit_MathVectorClamp = {}



---@class FRigUnit_MathVectorClampLength : FRigUnit_MathVectorBase
---@field Value FVector
---@field MinimumLength float
---@field MaximumLength float
---@field Result FVector
local FRigUnit_MathVectorClampLength = {}



---@class FRigUnit_MathVectorClampSpatially : FRigUnit_MathVectorBase
---@field Value FVector
---@field Axis EAxis::Type
---@field Type EControlRigClampSpatialMode::Type
---@field Minimum float
---@field Maximum float
---@field SPACE FTransform
---@field bDrawDebug boolean
---@field DebugColor FLinearColor
---@field DebugThickness float
---@field Result FVector
local FRigUnit_MathVectorClampSpatially = {}



---@class FRigUnit_MathVectorCross : FRigUnit_MathVectorBinaryOp
local FRigUnit_MathVectorCross = {}


---@class FRigUnit_MathVectorDeg : FRigUnit_MathVectorUnaryOp
local FRigUnit_MathVectorDeg = {}


---@class FRigUnit_MathVectorDistance : FRigUnit_MathVectorBase
---@field A FVector
---@field B FVector
---@field Result float
local FRigUnit_MathVectorDistance = {}



---@class FRigUnit_MathVectorDiv : FRigUnit_MathVectorBinaryOp
local FRigUnit_MathVectorDiv = {}


---@class FRigUnit_MathVectorDot : FRigUnit_MathVectorBase
---@field A FVector
---@field B FVector
---@field Result float
local FRigUnit_MathVectorDot = {}



---@class FRigUnit_MathVectorEquals : FRigUnit_MathVectorBase
---@field A FVector
---@field B FVector
---@field Result boolean
local FRigUnit_MathVectorEquals = {}



---@class FRigUnit_MathVectorFloor : FRigUnit_MathVectorUnaryOp
local FRigUnit_MathVectorFloor = {}


---@class FRigUnit_MathVectorFromFloat : FRigUnit_MathVectorBase
---@field Value float
---@field Result FVector
local FRigUnit_MathVectorFromFloat = {}



---@class FRigUnit_MathVectorIsNearlyEqual : FRigUnit_MathVectorBase
---@field A FVector
---@field B FVector
---@field Tolerance float
---@field Result boolean
local FRigUnit_MathVectorIsNearlyEqual = {}



---@class FRigUnit_MathVectorIsNearlyZero : FRigUnit_MathVectorBase
---@field Value FVector
---@field Tolerance float
---@field Result boolean
local FRigUnit_MathVectorIsNearlyZero = {}



---@class FRigUnit_MathVectorLength : FRigUnit_MathVectorBase
---@field Value FVector
---@field Result float
local FRigUnit_MathVectorLength = {}



---@class FRigUnit_MathVectorLengthSquared : FRigUnit_MathVectorBase
---@field Value FVector
---@field Result float
local FRigUnit_MathVectorLengthSquared = {}



---@class FRigUnit_MathVectorLerp : FRigUnit_MathVectorBase
---@field A FVector
---@field B FVector
---@field T float
---@field Result FVector
local FRigUnit_MathVectorLerp = {}



---@class FRigUnit_MathVectorMakeBezierFourPoint : FRigUnit_MathVectorBase
---@field Bezier FCRFourPointBezier
local FRigUnit_MathVectorMakeBezierFourPoint = {}



---@class FRigUnit_MathVectorMax : FRigUnit_MathVectorBinaryOp
local FRigUnit_MathVectorMax = {}


---@class FRigUnit_MathVectorMin : FRigUnit_MathVectorBinaryOp
local FRigUnit_MathVectorMin = {}


---@class FRigUnit_MathVectorMirror : FRigUnit_MathVectorBase
---@field Value FVector
---@field Normal FVector
---@field Result FVector
local FRigUnit_MathVectorMirror = {}



---@class FRigUnit_MathVectorMod : FRigUnit_MathVectorBinaryOp
local FRigUnit_MathVectorMod = {}


---@class FRigUnit_MathVectorMul : FRigUnit_MathVectorBinaryOp
local FRigUnit_MathVectorMul = {}


---@class FRigUnit_MathVectorNegate : FRigUnit_MathVectorUnaryOp
local FRigUnit_MathVectorNegate = {}


---@class FRigUnit_MathVectorNotEquals : FRigUnit_MathVectorBase
---@field A FVector
---@field B FVector
---@field Result boolean
local FRigUnit_MathVectorNotEquals = {}



---@class FRigUnit_MathVectorOrthogonal : FRigUnit_MathVectorBase
---@field A FVector
---@field B FVector
---@field Result boolean
local FRigUnit_MathVectorOrthogonal = {}



---@class FRigUnit_MathVectorParallel : FRigUnit_MathVectorBase
---@field A FVector
---@field B FVector
---@field Result boolean
local FRigUnit_MathVectorParallel = {}



---@class FRigUnit_MathVectorRad : FRigUnit_MathVectorUnaryOp
local FRigUnit_MathVectorRad = {}


---@class FRigUnit_MathVectorRemap : FRigUnit_MathVectorBase
---@field Value FVector
---@field SourceMinimum FVector
---@field SourceMaximum FVector
---@field TargetMinimum FVector
---@field TargetMaximum FVector
---@field bClamp boolean
---@field Result FVector
local FRigUnit_MathVectorRemap = {}



---@class FRigUnit_MathVectorRound : FRigUnit_MathVectorUnaryOp
local FRigUnit_MathVectorRound = {}


---@class FRigUnit_MathVectorScale : FRigUnit_MathVectorBase
---@field Value FVector
---@field Factor float
---@field Result FVector
local FRigUnit_MathVectorScale = {}



---@class FRigUnit_MathVectorSelectBool : FRigUnit_MathVectorBase
---@field Condition boolean
---@field IfTrue FVector
---@field IfFalse FVector
---@field Result FVector
local FRigUnit_MathVectorSelectBool = {}



---@class FRigUnit_MathVectorSetLength : FRigUnit_MathVectorBase
---@field Value FVector
---@field Length float
---@field Result FVector
local FRigUnit_MathVectorSetLength = {}



---@class FRigUnit_MathVectorSign : FRigUnit_MathVectorUnaryOp
local FRigUnit_MathVectorSign = {}


---@class FRigUnit_MathVectorSub : FRigUnit_MathVectorBinaryOp
local FRigUnit_MathVectorSub = {}


---@class FRigUnit_MathVectorUnaryOp : FRigUnit_MathVectorBase
---@field Value FVector
---@field Result FVector
local FRigUnit_MathVectorUnaryOp = {}



---@class FRigUnit_MathVectorUnit : FRigUnit_MathVectorUnaryOp
local FRigUnit_MathVectorUnit = {}


---@class FRigUnit_ModifyBoneTransforms : FRigUnit_HighlevelBaseMutable
---@field BoneToModify TArray<FRigUnit_ModifyBoneTransforms_PerBone>
---@field Weight float
---@field WeightMinimum float
---@field WeightMaximum float
---@field Mode EControlRigModifyBoneMode
---@field WorkData FRigUnit_ModifyBoneTransforms_WorkData
local FRigUnit_ModifyBoneTransforms = {}



---@class FRigUnit_ModifyBoneTransforms_PerBone
---@field Bone FName
---@field Transform FTransform
local FRigUnit_ModifyBoneTransforms_PerBone = {}



---@class FRigUnit_ModifyBoneTransforms_WorkData : FRigUnit_ModifyTransforms_WorkData
local FRigUnit_ModifyBoneTransforms_WorkData = {}


---@class FRigUnit_ModifyTransforms : FRigUnit_HighlevelBaseMutable
---@field ItemToModify TArray<FRigUnit_ModifyTransforms_PerItem>
---@field Weight float
---@field WeightMinimum float
---@field WeightMaximum float
---@field Mode EControlRigModifyBoneMode
---@field WorkData FRigUnit_ModifyTransforms_WorkData
local FRigUnit_ModifyTransforms = {}



---@class FRigUnit_ModifyTransforms_PerItem
---@field Item FRigElementKey
---@field Transform FTransform
local FRigUnit_ModifyTransforms_PerItem = {}



---@class FRigUnit_ModifyTransforms_WorkData
---@field CachedItems TArray<FCachedRigElement>
local FRigUnit_ModifyTransforms_WorkData = {}



---@class FRigUnit_MultiFABRIK : FRigUnit_HighlevelBaseMutable
---@field RootBone FName
---@field Effectors TArray<FRigUnit_MultiFABRIK_EndEffector>
---@field Precision float
---@field bPropagateToChildren boolean
---@field MaxIterations int32
---@field WorkData FRigUnit_MultiFABRIK_WorkData
local FRigUnit_MultiFABRIK = {}



---@class FRigUnit_MultiFABRIK_EndEffector
---@field Bone FName
---@field Location FVector
local FRigUnit_MultiFABRIK_EndEffector = {}



---@class FRigUnit_MultiFABRIK_WorkData
local FRigUnit_MultiFABRIK_WorkData = {}


---@class FRigUnit_MultiplyQuaternion : FRigUnit_BinaryQuaternionOp
local FRigUnit_MultiplyQuaternion = {}


---@class FRigUnit_MultiplyTransform : FRigUnit_BinaryTransformOp
local FRigUnit_MultiplyTransform = {}


---@class FRigUnit_Multiply_FloatFloat : FRigUnit_BinaryFloatOp
local FRigUnit_Multiply_FloatFloat = {}


---@class FRigUnit_Multiply_VectorVector : FRigUnit_BinaryVectorOp
local FRigUnit_Multiply_VectorVector = {}


---@class FRigUnit_NameBase : FRigUnit
local FRigUnit_NameBase = {}


---@class FRigUnit_NameConcat : FRigUnit_NameBase
---@field A FName
---@field B FName
---@field Result FName
local FRigUnit_NameConcat = {}



---@class FRigUnit_NameReplace : FRigUnit_NameBase
---@field Name FName
---@field Old FName
---@field New FName
---@field Result FName
local FRigUnit_NameReplace = {}



---@class FRigUnit_NameTruncate : FRigUnit_NameBase
---@field Name FName
---@field Count int32
---@field FromEnd boolean
---@field Remainder FName
---@field Chopped FName
local FRigUnit_NameTruncate = {}



---@class FRigUnit_NoiseFloat : FRigUnit_MathBase
---@field Value float
---@field Speed float
---@field Frequency float
---@field Minimum float
---@field Maximum float
---@field Result float
---@field Time float
local FRigUnit_NoiseFloat = {}



---@class FRigUnit_NoiseVector : FRigUnit_MathBase
---@field Position FVector
---@field Speed FVector
---@field Frequency FVector
---@field Minimum float
---@field Maximum float
---@field Result FVector
---@field Time FVector
local FRigUnit_NoiseVector = {}



---@class FRigUnit_OffsetTransformForItem : FRigUnitMutable
---@field Item FRigElementKey
---@field OffsetTransform FTransform
---@field Weight float
---@field bPropagateToChildren boolean
---@field CachedIndex FCachedRigElement
local FRigUnit_OffsetTransformForItem = {}



---@class FRigUnit_ParentSwitchConstraint : FRigUnitMutable
---@field Subject FRigElementKey
---@field ParentIndex int32
---@field Parents FRigElementKeyCollection
---@field InitialGlobalTransform FTransform
---@field Weight float
---@field Transform FTransform
---@field Switched boolean
---@field CachedSubject FCachedRigElement
---@field CachedParent FCachedRigElement
---@field RelativeOffset FTransform
local FRigUnit_ParentSwitchConstraint = {}



---@class FRigUnit_PointSimulation : FRigUnit_SimBaseMutable
---@field Points TArray<FCRSimPoint>
---@field Links TArray<FCRSimLinearSpring>
---@field Forces TArray<FCRSimPointForce>
---@field CollisionVolumes TArray<FCRSimSoftCollision>
---@field SimulatedStepsPerSecond float
---@field IntegratorType ECRSimPointIntegrateType
---@field VerletBlend float
---@field BoneTargets TArray<FRigUnit_PointSimulation_BoneTarget>
---@field bLimitLocalPosition boolean
---@field bPropagateToChildren boolean
---@field PrimaryAimAxis FVector
---@field SecondaryAimAxis FVector
---@field DebugSettings FRigUnit_PointSimulation_DebugSettings
---@field Bezier FCRFourPointBezier
---@field WorkData FRigUnit_PointSimulation_WorkData
local FRigUnit_PointSimulation = {}



---@class FRigUnit_PointSimulation_BoneTarget
---@field Bone FName
---@field TranslationPoint int32
---@field PrimaryAimPoint int32
---@field SecondaryAimPoint int32
local FRigUnit_PointSimulation_BoneTarget = {}



---@class FRigUnit_PointSimulation_DebugSettings
---@field bEnabled boolean
---@field Scale float
---@field CollisionScale float
---@field bDrawPointsAsSpheres boolean
---@field Color FLinearColor
---@field WorldOffset FTransform
local FRigUnit_PointSimulation_DebugSettings = {}



---@class FRigUnit_PointSimulation_WorkData
---@field Simulation FCRSimPointContainer
---@field BoneIndices TArray<FCachedRigElement>
local FRigUnit_PointSimulation_WorkData = {}



---@class FRigUnit_PrepareForExecution : FRigUnit
---@field ExecuteContext FControlRigExecuteContext
local FRigUnit_PrepareForExecution = {}



---@class FRigUnit_ProjectTransformToNewParent : FRigUnit
---@field Child FRigElementKey
---@field bChildInitial boolean
---@field OldParent FRigElementKey
---@field bOldParentInitial boolean
---@field NewParent FRigElementKey
---@field bNewParentInitial boolean
---@field Transform FTransform
---@field CachedChild FCachedRigElement
---@field CachedOldParent FCachedRigElement
---@field CachedNewParent FCachedRigElement
local FRigUnit_ProjectTransformToNewParent = {}



---@class FRigUnit_PropagateTransform : FRigUnitMutable
---@field Item FRigElementKey
---@field bRecomputeGlobal boolean
---@field bApplyToChildren boolean
---@field bRecursive boolean
---@field CachedIndex FCachedRigElement
local FRigUnit_PropagateTransform = {}



---@class FRigUnit_QuaternionFromAxisAndAngle : FRigUnit
---@field Axis FVector
---@field Angle float
---@field Result FQuat
local FRigUnit_QuaternionFromAxisAndAngle = {}



---@class FRigUnit_QuaternionToAngle : FRigUnit
---@field Axis FVector
---@field Argument FQuat
---@field Angle float
local FRigUnit_QuaternionToAngle = {}



---@class FRigUnit_QuaternionToAxisAndAngle : FRigUnit
---@field Argument FQuat
---@field Axis FVector
---@field Angle float
local FRigUnit_QuaternionToAxisAndAngle = {}



---@class FRigUnit_RandomFloat : FRigUnit_MathBase
---@field Seed int32
---@field Minimum float
---@field Maximum float
---@field Duration float
---@field Result float
---@field LastResult float
---@field LastSeed int32
---@field TimeLeft float
local FRigUnit_RandomFloat = {}



---@class FRigUnit_RandomVector : FRigUnit_MathBase
---@field Seed int32
---@field Minimum float
---@field Maximum float
---@field Duration float
---@field Result FVector
---@field LastResult FVector
---@field LastSeed int32
---@field TimeLeft float
local FRigUnit_RandomVector = {}



---@class FRigUnit_SecondsToFrames : FRigUnit_AnimBase
---@field Seconds float
---@field Frames float
local FRigUnit_SecondsToFrames = {}



---@class FRigUnit_SendEvent : FRigUnitMutable
---@field Event ERigEvent
---@field Item FRigElementKey
---@field OffsetInSeconds float
---@field bEnable boolean
---@field bOnlyDuringInteraction boolean
local FRigUnit_SendEvent = {}



---@class FRigUnit_SequenceExecution : FRigUnit
---@field ExecuteContext FControlRigExecuteContext
---@field A FControlRigExecuteContext
---@field B FControlRigExecuteContext
---@field C FControlRigExecuteContext
---@field D FControlRigExecuteContext
local FRigUnit_SequenceExecution = {}



---@class FRigUnit_SetBoneInitialTransform : FRigUnitMutable
---@field Bone FName
---@field Transform FTransform
---@field Result FTransform
---@field SPACE EBoneGetterSetterMode
---@field bPropagateToChildren boolean
---@field CachedBone FCachedRigElement
local FRigUnit_SetBoneInitialTransform = {}



---@class FRigUnit_SetBoneRotation : FRigUnitMutable
---@field Bone FName
---@field Rotation FQuat
---@field SPACE EBoneGetterSetterMode
---@field Weight float
---@field bPropagateToChildren boolean
---@field CachedBone FCachedRigElement
local FRigUnit_SetBoneRotation = {}



---@class FRigUnit_SetBoneTransform : FRigUnitMutable
---@field Bone FName
---@field Transform FTransform
---@field Result FTransform
---@field SPACE EBoneGetterSetterMode
---@field Weight float
---@field bPropagateToChildren boolean
---@field CachedBone FCachedRigElement
local FRigUnit_SetBoneTransform = {}



---@class FRigUnit_SetBoneTranslation : FRigUnitMutable
---@field Bone FName
---@field Translation FVector
---@field SPACE EBoneGetterSetterMode
---@field Weight float
---@field bPropagateToChildren boolean
---@field CachedBone FCachedRigElement
local FRigUnit_SetBoneTranslation = {}



---@class FRigUnit_SetControlBool : FRigUnitMutable
---@field Control FName
---@field BoolValue boolean
---@field CachedControlIndex FCachedRigElement
local FRigUnit_SetControlBool = {}



---@class FRigUnit_SetControlColor : FRigUnitMutable
---@field Control FName
---@field Color FLinearColor
---@field CachedControlIndex FCachedRigElement
local FRigUnit_SetControlColor = {}



---@class FRigUnit_SetControlFloat : FRigUnitMutable
---@field Control FName
---@field Weight float
---@field FloatValue float
---@field CachedControlIndex FCachedRigElement
local FRigUnit_SetControlFloat = {}



---@class FRigUnit_SetControlInteger : FRigUnitMutable
---@field Control FName
---@field Weight int32
---@field IntegerValue int32
---@field CachedControlIndex FCachedRigElement
local FRigUnit_SetControlInteger = {}



---@class FRigUnit_SetControlOffset : FRigUnitMutable
---@field Control FName
---@field Offset FTransform
---@field SPACE EBoneGetterSetterMode
---@field CachedControlIndex FCachedRigElement
local FRigUnit_SetControlOffset = {}



---@class FRigUnit_SetControlRotator : FRigUnitMutable
---@field Control FName
---@field Weight float
---@field Rotator FRotator
---@field SPACE EBoneGetterSetterMode
---@field CachedControlIndex FCachedRigElement
local FRigUnit_SetControlRotator = {}



---@class FRigUnit_SetControlTransform : FRigUnitMutable
---@field Control FName
---@field Weight float
---@field Transform FTransform
---@field SPACE EBoneGetterSetterMode
---@field CachedControlIndex FCachedRigElement
local FRigUnit_SetControlTransform = {}



---@class FRigUnit_SetControlVector : FRigUnitMutable
---@field Control FName
---@field Weight float
---@field Vector FVector
---@field SPACE EBoneGetterSetterMode
---@field CachedControlIndex FCachedRigElement
local FRigUnit_SetControlVector = {}



---@class FRigUnit_SetControlVector2D : FRigUnitMutable
---@field Control FName
---@field Weight float
---@field Vector FVector2D
---@field CachedControlIndex FCachedRigElement
local FRigUnit_SetControlVector2D = {}



---@class FRigUnit_SetControlVisibility : FRigUnitMutable
---@field Item FRigElementKey
---@field Pattern FString
---@field bVisible boolean
---@field CachedControlIndices TArray<FCachedRigElement>
local FRigUnit_SetControlVisibility = {}



---@class FRigUnit_SetCurveValue : FRigUnitMutable
---@field Curve FName
---@field Value float
---@field CachedCurveIndex FCachedRigElement
local FRigUnit_SetCurveValue = {}



---@class FRigUnit_SetMultiControlBool : FRigUnitMutable
---@field Entries TArray<FRigUnit_SetMultiControlBool_Entry>
---@field CachedControlIndices TArray<FCachedRigElement>
local FRigUnit_SetMultiControlBool = {}



---@class FRigUnit_SetMultiControlBool_Entry
---@field Control FName
---@field BoolValue boolean
local FRigUnit_SetMultiControlBool_Entry = {}



---@class FRigUnit_SetMultiControlFloat : FRigUnitMutable
---@field Entries TArray<FRigUnit_SetMultiControlFloat_Entry>
---@field Weight float
---@field CachedControlIndices TArray<FCachedRigElement>
local FRigUnit_SetMultiControlFloat = {}



---@class FRigUnit_SetMultiControlFloat_Entry
---@field Control FName
---@field FloatValue float
local FRigUnit_SetMultiControlFloat_Entry = {}



---@class FRigUnit_SetMultiControlInteger : FRigUnitMutable
---@field Entries TArray<FRigUnit_SetMultiControlInteger_Entry>
---@field Weight float
---@field CachedControlIndices TArray<FCachedRigElement>
local FRigUnit_SetMultiControlInteger = {}



---@class FRigUnit_SetMultiControlInteger_Entry
---@field Control FName
---@field IntegerValue int32
local FRigUnit_SetMultiControlInteger_Entry = {}



---@class FRigUnit_SetMultiControlRotator : FRigUnitMutable
---@field Entries TArray<FRigUnit_SetMultiControlRotator_Entry>
---@field Weight float
---@field CachedControlIndices TArray<FCachedRigElement>
local FRigUnit_SetMultiControlRotator = {}



---@class FRigUnit_SetMultiControlRotator_Entry
---@field Control FName
---@field Rotator FRotator
---@field SPACE EBoneGetterSetterMode
local FRigUnit_SetMultiControlRotator_Entry = {}



---@class FRigUnit_SetMultiControlVector2D : FRigUnitMutable
---@field Entries TArray<FRigUnit_SetMultiControlVector2D_Entry>
---@field Weight float
---@field CachedControlIndices TArray<FCachedRigElement>
local FRigUnit_SetMultiControlVector2D = {}



---@class FRigUnit_SetMultiControlVector2D_Entry
---@field Control FName
---@field Vector FVector2D
local FRigUnit_SetMultiControlVector2D_Entry = {}



---@class FRigUnit_SetRelativeBoneTransform : FRigUnitMutable
---@field Bone FName
---@field SPACE FName
---@field Transform FTransform
---@field Weight float
---@field bPropagateToChildren boolean
---@field CachedBone FCachedRigElement
---@field CachedSpaceIndex FCachedRigElement
local FRigUnit_SetRelativeBoneTransform = {}



---@class FRigUnit_SetRelativeTransformForItem : FRigUnitMutable
---@field Child FRigElementKey
---@field Parent FRigElementKey
---@field bParentInitial boolean
---@field RelativeTransform FTransform
---@field Weight float
---@field bPropagateToChildren boolean
---@field CachedChild FCachedRigElement
---@field CachedParent FCachedRigElement
local FRigUnit_SetRelativeTransformForItem = {}



---@class FRigUnit_SetRotation : FRigUnitMutable
---@field Item FRigElementKey
---@field SPACE EBoneGetterSetterMode
---@field Rotation FQuat
---@field Weight float
---@field bPropagateToChildren boolean
---@field CachedIndex FCachedRigElement
local FRigUnit_SetRotation = {}



---@class FRigUnit_SetScale : FRigUnitMutable
---@field Item FRigElementKey
---@field SPACE EBoneGetterSetterMode
---@field Scale FVector
---@field Weight float
---@field bPropagateToChildren boolean
---@field CachedIndex FCachedRigElement
local FRigUnit_SetScale = {}



---@class FRigUnit_SetSpaceInitialTransform : FRigUnitMutable
---@field SpaceName FName
---@field Transform FTransform
---@field Result FTransform
---@field SPACE EBoneGetterSetterMode
---@field CachedSpaceIndex FCachedRigElement
local FRigUnit_SetSpaceInitialTransform = {}



---@class FRigUnit_SetSpaceTransform : FRigUnitMutable
---@field SPACE FName
---@field Weight float
---@field Transform FTransform
---@field SpaceType EBoneGetterSetterMode
---@field CachedSpaceIndex FCachedRigElement
local FRigUnit_SetSpaceTransform = {}



---@class FRigUnit_SetTransform : FRigUnitMutable
---@field Item FRigElementKey
---@field SPACE EBoneGetterSetterMode
---@field bInitial boolean
---@field Transform FTransform
---@field Weight float
---@field bPropagateToChildren boolean
---@field CachedIndex FCachedRigElement
local FRigUnit_SetTransform = {}



---@class FRigUnit_SetTranslation : FRigUnitMutable
---@field Item FRigElementKey
---@field SPACE EBoneGetterSetterMode
---@field Translation FVector
---@field Weight float
---@field bPropagateToChildren boolean
---@field CachedIndex FCachedRigElement
local FRigUnit_SetTranslation = {}



---@class FRigUnit_SimBase : FRigUnit
local FRigUnit_SimBase = {}


---@class FRigUnit_SimBaseMutable : FRigUnitMutable
local FRigUnit_SimBaseMutable = {}


---@class FRigUnit_SlideChain : FRigUnit_HighlevelBaseMutable
---@field StartBone FName
---@field EndBone FName
---@field SlideAmount float
---@field bPropagateToChildren boolean
---@field WorkData FRigUnit_SlideChain_WorkData
local FRigUnit_SlideChain = {}



---@class FRigUnit_SlideChainPerItem : FRigUnit_HighlevelBaseMutable
---@field Items FRigElementKeyCollection
---@field SlideAmount float
---@field bPropagateToChildren boolean
---@field WorkData FRigUnit_SlideChain_WorkData
local FRigUnit_SlideChainPerItem = {}



---@class FRigUnit_SlideChain_WorkData
---@field ChainLength float
---@field ItemSegments TArray<float>
---@field CachedItems TArray<FCachedRigElement>
---@field Transforms TArray<FTransform>
---@field BlendedTransforms TArray<FTransform>
local FRigUnit_SlideChain_WorkData = {}



---@class FRigUnit_SpaceName : FRigUnit
---@field SPACE FName
local FRigUnit_SpaceName = {}



---@class FRigUnit_SphereTraceWorld : FRigUnit
---@field Start FVector
---@field End FVector
---@field Channel ECollisionChannel
---@field Radius float
---@field bHit boolean
---@field HitLocation FVector
---@field HitNormal FVector
local FRigUnit_SphereTraceWorld = {}



---@class FRigUnit_SpringIK : FRigUnit_HighlevelBaseMutable
---@field StartBone FName
---@field EndBone FName
---@field HierarchyStrength float
---@field EffectorStrength float
---@field EffectorRatio float
---@field RootStrength float
---@field RootRatio float
---@field Damping float
---@field PoleVector FVector
---@field bFlipPolePlane boolean
---@field PoleVectorKind EControlRigVectorKind
---@field PoleVectorSpace FName
---@field PrimaryAxis FVector
---@field SecondaryAxis FVector
---@field bLiveSimulation boolean
---@field Iterations int32
---@field bLimitLocalPosition boolean
---@field bPropagateToChildren boolean
---@field DebugSettings FRigUnit_SpringIK_DebugSettings
---@field WorkData FRigUnit_SpringIK_WorkData
local FRigUnit_SpringIK = {}



---@class FRigUnit_SpringIK_DebugSettings
---@field bEnabled boolean
---@field Scale float
---@field Color FLinearColor
---@field WorldOffset FTransform
local FRigUnit_SpringIK_DebugSettings = {}



---@class FRigUnit_SpringIK_WorkData
---@field CachedBones TArray<FCachedRigElement>
---@field CachedPoleVector FCachedRigElement
---@field Transforms TArray<FTransform>
---@field Simulation FCRSimPointContainer
local FRigUnit_SpringIK_WorkData = {}



---@class FRigUnit_StartProfilingTimer : FRigUnit_DebugBaseMutable
local FRigUnit_StartProfilingTimer = {}


---@class FRigUnit_StartsWith : FRigUnit_NameBase
---@field Name FName
---@field Start FName
---@field Result boolean
local FRigUnit_StartsWith = {}



---@class FRigUnit_Subtract_FloatFloat : FRigUnit_BinaryFloatOp
local FRigUnit_Subtract_FloatFloat = {}


---@class FRigUnit_Subtract_VectorVector : FRigUnit_BinaryVectorOp
local FRigUnit_Subtract_VectorVector = {}


---@class FRigUnit_TimeOffsetFloat : FRigUnit_SimBase
---@field Value float
---@field SecondsAgo float
---@field BufferSize int32
---@field TimeRange float
---@field Result float
---@field Buffer TArray<float>
---@field DeltaTimes TArray<float>
---@field LastInsertIndex int32
---@field UpperBound int32
local FRigUnit_TimeOffsetFloat = {}



---@class FRigUnit_TimeOffsetTransform : FRigUnit_SimBase
---@field Value FTransform
---@field SecondsAgo float
---@field BufferSize int32
---@field TimeRange float
---@field Result FTransform
---@field Buffer TArray<FTransform>
---@field DeltaTimes TArray<float>
---@field LastInsertIndex int32
---@field UpperBound int32
local FRigUnit_TimeOffsetTransform = {}



---@class FRigUnit_TimeOffsetVector : FRigUnit_SimBase
---@field Value FVector
---@field SecondsAgo float
---@field BufferSize int32
---@field TimeRange float
---@field Result FVector
---@field Buffer TArray<FVector>
---@field DeltaTimes TArray<float>
---@field LastInsertIndex int32
---@field UpperBound int32
local FRigUnit_TimeOffsetVector = {}



---@class FRigUnit_Timeline : FRigUnit_SimBase
---@field Speed float
---@field Time float
---@field AccumulatedValue float
local FRigUnit_Timeline = {}



---@class FRigUnit_ToRigSpace_Location : FRigUnit
---@field Location FVector
---@field Global FVector
local FRigUnit_ToRigSpace_Location = {}



---@class FRigUnit_ToRigSpace_Rotation : FRigUnit
---@field Rotation FQuat
---@field Global FQuat
local FRigUnit_ToRigSpace_Rotation = {}



---@class FRigUnit_ToRigSpace_Transform : FRigUnit
---@field Transform FTransform
---@field Global FTransform
local FRigUnit_ToRigSpace_Transform = {}



---@class FRigUnit_ToSwingAndTwist : FRigUnit
---@field Input FQuat
---@field TwistAxis FVector
---@field Swing FQuat
---@field Twist FQuat
local FRigUnit_ToSwingAndTwist = {}



---@class FRigUnit_ToWorldSpace_Location : FRigUnit
---@field Location FVector
---@field World FVector
local FRigUnit_ToWorldSpace_Location = {}



---@class FRigUnit_ToWorldSpace_Rotation : FRigUnit
---@field Rotation FQuat
---@field World FQuat
local FRigUnit_ToWorldSpace_Rotation = {}



---@class FRigUnit_ToWorldSpace_Transform : FRigUnit
---@field Transform FTransform
---@field World FTransform
local FRigUnit_ToWorldSpace_Transform = {}



---@class FRigUnit_TransformConstraint : FRigUnit_HighlevelBaseMutable
---@field Bone FName
---@field BaseTransformSpace ETransformSpaceMode
---@field BaseTransform FTransform
---@field BaseBone FName
---@field Targets TArray<FConstraintTarget>
---@field bUseInitialTransforms boolean
---@field WorkData FRigUnit_TransformConstraint_WorkData
local FRigUnit_TransformConstraint = {}



---@class FRigUnit_TransformConstraintPerItem : FRigUnit_HighlevelBaseMutable
---@field Item FRigElementKey
---@field BaseTransformSpace ETransformSpaceMode
---@field BaseTransform FTransform
---@field BaseItem FRigElementKey
---@field Targets TArray<FConstraintTarget>
---@field bUseInitialTransforms boolean
---@field WorkData FRigUnit_TransformConstraint_WorkData
local FRigUnit_TransformConstraintPerItem = {}



---@class FRigUnit_TransformConstraint_WorkData
---@field ConstraintData TArray<FConstraintData>
---@field ConstraintDataToTargets TMap<int32, int32>
local FRigUnit_TransformConstraint_WorkData = {}



---@class FRigUnit_TwistBones : FRigUnit_HighlevelBaseMutable
---@field StartBone FName
---@field EndBone FName
---@field TwistAxis FVector
---@field PoleAxis FVector
---@field TwistEaseType EControlRigAnimEasingType
---@field Weight float
---@field bPropagateToChildren boolean
---@field WorkData FRigUnit_TwistBones_WorkData
local FRigUnit_TwistBones = {}



---@class FRigUnit_TwistBonesPerItem : FRigUnit_HighlevelBaseMutable
---@field Items FRigElementKeyCollection
---@field TwistAxis FVector
---@field PoleAxis FVector
---@field TwistEaseType EControlRigAnimEasingType
---@field Weight float
---@field bPropagateToChildren boolean
---@field WorkData FRigUnit_TwistBones_WorkData
local FRigUnit_TwistBonesPerItem = {}



---@class FRigUnit_TwistBones_WorkData
---@field CachedItems TArray<FCachedRigElement>
---@field ItemRatios TArray<float>
---@field ItemTransforms TArray<FTransform>
local FRigUnit_TwistBones_WorkData = {}



---@class FRigUnit_TwoBoneIKFK : FRigUnitMutable
---@field StartJoint FName
---@field EndJoint FName
---@field PoleTarget FVector
---@field Spin float
---@field EndEffector FTransform
---@field IKBlend float
---@field StartJointFKTransform FTransform
---@field MidJointFKTransform FTransform
---@field EndJointFKTransform FTransform
---@field PreviousFKIKBlend float
---@field StartJointIKTransform FTransform
---@field MidJointIKTransform FTransform
---@field EndJointIKTransform FTransform
---@field StartJointIndex int32
---@field MidJointIndex int32
---@field EndJointIndex int32
---@field UpperLimbLength float
---@field LowerLimbLength float
local FRigUnit_TwoBoneIKFK = {}



---@class FRigUnit_TwoBoneIKSimple : FRigUnit_HighlevelBaseMutable
---@field BoneA FName
---@field BoneB FName
---@field EffectorBone FName
---@field Effector FTransform
---@field PrimaryAxis FVector
---@field SecondaryAxis FVector
---@field SecondaryAxisWeight float
---@field PoleVector FVector
---@field PoleVectorKind EControlRigVectorKind
---@field PoleVectorSpace FName
---@field bEnableStretch boolean
---@field StretchStartRatio float
---@field StretchMaximumRatio float
---@field Weight float
---@field BoneALength float
---@field BoneBLength float
---@field bPropagateToChildren boolean
---@field DebugSettings FRigUnit_TwoBoneIKSimple_DebugSettings
---@field CachedBoneAIndex FCachedRigElement
---@field CachedBoneBIndex FCachedRigElement
---@field CachedEffectorBoneIndex FCachedRigElement
---@field CachedPoleVectorSpaceIndex FCachedRigElement
local FRigUnit_TwoBoneIKSimple = {}



---@class FRigUnit_TwoBoneIKSimplePerItem : FRigUnit_HighlevelBaseMutable
---@field ItemA FRigElementKey
---@field ItemB FRigElementKey
---@field EffectorItem FRigElementKey
---@field Effector FTransform
---@field PrimaryAxis FVector
---@field SecondaryAxis FVector
---@field SecondaryAxisWeight float
---@field PoleVector FVector
---@field PoleVectorKind EControlRigVectorKind
---@field PoleVectorSpace FRigElementKey
---@field bEnableStretch boolean
---@field StretchStartRatio float
---@field StretchMaximumRatio float
---@field Weight float
---@field ItemALength float
---@field ItemBLength float
---@field bPropagateToChildren boolean
---@field DebugSettings FRigUnit_TwoBoneIKSimple_DebugSettings
---@field CachedItemAIndex FCachedRigElement
---@field CachedItemBIndex FCachedRigElement
---@field CachedEffectorItemIndex FCachedRigElement
---@field CachedPoleVectorSpaceIndex FCachedRigElement
local FRigUnit_TwoBoneIKSimplePerItem = {}



---@class FRigUnit_TwoBoneIKSimpleTransforms : FRigUnit_HighlevelBase
---@field Root FTransform
---@field PoleVector FVector
---@field Effector FTransform
---@field PrimaryAxis FVector
---@field SecondaryAxis FVector
---@field SecondaryAxisWeight float
---@field bEnableStretch boolean
---@field StretchStartRatio float
---@field StretchMaximumRatio float
---@field BoneALength float
---@field BoneBLength float
---@field Elbow FTransform
local FRigUnit_TwoBoneIKSimpleTransforms = {}



---@class FRigUnit_TwoBoneIKSimpleVectors : FRigUnit_HighlevelBase
---@field Root FVector
---@field PoleVector FVector
---@field Effector FVector
---@field bEnableStretch boolean
---@field StretchStartRatio float
---@field StretchMaximumRatio float
---@field BoneALength float
---@field BoneBLength float
---@field Elbow FVector
local FRigUnit_TwoBoneIKSimpleVectors = {}



---@class FRigUnit_TwoBoneIKSimple_DebugSettings
---@field bEnabled boolean
---@field Scale float
---@field WorldOffset FTransform
local FRigUnit_TwoBoneIKSimple_DebugSettings = {}



---@class FRigUnit_UnaryQuaternionOp : FRigUnit
---@field Argument FQuat
---@field Result FQuat
local FRigUnit_UnaryQuaternionOp = {}



---@class FRigUnit_VerletIntegrateVector : FRigUnit_SimBase
---@field Target FVector
---@field Strength float
---@field Damp float
---@field Blend float
---@field Position FVector
---@field Velocity FVector
---@field Acceleration FVector
---@field Point FCRSimPoint
---@field bInitialized boolean
local FRigUnit_VerletIntegrateVector = {}



---@class FRigUnit_VisualDebugQuat : FRigUnit_DebugBase
---@field Value FQuat
---@field bEnabled boolean
---@field Thickness float
---@field Scale float
---@field BoneSpace FName
local FRigUnit_VisualDebugQuat = {}



---@class FRigUnit_VisualDebugQuatItemSpace : FRigUnit_DebugBase
---@field Value FQuat
---@field bEnabled boolean
---@field Thickness float
---@field Scale float
---@field SPACE FRigElementKey
local FRigUnit_VisualDebugQuatItemSpace = {}



---@class FRigUnit_VisualDebugTransform : FRigUnit_DebugBase
---@field Value FTransform
---@field bEnabled boolean
---@field Thickness float
---@field Scale float
---@field BoneSpace FName
local FRigUnit_VisualDebugTransform = {}



---@class FRigUnit_VisualDebugTransformItemSpace : FRigUnit_DebugBase
---@field Value FTransform
---@field bEnabled boolean
---@field Thickness float
---@field Scale float
---@field SPACE FRigElementKey
local FRigUnit_VisualDebugTransformItemSpace = {}



---@class FRigUnit_VisualDebugVector : FRigUnit_DebugBase
---@field Value FVector
---@field bEnabled boolean
---@field Mode ERigUnitVisualDebugPointMode
---@field Color FLinearColor
---@field Thickness float
---@field Scale float
---@field BoneSpace FName
local FRigUnit_VisualDebugVector = {}



---@class FRigUnit_VisualDebugVectorItemSpace : FRigUnit_DebugBase
---@field Value FVector
---@field bEnabled boolean
---@field Mode ERigUnitVisualDebugPointMode
---@field Color FLinearColor
---@field Thickness float
---@field Scale float
---@field SPACE FRigElementKey
local FRigUnit_VisualDebugVectorItemSpace = {}



---@class FStructReference
local FStructReference = {}


---@class UAdditiveControlRig : UControlRig
local UAdditiveControlRig = {}


---@class UControlRig : UObject
---@field ExecutionType ERigExecutionType
---@field VM URigVM
---@field Hierarchy FRigHierarchyContainer
---@field GizmoLibrary TSoftObjectPtr<UControlRigGizmoLibrary>
---@field InputProperties TMap<FName, FCachedPropertyPath>
---@field OutputProperties TMap<FName, FCachedPropertyPath>
---@field DrawContainer FControlRigDrawContainer
---@field DataSourceRegistry UAnimationDataSourceRegistry
---@field EventQueue TArray<FName>
---@field Influences FRigInfluenceMapPerEvent
---@field InteractionRig UControlRig
---@field InteractionRigClass TSubclassOf<UControlRig>
---@field AssetUserData TArray<UAssetUserData>
local UControlRig = {}

---@param InInteractionRigClass TSubclassOf<UControlRig>
function UControlRig:SetInteractionRigClass(InInteractionRigClass) end
---@param InInteractionRig UControlRig
function UControlRig:SetInteractionRig(InInteractionRig) end
---@return TSubclassOf<UControlRig>
function UControlRig:GetInteractionRigClass() end
---@return UControlRig
function UControlRig:GetInteractionRig() end


---@class UControlRigAnimInstance : UAnimInstance
local UControlRigAnimInstance = {}


---@class UControlRigBlueprintGeneratedClass : UBlueprintGeneratedClass
local UControlRigBlueprintGeneratedClass = {}


---@class UControlRigComponent : UPrimitiveComponent
---@field ControlRigClass TSubclassOf<UControlRig>
---@field OnPostInitializeDelegate FControlRigComponentOnPostInitializeDelegate
---@field OnPreSetupDelegate FControlRigComponentOnPreSetupDelegate
---@field OnPostSetupDelegate FControlRigComponentOnPostSetupDelegate
---@field OnPreUpdateDelegate FControlRigComponentOnPreUpdateDelegate
---@field OnPostUpdateDelegate FControlRigComponentOnPostUpdateDelegate
---@field MappedElements TArray<FControlRigComponentMappedElement>
---@field bResetTransformBeforeTick boolean
---@field bResetInitialsBeforeSetup boolean
---@field bUpdateRigOnTick boolean
---@field bUpdateInEditor boolean
---@field bDrawBones boolean
---@field bShowDebugDrawing boolean
---@field ControlRig UControlRig
local UControlRigComponent = {}

---@param DeltaTime float
function UControlRigComponent:Update(DeltaTime) end
---@param NewMappedElements TArray<FControlRigComponentMappedElement>
function UControlRigComponent:SetMappedElements(NewMappedElements) end
---@param SpaceName FName
---@param InitialTransform FTransform
---@param SPACE EControlRigComponentSpace
function UControlRigComponent:SetInitialSpaceTransform(SpaceName, InitialTransform, SPACE) end
---@param BoneName FName
---@param InitialTransform FTransform
---@param SPACE EControlRigComponentSpace
---@param bPropagateToChildren boolean
function UControlRigComponent:SetInitialBoneTransform(BoneName, InitialTransform, SPACE, bPropagateToChildren) end
---@param ControlName FName
---@param Value FVector2D
function UControlRigComponent:SetControlVector2D(ControlName, Value) end
---@param ControlName FName
---@param Value FTransform
---@param SPACE EControlRigComponentSpace
function UControlRigComponent:SetControlTransform(ControlName, Value, SPACE) end
---@param ControlName FName
---@param Value FVector
---@param SPACE EControlRigComponentSpace
function UControlRigComponent:SetControlScale(ControlName, Value, SPACE) end
---@param ControlName FName
---@param Value FRotator
---@param SPACE EControlRigComponentSpace
function UControlRigComponent:SetControlRotator(ControlName, Value, SPACE) end
---@param ControlName FName
---@param Value FVector
---@param SPACE EControlRigComponentSpace
function UControlRigComponent:SetControlPosition(ControlName, Value, SPACE) end
---@param ControlName FName
---@param OffsetTransform FTransform
---@param SPACE EControlRigComponentSpace
function UControlRigComponent:SetControlOffset(ControlName, OffsetTransform, SPACE) end
---@param ControlName FName
---@param Value int32
function UControlRigComponent:SetControlInt(ControlName, Value) end
---@param ControlName FName
---@param Value float
function UControlRigComponent:SetControlFloat(ControlName, Value) end
---@param ControlName FName
---@param Value boolean
function UControlRigComponent:SetControlBool(ControlName, Value) end
---@param BoneName FName
---@param Transform FTransform
---@param SPACE EControlRigComponentSpace
---@param Weight float
---@param bPropagateToChildren boolean
function UControlRigComponent:SetBoneTransform(BoneName, Transform, SPACE, Weight, bPropagateToChildren) end
---@param InSkeletalMesh USkeletalMesh
function UControlRigComponent:SetBoneInitialTransformsFromSkeletalMesh(InSkeletalMesh) end
---@param Component UControlRigComponent
function UControlRigComponent:OnPreUpdate(Component) end
---@param Component UControlRigComponent
function UControlRigComponent:OnPreSetup(Component) end
---@param Component UControlRigComponent
function UControlRigComponent:OnPostUpdate(Component) end
---@param Component UControlRigComponent
function UControlRigComponent:OnPostSetup(Component) end
---@param Component UControlRigComponent
function UControlRigComponent:OnPostInitialize(Component) end
function UControlRigComponent:Initialize() end
---@param SpaceName FName
---@param SPACE EControlRigComponentSpace
---@return FTransform
function UControlRigComponent:GetSpaceTransform(SpaceName, SPACE) end
---@param SpaceName FName
---@param SPACE EControlRigComponentSpace
---@return FTransform
function UControlRigComponent:GetInitialSpaceTransform(SpaceName, SPACE) end
---@param BoneName FName
---@param SPACE EControlRigComponentSpace
---@return FTransform
function UControlRigComponent:GetInitialBoneTransform(BoneName, SPACE) end
---@param ElementType ERigElementType
---@return TArray<FName>
function UControlRigComponent:GetElementNames(ElementType) end
---@param ControlName FName
---@return FVector2D
function UControlRigComponent:GetControlVector2D(ControlName) end
---@param ControlName FName
---@param SPACE EControlRigComponentSpace
---@return FTransform
function UControlRigComponent:GetControlTransform(ControlName, SPACE) end
---@param ControlName FName
---@param SPACE EControlRigComponentSpace
---@return FVector
function UControlRigComponent:GetControlScale(ControlName, SPACE) end
---@param ControlName FName
---@param SPACE EControlRigComponentSpace
---@return FRotator
function UControlRigComponent:GetControlRotator(ControlName, SPACE) end
---@return UControlRig
function UControlRigComponent:GetControlRig() end
---@param ControlName FName
---@param SPACE EControlRigComponentSpace
---@return FVector
function UControlRigComponent:GetControlPosition(ControlName, SPACE) end
---@param ControlName FName
---@param SPACE EControlRigComponentSpace
---@return FTransform
function UControlRigComponent:GetControlOffset(ControlName, SPACE) end
---@param ControlName FName
---@return int32
function UControlRigComponent:GetControlInt(ControlName) end
---@param ControlName FName
---@return float
function UControlRigComponent:GetControlFloat(ControlName) end
---@param ControlName FName
---@return boolean
function UControlRigComponent:GetControlBool(ControlName) end
---@param BoneName FName
---@param SPACE EControlRigComponentSpace
---@return FTransform
function UControlRigComponent:GetBoneTransform(BoneName, SPACE) end
---@return float
function UControlRigComponent:GetAbsoluteTime() end
---@param Name FName
---@param ElementType ERigElementType
---@return boolean
function UControlRigComponent:DoesElementExist(Name, ElementType) end
function UControlRigComponent:ClearMappedElements() end
---@param SkeletalMeshComponent USkeletalMeshComponent
---@param Bones TArray<FControlRigComponentMappedBone>
---@param Curves TArray<FControlRigComponentMappedCurve>
function UControlRigComponent:AddMappedSkeletalMesh(SkeletalMeshComponent, Bones, Curves) end
---@param NewMappedElements TArray<FControlRigComponentMappedElement>
function UControlRigComponent:AddMappedElements(NewMappedElements) end
---@param Components TArray<FControlRigComponentMappedComponent>
function UControlRigComponent:AddMappedComponents(Components) end
---@param SkeletalMeshComponent USkeletalMeshComponent
function UControlRigComponent:AddMappedCompleteSkeletalMesh(SkeletalMeshComponent) end


---@class UControlRigGizmoLibrary : UObject
---@field DefaultGizmo FControlRigGizmoDefinition
---@field DefaultMaterial TSoftObjectPtr<UMaterial>
---@field MaterialColorParameter FName
---@field Gizmos TArray<FControlRigGizmoDefinition>
local UControlRigGizmoLibrary = {}



---@class UControlRigLayerInstance : UAnimInstance
local UControlRigLayerInstance = {}


---@class UControlRigNumericalValidationPass : UControlRigValidationPass
---@field bCheckControls boolean
---@field bCheckBones boolean
---@field bCheckCurves boolean
---@field TranslationPrecision float
---@field RotationPrecision float
---@field ScalePrecision float
---@field CurvePrecision float
---@field EventNameA FName
---@field EventNameB FName
---@field Pose FRigPose
local UControlRigNumericalValidationPass = {}



---@class UControlRigObjectHolder : UObject
---@field Objects TArray<UObject>
local UControlRigObjectHolder = {}



---@class UControlRigSequence : ULevelSequence
---@field LastExportedToAnimationSequence TSoftObjectPtr<UAnimSequence>
---@field LastExportedUsingSkeletalMesh TSoftObjectPtr<USkeletalMesh>
---@field LastExportedFrameRate float
local UControlRigSequence = {}



---@class UControlRigSequencerAnimInstance : UAnimSequencerInstance
local UControlRigSequencerAnimInstance = {}


---@class UControlRigSettings : UDeveloperSettings
local UControlRigSettings = {}


---@class UControlRigValidationPass : UObject
local UControlRigValidationPass = {}


---@class UControlRigValidator : UObject
---@field Passes TArray<UControlRigValidationPass>
local UControlRigValidator = {}



---@class UDefault__ControlRigBlueprintGeneratedClass
local UDefault__ControlRigBlueprintGeneratedClass = {}


---@class UFKControlRig : UControlRig
---@field IsControlActive TArray<boolean>
---@field ApplyMode EControlRigFKRigExecuteMode
local UFKControlRig = {}



---@class UMovieSceneControlRigParameterSection : UMovieSceneParameterSection
---@field ControlRig UControlRig
---@field ControlRigClass TSubclassOf<UControlRig>
---@field ControlsMask TArray<boolean>
---@field TransformMask FMovieSceneTransformMask
---@field Weight FMovieSceneFloatChannel
---@field ControlChannelMap TMap<FName, FChannelMapInfo>
---@field EnumParameterNamesAndCurves TArray<FEnumParameterNameAndCurve>
---@field IntegerParameterNamesAndCurves TArray<FIntegerParameterNameAndCurve>
local UMovieSceneControlRigParameterSection = {}



---@class UMovieSceneControlRigParameterTrack : UMovieSceneNameableTrack
---@field ControlRig UControlRig
---@field SectionToKey UMovieSceneSection
---@field Sections TArray<UMovieSceneSection>
---@field TrackName FName
local UMovieSceneControlRigParameterTrack = {}



