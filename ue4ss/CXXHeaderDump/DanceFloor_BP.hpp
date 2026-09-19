#ifndef UE4SS_SDK_DanceFloor_BP_HPP
#define UE4SS_SDK_DanceFloor_BP_HPP

class ADanceFloor_BP_C : public ADanceFloor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05D0 (size: 0x8)
    class UArrowComponent* Arrow14;                                                   // 0x05D8 (size: 0x8)
    class UArrowComponent* Arrow13;                                                   // 0x05E0 (size: 0x8)
    class UArrowComponent* Arrow12;                                                   // 0x05E8 (size: 0x8)
    class UArrowComponent* Arrow11;                                                   // 0x05F0 (size: 0x8)
    class UArrowComponent* Arrow10;                                                   // 0x05F8 (size: 0x8)
    class UArrowComponent* Arrow9;                                                    // 0x0600 (size: 0x8)
    class UArrowComponent* Arrow8;                                                    // 0x0608 (size: 0x8)
    class UArrowComponent* arrow;                                                     // 0x0610 (size: 0x8)
    class UArrowComponent* Arrow6;                                                    // 0x0618 (size: 0x8)
    class UArrowComponent* Arrow5;                                                    // 0x0620 (size: 0x8)
    class UArrowComponent* Arrow4;                                                    // 0x0628 (size: 0x8)
    class UArrowComponent* Arrow3;                                                    // 0x0630 (size: 0x8)
    class UArrowComponent* Arrow2;                                                    // 0x0638 (size: 0x8)
    class UArrowComponent* Arrow1;                                                    // 0x0640 (size: 0x8)
    class UArrowComponent* Arrow7;                                                    // 0x0648 (size: 0x8)
    int32 NumberOfFullBaskets;                                                        // 0x0650 (size: 0x4)
    class UAudioComponent* PlayingAudioComp;                                          // 0x0658 (size: 0x8)

    void OnLoaded_AD4D9CD44DBFADDED07E3CB0D59939F6(class UObject* Loaded);
    void OnLoaded_D7A0F403475E3E4B673A798A1532C1AC(class UObject* Loaded);
    void PlaySound();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void PartyEndNPCSounds();
    void ExecuteUbergraph_DanceFloor_BP(int32 EntryPoint);
}; // Size: 0x660

#endif
