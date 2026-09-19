#ifndef UE4SS_SDK_CarCrusher_ABP_HPP
#define UE4SS_SDK_CarCrusher_ABP_HPP

class UCarCrusher_ABP_C : public UCarCrusher_AnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0300 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0308 (size: 0x30)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;                      // 0x0338 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;                      // 0x0360 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x0388 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x03B0 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;                          // 0x03D8 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_3;                                // 0x0458 (size: 0x30)
    FAnimNode_Slot AnimGraphNode_Slot_1;                                              // 0x0488 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x04D0 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_2;                                // 0x0550 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0580 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x0600 (size: 0x30)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x0630 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0678 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x06F8 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x0728 (size: 0xB0)

    void AnimGraph(FPoseLink& AnimGraph);
    void OnBlendOut_54BE018F497B3187AAE42392F5F4A3DF(FName NotifyName);
    void OnCompleted_54BE018F497B3187AAE42392F5F4A3DF(FName NotifyName);
    void OnInterrupted_54BE018F497B3187AAE42392F5F4A3DF(FName NotifyName);
    void OnNotifyBegin_54BE018F497B3187AAE42392F5F4A3DF(FName NotifyName);
    void OnNotifyEnd_54BE018F497B3187AAE42392F5F4A3DF(FName NotifyName);
    void AnimNotify_LidOpenStarted();
    void AnimNotify_LidOpenFinished();
    void AnimNotify_LidCloseStarted();
    void AnimNotify_LidCloseFinished();
    void StartCrushing();
    void ExecuteUbergraph_CarCrusher_ABP(int32 EntryPoint);
}; // Size: 0x7D8

#endif
