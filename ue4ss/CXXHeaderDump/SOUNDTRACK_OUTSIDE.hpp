#ifndef UE4SS_SDK_SOUNDTRACK_OUTSIDE_HPP
#define UE4SS_SDK_SOUNDTRACK_OUTSIDE_HPP

class ASOUNDTRACK_OUTSIDE_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0228 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0230 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_SOUNDTRACK_OUTSIDE(int32 EntryPoint);
}; // Size: 0x238

#endif
