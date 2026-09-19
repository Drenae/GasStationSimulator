#ifndef UE4SS_SDK_CommunicationDevice_Animbp_HPP
#define UE4SS_SDK_CommunicationDevice_Animbp_HPP

class UCommunicationDevice_Animbp_C : public UCommunicationDeviceAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x02F8 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0340 (size: 0x80)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x03C0 (size: 0x80)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x0440 (size: 0xA0)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_CommunicationDevice_Animbp(int32 EntryPoint);
}; // Size: 0x4E0

#endif
