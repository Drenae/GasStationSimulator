#ifndef UE4SS_SDK_Coyotte_HPP
#define UE4SS_SDK_Coyotte_HPP

class ACoyotte_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0228 (size: 0x8)
    float RandomTImeStart;                                                            // 0x0230 (size: 0x4)
    float RandomTimeEnd;                                                              // 0x0234 (size: 0x4)
    float RestTime;                                                                   // 0x0238 (size: 0x4)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_Coyotte(int32 EntryPoint);
}; // Size: 0x23C

#endif
