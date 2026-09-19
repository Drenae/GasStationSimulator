#ifndef UE4SS_SDK_ProgressRoad_WBP_HPP
#define UE4SS_SDK_ProgressRoad_WBP_HPP

class UProgressRoad_WBP_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* UnlockAnim;                                               // 0x0268 (size: 0x8)
    class UImage* BlockedByLevelIMG;                                                  // 0x0270 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0278 (size: 0x8)
    class UImage* Icon_BG;                                                            // 0x0280 (size: 0x8)
    class UTextBlock* Level;                                                          // 0x0288 (size: 0x8)
    class UImage* LockedDecoration_IMG;                                               // 0x0290 (size: 0x8)
    class UImage* LockedIcon;                                                         // 0x0298 (size: 0x8)
    class UImage* Question_ICO;                                                       // 0x02A0 (size: 0x8)
    class UProgressBar* Road_Progress_old;                                            // 0x02A8 (size: 0x8)
    class UImage* Star_ICO;                                                           // 0x02B0 (size: 0x8)
    class UImage* UnlockedDecoration_IMG;                                             // 0x02B8 (size: 0x8)
    class UOverlay* UnlockLevelOV;                                                    // 0x02C0 (size: 0x8)
    bool Unlocked;                                                                    // 0x02C8 (size: 0x1)
    bool StartWithAnimation;                                                          // 0x02C9 (size: 0x1)
    int32 LevelTounlock;                                                              // 0x02CC (size: 0x4)
    class ACentralShop* StationREF;                                                   // 0x02D0 (size: 0x8)
    class UTexture2D* Texture;                                                        // 0x02D8 (size: 0x8)

    void Construct();
    void ExecuteUbergraph_ProgressRoad_WBP(int32 EntryPoint);
}; // Size: 0x2E0

#endif
