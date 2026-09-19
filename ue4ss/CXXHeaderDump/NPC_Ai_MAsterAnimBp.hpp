#ifndef UE4SS_SDK_NPC_Ai_MAsterAnimBp_HPP
#define UE4SS_SDK_NPC_Ai_MAsterAnimBp_HPP

class UNPC_Ai_MasterAnimBp_C : public UHumanAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0510 (size: 0x8)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_7;                            // 0x0518 (size: 0x28)
    FAnimNode_Inertialization AnimGraphNode_Inertialization;                          // 0x0540 (size: 0x70)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_6;                          // 0x05B0 (size: 0x158)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0708 (size: 0x20)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_5;                          // 0x0728 (size: 0x158)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_4;                          // 0x0880 (size: 0x158)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_17;                         // 0x09D8 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_27;                               // 0x0A58 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_5;                              // 0x0A88 (size: 0xB0)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_3;                          // 0x0B38 (size: 0x158)
    FAnimNode_DragonAimSolver AnimGraphNode_DragonAimSolver;                          // 0x0C90 (size: 0x9D0)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;                                  // 0x1660 (size: 0x108)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_39;                     // 0x1768 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_38;                     // 0x1790 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_37;                     // 0x17B8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_36;                     // 0x17E0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_35;                     // 0x1808 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_34;                     // 0x1830 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_33;                     // 0x1858 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_32;                     // 0x1880 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_31;                     // 0x18A8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_30;                     // 0x18D0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_29;                     // 0x18F8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_28;                     // 0x1920 (size: 0x28)
    FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer_1;                              // 0x1948 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_26;                               // 0x19C0 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_16;                         // 0x19F0 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_25;                               // 0x1A70 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_15;                         // 0x1AA0 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_24;                               // 0x1B20 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_14;                         // 0x1B50 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_23;                               // 0x1BD0 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_13;                         // 0x1C00 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_22;                               // 0x1C80 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_12;                         // 0x1CB0 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_21;                               // 0x1D30 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_11;                         // 0x1D60 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_20;                               // 0x1DE0 (size: 0x30)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;                      // 0x1E10 (size: 0xE8)
    FAnimNode_StateResult AnimGraphNode_StateResult_19;                               // 0x1EF8 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_4;                              // 0x1F28 (size: 0xB0)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2;                          // 0x1FD8 (size: 0x158)
    FAnimNode_Slot AnimGraphNode_Slot_2;                                              // 0x2130 (size: 0x48)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;                        // 0x2178 (size: 0xC0)
    FAnimNode_Slot AnimGraphNode_Slot_1;                                              // 0x2238 (size: 0x48)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_1;                          // 0x2280 (size: 0x158)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_6;                            // 0x23D8 (size: 0x28)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5;                            // 0x2400 (size: 0x28)
    FAnimNode_HandIKRetargeting AnimGraphNode_HandIKRetargeting;                      // 0x2428 (size: 0x120)
    FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK_1;                                    // 0x2550 (size: 0x1E0)
    FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK;                                      // 0x2730 (size: 0x1E0)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;                                    // 0x2910 (size: 0x108)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x2A18 (size: 0x20)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_27;                     // 0x2A38 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_26;                     // 0x2A60 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_25;                     // 0x2A88 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_24;                     // 0x2AB0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_23;                     // 0x2AD8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_22;                     // 0x2B00 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_10;                         // 0x2B28 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_18;                               // 0x2BA8 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9;                          // 0x2BD8 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_17;                               // 0x2C58 (size: 0x30)
    FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer;                                // 0x2C88 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_16;                               // 0x2D00 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_3;                              // 0x2D30 (size: 0xB0)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;                            // 0x2DE0 (size: 0x158)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8;                          // 0x2F38 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_15;                               // 0x2FB8 (size: 0x30)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                        // 0x2FE8 (size: 0xE8)
    FAnimNode_StateResult AnimGraphNode_StateResult_14;                               // 0x30D0 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_2;                              // 0x3100 (size: 0xB0)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_21;                     // 0x31B0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_20;                     // 0x31D8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_19;                     // 0x3200 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_18;                     // 0x3228 (size: 0x28)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x3250 (size: 0x48)
    FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot;                                // 0x3298 (size: 0x90)
    FAnimNode_StateResult AnimGraphNode_StateResult_13;                               // 0x3328 (size: 0x30)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4;                            // 0x3358 (size: 0x28)
    FAnimNode_StateResult AnimGraphNode_StateResult_12;                               // 0x3380 (size: 0x30)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3;                            // 0x33B0 (size: 0x28)
    FAnimNode_StateResult AnimGraphNode_StateResult_11;                               // 0x33D8 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_1;                              // 0x3408 (size: 0xB0)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_17;                     // 0x34B8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_16;                     // 0x34E0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_15;                     // 0x3508 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_14;                     // 0x3530 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_13;                     // 0x3558 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_12;                     // 0x3580 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11;                     // 0x35A8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10;                     // 0x35D0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9;                      // 0x35F8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8;                      // 0x3620 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7;                      // 0x3648 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;                      // 0x3670 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;                      // 0x3698 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;                      // 0x36C0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;                      // 0x36E8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;                      // 0x3710 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x3738 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x3760 (size: 0x28)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2;                            // 0x3788 (size: 0x28)
    FAnimNode_StateResult AnimGraphNode_StateResult_10;                               // 0x37B0 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7;                          // 0x37E0 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_9;                                // 0x3860 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6;                          // 0x3890 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_8;                                // 0x3910 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5;                          // 0x3940 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_7;                                // 0x39C0 (size: 0x30)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;                            // 0x39F0 (size: 0x28)
    FAnimNode_StateResult AnimGraphNode_StateResult_6;                                // 0x3A18 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;                          // 0x3A48 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_5;                                // 0x3AC8 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;                          // 0x3AF8 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_4;                                // 0x3B78 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x3BA8 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_3;                                // 0x3C28 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x3C58 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_2;                                // 0x3CD8 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x3D08 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x3D88 (size: 0x30)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;                              // 0x3DB8 (size: 0x28)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x3DE0 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x3E10 (size: 0xB0)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x3EC0 (size: 0x30)
    float Direction;                                                                  // 0x3EF0 (size: 0x4)
    bool Walking?;                                                                    // 0x3EF4 (size: 0x1)
    bool IsWalking;                                                                   // 0x3EF5 (size: 0x1)
    bool isLeftFootUp?;                                                               // 0x3EF6 (size: 0x1)
    bool PlayEmotion;                                                                 // 0x3EF7 (size: 0x1)
    bool isAngry?;                                                                    // 0x3EF8 (size: 0x1)
    bool isHappy?;                                                                    // 0x3EF9 (size: 0x1)
    float Rotation;                                                                   // 0x3EFC (size: 0x4)
    float BlinkOffsetBP;                                                              // 0x3F00 (size: 0x4)
    FTransform PlayerTransform;                                                       // 0x3F10 (size: 0x30)
    float LookAtAlpha;                                                                // 0x3F40 (size: 0x4)
    float EyeballsLookat;                                                             // 0x3F44 (size: 0x4)
    bool ShouldLookAt;                                                                // 0x3F48 (size: 0x1)
    bool HappyFace;                                                                   // 0x3F49 (size: 0x1)
    bool AngryFace;                                                                   // 0x3F4A (size: 0x1)
    bool isDialog?;                                                                   // 0x3F4B (size: 0x1)
    float TurnBp;                                                                     // 0x3F4C (size: 0x4)
    int32 DialogID;                                                                   // 0x3F50 (size: 0x4)
    FVector DriverSitHeight;                                                          // 0x3F54 (size: 0xC)
    FRotator RootRotation;                                                            // 0x3F60 (size: 0xC)
    FVector DriverTriggerPos;                                                         // 0x3F6C (size: 0xC)
    FVector DirverIdleSnap;                                                           // 0x3F78 (size: 0xC)
    bool Female?;                                                                     // 0x3F84 (size: 0x1)
    bool isDisgusted?;                                                                // 0x3F85 (size: 0x1)
    int32 HappyType;                                                                  // 0x3F88 (size: 0x4)
    int32 AngryType;                                                                  // 0x3F8C (size: 0x4)
    bool WaitingToLong?;                                                              // 0x3F90 (size: 0x1)
    int32 WaitingAnimTypeBP;                                                          // 0x3F94 (size: 0x4)
    float Speed;                                                                      // 0x3F98 (size: 0x4)
    bool IsRunning;                                                                   // 0x3F9C (size: 0x1)
    class AEmployeeBroom_C* SpawnedBroom;                                             // 0x3FA0 (size: 0x8)
    bool CheckLookAtDis;                                                              // 0x3FA8 (size: 0x1)
    float RetargetingAlphaMulti;                                                      // 0x3FAC (size: 0x4)
    FVector SocketPosition;                                                           // 0x3FB0 (size: 0xC)
    FRotator SocketRotation;                                                          // 0x3FBC (size: 0xC)
    class AAICharacterBase* NPC_Base;                                                 // 0x3FC8 (size: 0x8)
    bool isPartyBoy;                                                                  // 0x3FD0 (size: 0x1)
    int32 PartyWalkType0;                                                             // 0x3FD4 (size: 0x4)
    bool JumpedFromBus;                                                               // 0x3FD8 (size: 0x1)
    EMovementGroundType MovementGroundType;                                           // 0x3FD9 (size: 0x1)
    bool bDirtyDialog;                                                                // 0x3FDA (size: 0x1)
    bool bAngryDialog;                                                                // 0x3FDB (size: 0x1)
    bool bHappyDialog;                                                                // 0x3FDC (size: 0x1)
    EMovementType MovementType;                                                       // 0x3FDD (size: 0x1)
    class APaintRollerNPC_Bp_C* SpawnedPaintRoller;                                   // 0x3FE0 (size: 0x8)
    float Blend Weights 0;                                                            // 0x3FE8 (size: 0x4)
    bool BTurningBP;                                                                  // 0x3FEC (size: 0x1)
    FVector PlayerLocation;                                                           // 0x3FF0 (size: 0xC)
    bool bJog;                                                                        // 0x3FFC (size: 0x1)
    bool bRun;                                                                        // 0x3FFD (size: 0x1)
    bool bDance1;                                                                     // 0x3FFE (size: 0x1)
    bool bDance2;                                                                     // 0x3FFF (size: 0x1)
    bool bWalk;                                                                       // 0x4000 (size: 0x1)
    bool bIdleTick;                                                                   // 0x4001 (size: 0x1)
    bool bheadScratch;                                                                // 0x4002 (size: 0x1)
    bool bFaceScratch;                                                                // 0x4003 (size: 0x1)
    bool bShoulderRub;                                                                // 0x4004 (size: 0x1)
    bool bneckStrech;                                                                 // 0x4005 (size: 0x1)
    bool bLookAround;                                                                 // 0x4006 (size: 0x1)
    bool bCheckYourSelf;                                                              // 0x4007 (size: 0x1)
    FTimerHandle MontageTimer;                                                        // 0x4008 (size: 0x8)
    TArray<TSoftObjectPtr<class UAnimMontage>> NegativeEmotionMontages;               // 0x4010 (size: 0x10)
    TArray<TSoftObjectPtr<class UAnimMontage>> PositiveEmotionMontages;               // 0x4020 (size: 0x10)
    bool bWalkStart;                                                                  // 0x4030 (size: 0x1)
    bool Ground;                                                                      // 0x4031 (size: 0x1)
    bool Vehicle;                                                                     // 0x4032 (size: 0x1)
    float RetargetingAlpha;                                                           // 0x4034 (size: 0x4)
    float SocketAlpha;                                                                // 0x4038 (size: 0x4)
    FName In Bone Name;                                                               // 0x403C (size: 0x8)
    bool bPanic;                                                                      // 0x4044 (size: 0x1)

    void AnimGraph(FPoseLink& AnimGraph);
    void HandleMovementType();
    void HandleIdles();
    void PickGroundMovement();
    void Dialogtype(int32 DialogID);
    void OnCompleted_C8166F2B454DF1340BB5859E6AD61491(FName NotifyName);
    void OnBlendOut_C8166F2B454DF1340BB5859E6AD61491(FName NotifyName);
    void OnInterrupted_C8166F2B454DF1340BB5859E6AD61491(FName NotifyName);
    void OnNotifyBegin_C8166F2B454DF1340BB5859E6AD61491(FName NotifyName);
    void OnNotifyEnd_C8166F2B454DF1340BB5859E6AD61491(FName NotifyName);
    void OnLoaded_2A22CEE048AD38367A4B33A53B07B097(class UObject* Loaded);
    void OnCompleted_FE4B2BB9456A6FF429ACD5AB6B17AEC2(FName NotifyName);
    void OnBlendOut_FE4B2BB9456A6FF429ACD5AB6B17AEC2(FName NotifyName);
    void OnInterrupted_FE4B2BB9456A6FF429ACD5AB6B17AEC2(FName NotifyName);
    void OnNotifyBegin_FE4B2BB9456A6FF429ACD5AB6B17AEC2(FName NotifyName);
    void OnNotifyEnd_FE4B2BB9456A6FF429ACD5AB6B17AEC2(FName NotifyName);
    void OnLoaded_874721EC4C6D722CF674BC8DDD102151(class UObject* Loaded);
    void AnimNotify_DespawnBroom();
    void AnimNotify_SpawnBroom();
    void AnimNotify_PlayAnimOnBroom();
    void CustomEvent();
    void CustomEvent_1();
    void CustomEvent_2();
    void AnimNotify_L_foot_up();
    void AnimNotify_R_foot_up();
    void AnimNotify_L_LegSFX();
    void AnimNotify_R_LegSFX();
    void AnimNotify_BusJumpEnd();
    void AnimNotify_SpawnPaintRoller();
    void AnimNotify_DespawnPaintRoller();
    void AnimNotify_HeadScratchStart();
    void AnimNotify_FaceScratchStart();
    void AnimNotify_ShoulderRubStart();
    void AnimNotify_NeckStretchStart();
    void AnimNotify_LookaroundStart();
    void AnimNotify_CheckingYourselfStart();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void BlueprintInitializeAnimation();
    void CharacterRotationEvent(FRotator DeltaRotation);
    void OnStartActionAnim_Event_0(const int32 ActionID, const class AAICharacterBase* AICharacterBase);
    void AnimNotify_WaitingAnimEnd();
    void AnimNotify_ShouldLookAtOff();
    void AnimNotify_ShouldLookAtOn();
    void SetMontageNextSection(FName LastSectionName, FName NewSectionName);
    void IdleVariant();
    void CustomEvent_0();
    void EndAngryActionAnim();
    void EndHappyActionAnim();
    void MontageEnded(class UAnimMontage* Montage, bool bInterrupted);
    void AnimNotify_StopPhysicsSim();
    void VehicleEnteringFinished(class AActor* CurrentVehicle);
    void ExecuteUbergraph_NPC_Ai_MasterAnimBp(int32 EntryPoint);
}; // Size: 0x4045

#endif
