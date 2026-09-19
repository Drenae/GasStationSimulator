#ifndef UE4SS_SDK_GSS2GameMode_BP_HPP
#define UE4SS_SDK_GSS2GameMode_BP_HPP

class AGSS2GameMode_BP_C : public AGSS2GameMode
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03F8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0400 (size: 0x8)

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_GSS2GameMode_BP(int32 EntryPoint);
}; // Size: 0x408

#endif
