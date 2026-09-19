#ifndef UE4SS_SDK_SoundActor_HPP
#define UE4SS_SDK_SoundActor_HPP

class ASoundActor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0228 (size: 0x8)
    class UAudioComponent* Sound;                                                     // 0x0230 (size: 0x8)

    void InpActEvt_MuteSounds_K2Node_InputActionEvent_0(FKey Key);
    void ReceiveDestroyed();
    void ExecuteUbergraph_SoundActor(int32 EntryPoint);
}; // Size: 0x238

#endif
