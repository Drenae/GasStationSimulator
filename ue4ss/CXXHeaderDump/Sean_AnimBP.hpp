#ifndef UE4SS_SDK_Sean_AnimBP_HPP
#define UE4SS_SDK_Sean_AnimBP_HPP

class USean_AnimBP_C : public UPilotsAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04C0 (size: 0x8)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2;                            // 0x04C8 (size: 0x28)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;                            // 0x04F0 (size: 0x28)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;                              // 0x0518 (size: 0x28)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2;                          // 0x0540 (size: 0x158)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_23;                     // 0x0698 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_22;                     // 0x06C0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_21;                     // 0x06E8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_20;                     // 0x0710 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_19;                     // 0x0738 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_18;                     // 0x0760 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_17;                     // 0x0788 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_16;                     // 0x07B0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_15;                     // 0x07D8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_14;                     // 0x0800 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_13;                     // 0x0828 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_12;                     // 0x0850 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11;                     // 0x0878 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10;                     // 0x08A0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9;                      // 0x08C8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8;                      // 0x08F0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7;                      // 0x0918 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;                      // 0x0940 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;                      // 0x0968 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;                      // 0x0990 (size: 0x28)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3;                      // 0x09B8 (size: 0xE8)
    FAnimNode_StateResult AnimGraphNode_StateResult_12;                               // 0x0AA0 (size: 0x30)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;                      // 0x0AD0 (size: 0x28)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2;                      // 0x0AF8 (size: 0xE8)
    FAnimNode_StateResult AnimGraphNode_StateResult_11;                               // 0x0BE0 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8;                          // 0x0C10 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_10;                               // 0x0C90 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7;                          // 0x0CC0 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_9;                                // 0x0D40 (size: 0x30)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;                      // 0x0D70 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6;                          // 0x0D98 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_8;                                // 0x0E18 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5;                          // 0x0E48 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_7;                                // 0x0EC8 (size: 0x30)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x0EF8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x0F20 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;                          // 0x0F48 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_6;                                // 0x0FC8 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;                          // 0x0FF8 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_5;                                // 0x1078 (size: 0x30)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;                      // 0x10A8 (size: 0xE8)
    FAnimNode_StateResult AnimGraphNode_StateResult_4;                                // 0x1190 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x11C0 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_3;                                // 0x1240 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x1270 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_2;                                // 0x12F0 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_1;                              // 0x1320 (size: 0xB0)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_1;                          // 0x13D0 (size: 0x158)
    FAnimNode_Slot AnimGraphNode_Slot_1;                                              // 0x1528 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x1570 (size: 0x48)
    FAnimNode_DragonAimSolver AnimGraphNode_DragonAimSolver;                          // 0x15C0 (size: 0x9D0)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x1F90 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x1FB0 (size: 0x20)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                        // 0x1FD0 (size: 0xE8)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x20B8 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x20E8 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x2168 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x2198 (size: 0xB0)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;                            // 0x2248 (size: 0x158)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;                        // 0x23A0 (size: 0xC0)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x2460 (size: 0x30)
    bool bWalk;                                                                       // 0x2490 (size: 0x1)
    float Speed;                                                                      // 0x2494 (size: 0x4)
    bool BLU;                                                                         // 0x2498 (size: 0x1)
    bool StopLeft;                                                                    // 0x2499 (size: 0x1)
    bool bStop;                                                                       // 0x249A (size: 0x1)
    float Direction;                                                                  // 0x249C (size: 0x4)
    uint8 NewVar_0;                                                                   // 0x24A0 (size: 0x1)
    class AActor* SpawnedObjectBP;                                                    // 0x24A8 (size: 0x8)
    class USkeletalMeshComponent* UsedMesh;                                           // 0x24B0 (size: 0x8)
    TEnumAsByte<ESittingActions::Type> SittingState;                                  // 0x24B8 (size: 0x1)
    int32 NewVar_1;                                                                   // 0x24BC (size: 0x4)
    int32 ChosenNumber;                                                               // 0x24C0 (size: 0x4)
    TArray<FFJoe_Sitting> StateChance;                                                // 0x24C8 (size: 0x10)
    EJoeSittingState ChosenAnimState;                                                 // 0x24D8 (size: 0x1)
    int32 RepeateAmount;                                                              // 0x24DC (size: 0x4)
    bool bMontageCancle;                                                              // 0x24E0 (size: 0x1)
    class AActor* SpawnedZippoBP;                                                     // 0x24E8 (size: 0x8)
    EJoeSittingState CurrentAnimState;                                                // 0x24F0 (size: 0x1)
    bool Is Rotating;                                                                 // 0x24F1 (size: 0x1)
    class AGSSNPAICharacterBase* As GSSNPAICharacter Base;                            // 0x24F8 (size: 0x8)
    float LHandIkAlpha;                                                               // 0x2500 (size: 0x4)
    FVector Effector LocationR;                                                       // 0x2504 (size: 0xC)
    FVector Effector LocationL;                                                       // 0x2510 (size: 0xC)
    float RHandIkAlpha;                                                               // 0x251C (size: 0x4)
    FRotator LhandRotation;                                                           // 0x2520 (size: 0xC)
    FRotator RHandRotation;                                                           // 0x252C (size: 0xC)
    bool ShouldLookAt;                                                                // 0x2538 (size: 0x1)
    bool bLookAt;                                                                     // 0x2539 (size: 0x1)
    FTransform Look At Location;                                                      // 0x2540 (size: 0x30)
    bool bDialog;                                                                     // 0x2570 (size: 0x1)
    FTimerHandle DialogEndTimer;                                                      // 0x2578 (size: 0x8)
    bool LeftSide;                                                                    // 0x2580 (size: 0x1)
    bool bStandingUp;                                                                 // 0x2581 (size: 0x1)
    float BaseDistanceForward;                                                        // 0x2584 (size: 0x4)
    float Play Rate;                                                                  // 0x2588 (size: 0x4)
    float BaseDistanceSide;                                                           // 0x258C (size: 0x4)
    float BaseDistancePIvotBack;                                                      // 0x2590 (size: 0x4)
    bool bMoving;                                                                     // 0x2594 (size: 0x1)
    bool bJog;                                                                        // 0x2595 (size: 0x1)
    bool bRun;                                                                        // 0x2596 (size: 0x1)
    bool bSprint;                                                                     // 0x2597 (size: 0x1)
    bool bWalkBack;                                                                   // 0x2598 (size: 0x1)
    float UpperBodyAlpha;                                                             // 0x259C (size: 0x4)

    void AnimGraph(FPoseLink& AnimGraph);
    void CheckDialogLookAt();
    bool RotateToTarget(class AActor* RotationTarget);
    bool Rotate To Target BP(class AActor* RotationTarget);
    void HandleRotationMontage(class AActor* RotationTarget, bool& bRotate, class UAnimMontage*& RotationMontage);
    void HandlePoitingValues(class AActor* PointingTarget);
    void HandleRotationMontageForPointing(class AActor* RotationTarget, bool& bRotate, class UAnimMontage*& RotationMontage);
    void FindDirection(TEnumAsByte<ERotationDirection::Type>& Direction);
    void SetPositioningValues(FVector DesiredLocation, FRotator DesiredRotation);
    void HandleMovementStates();
    void CalculatePositioningValues(class AActor* WarpingTarget, FTransform WarpTransform, float& MontagePlayRate, bool& HasTarget);
    void Plane Dialog Check Side(bool& Left);
    void DestroySpawnedObject(class AActor* Actor);
    void HandleStops();
    void OnCompleted_46BC471740812064F23A5097BAE0A371(FName NotifyName);
    void OnBlendOut_46BC471740812064F23A5097BAE0A371(FName NotifyName);
    void OnInterrupted_46BC471740812064F23A5097BAE0A371(FName NotifyName);
    void OnNotifyBegin_46BC471740812064F23A5097BAE0A371(FName NotifyName);
    void OnNotifyEnd_46BC471740812064F23A5097BAE0A371(FName NotifyName);
    void OnCompleted_57CC19CE402C313EE700A99B3D290D46(FName NotifyName);
    void OnBlendOut_57CC19CE402C313EE700A99B3D290D46(FName NotifyName);
    void OnInterrupted_57CC19CE402C313EE700A99B3D290D46(FName NotifyName);
    void OnNotifyBegin_57CC19CE402C313EE700A99B3D290D46(FName NotifyName);
    void OnNotifyEnd_57CC19CE402C313EE700A99B3D290D46(FName NotifyName);
    void OnCompleted_DD1BAC3448071F76549B649C338D9EA0(FName NotifyName);
    void OnBlendOut_DD1BAC3448071F76549B649C338D9EA0(FName NotifyName);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void OnInterrupted_DD1BAC3448071F76549B649C338D9EA0(FName NotifyName);
    void AnimNotify_RU_Stop();
    void AnimNotify_LU_Stop();
    void BlueprintInitializeAnimation();
    void OnNotifyBegin_DD1BAC3448071F76549B649C338D9EA0(FName NotifyName);
    void OnNotifyEnd_DD1BAC3448071F76549B649C338D9EA0(FName NotifyName);
    void BlueprintBeginPlay();
    void PlayPositioningMontage(class AActor* WarpTarget, FTransform WarpTransform);
    void HandlePositioning(FVector NewDesiredLocation, FRotator NewDesiredRotation);
    void StartPointingAtTarget(class AActor* PointingTarget);
    void StopPointingAtTarget();
    void PlayRotationMontage();
    void ExecuteUbergraph_Sean_AnimBP(int32 EntryPoint);
}; // Size: 0x25A0

#endif
