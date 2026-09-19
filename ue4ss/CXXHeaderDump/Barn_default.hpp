#ifndef UE4SS_SDK_Barn_default_HPP
#define UE4SS_SDK_Barn_default_HPP

class USequenceDirector_C : public ULevelSequenceDirector
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0038 (size: 0x8)
    class USoundMix* FadeSoundtrack;                                                  // 0x0040 (size: 0x8)

    void SequenceEvent__ENTRYPOINTSequenceDirector_0();
    void SequenceEvent_0();
    void PopSoundModifier();
    void ExecuteUbergraph_SequenceDirector(int32 EntryPoint);
}; // Size: 0x48

#endif
