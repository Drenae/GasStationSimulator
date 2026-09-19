#ifndef UE4SS_SDK_Biker_PrologAnimbp_HPP
#define UE4SS_SDK_Biker_PrologAnimbp_HPP

class UBiker_PrologAnimbp_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x02F8 (size: 0x48)
    class UAudioComponent* MusicLoop;                                                 // 0x0340 (size: 0x8)
    class UAudioComponent* Impact;                                                    // 0x0348 (size: 0x8)

    void AnimGraph(FPoseLink& AnimGraph);
    void AnimNotify_BikerDialog();
    void AnimNotify_BikerPush();
    void AnimNotify_BikerPunch();
    void AnimNotify_BikerStomp();
    void AnimNotify_BikerStep();
    void AnimNotify_Music();
    void AnimNotify_Boom();
    void AnimNotify_GuitarLoop();
    void ExecuteUbergraph_Biker_PrologAnimbp(int32 EntryPoint);
}; // Size: 0x350

#endif
