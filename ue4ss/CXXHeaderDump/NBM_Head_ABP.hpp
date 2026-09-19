#ifndef UE4SS_SDK_NBM_Head_ABP_HPP
#define UE4SS_SDK_NBM_Head_ABP_HPP

class UNBM_Head_ABP_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh;                        // 0x02F8 (size: 0x1D8)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;                        // 0x04D0 (size: 0xC0)
    FAnimNode_PoseBlendNode AnimGraphNode_PoseBlendNode;                              // 0x0590 (size: 0xA0)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x0630 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0678 (size: 0x80)
    class UPoseAsset* Pose Asset;                                                     // 0x06F8 (size: 0x8)
    class AAICharacterBase* NPC_Base;                                                 // 0x0700 (size: 0x8)
    int32 Dialog ID;                                                                  // 0x0708 (size: 0x4)
    TArray<FFDialogs> FDialogs;                                                       // 0x0710 (size: 0x10)

    void AnimGraph(FPoseLink& AnimGraph);
    void OnLoaded_6147E9AE488349634DA9C4A6551AFECA(class UObject* Loaded);
    void OnLoaded_DB675CF743F7578101EBA9A899287EDA(class UObject* Loaded);
    void OnNotifyEnd_4721C8964C850E9F8AB75BBB1AE1D1BD(FName NotifyName);
    void OnNotifyBegin_4721C8964C850E9F8AB75BBB1AE1D1BD(FName NotifyName);
    void OnInterrupted_4721C8964C850E9F8AB75BBB1AE1D1BD(FName NotifyName);
    void OnBlendOut_4721C8964C850E9F8AB75BBB1AE1D1BD(FName NotifyName);
    void OnCompleted_4721C8964C850E9F8AB75BBB1AE1D1BD(FName NotifyName);
    void BlueprintInitializeAnimation();
    void OnStartDialogAnim_Event_0(const int32 DialogID, const class AAICharacterBase* AICharacterBase);
    void EndSearch();
    void ExecuteUbergraph_NBM_Head_ABP(int32 EntryPoint);
}; // Size: 0x720

#endif
