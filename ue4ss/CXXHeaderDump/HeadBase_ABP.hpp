#ifndef UE4SS_SDK_HeadBase_ABP_HPP
#define UE4SS_SDK_HeadBase_ABP_HPP

class UHeadBase_ABP_C : public UHumanAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0510 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0518 (size: 0x30)
    FAnimNode_PoseBlendNode AnimGraphNode_PoseBlendNode;                              // 0x0548 (size: 0xA0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;                        // 0x05E8 (size: 0xC0)
    FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh;                        // 0x06A8 (size: 0x1D8)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x0880 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x08C8 (size: 0x80)
    FAnimNode_LookAt AnimGraphNode_LookAt_1;                                          // 0x0950 (size: 0x1B0)
    FAnimNode_LookAt AnimGraphNode_LookAt;                                            // 0x0B00 (size: 0x1B0)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0CB0 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0CD0 (size: 0x20)
    class UPoseAsset* Pose Asset;                                                     // 0x0CF0 (size: 0x8)
    float LookAtAlpha;                                                                // 0x0CF8 (size: 0x4)
    class AAICharacterBase* NPC_Base;                                                 // 0x0D00 (size: 0x8)
    TArray<FFDialogs> FDialogs;                                                       // 0x0D08 (size: 0x10)
    int32 Dialog ID;                                                                  // 0x0D18 (size: 0x4)

    void AnimGraph(FPoseLink& AnimGraph);
    void OnLoaded_853D5A3042C3C59F901FA79973DD2F72(class UObject* Loaded);
    void OnNotifyEnd_B6A219134F4EE79680F059AC46F59CA3(FName NotifyName);
    void OnNotifyBegin_B6A219134F4EE79680F059AC46F59CA3(FName NotifyName);
    void OnInterrupted_B6A219134F4EE79680F059AC46F59CA3(FName NotifyName);
    void OnBlendOut_B6A219134F4EE79680F059AC46F59CA3(FName NotifyName);
    void OnCompleted_B6A219134F4EE79680F059AC46F59CA3(FName NotifyName);
    void OnLoaded_DEE415834D16B1C2FE2B579D186C51DC(class UObject* Loaded);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void BlueprintInitializeAnimation();
    void DialogMontage(const int32 DialogID, const class AAICharacterBase* AICharacterBase);
    void EndSearch();
    void BlueprintBeginPlay();
    void ExecuteUbergraph_HeadBase_ABP(int32 EntryPoint);
}; // Size: 0xD1C

#endif
