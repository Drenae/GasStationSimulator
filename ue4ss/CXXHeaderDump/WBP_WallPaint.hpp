#ifndef UE4SS_SDK_WBP_WallPaint_HPP
#define UE4SS_SDK_WBP_WallPaint_HPP

class UWBP_WallPaint_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UOverlay* FXtextHolder;                                                     // 0x0268 (size: 0x8)
    class UImage* Inner_1BG;                                                          // 0x0270 (size: 0x8)
    class UImage* Inner_2BG;                                                          // 0x0278 (size: 0x8)
    class UOverlay* Overlay_1;                                                        // 0x0280 (size: 0x8)
    class UOverlay* Overlay_2;                                                        // 0x0288 (size: 0x8)
    class UImage* Pointer_Current;                                                    // 0x0290 (size: 0x8)
    class UImage* Pointer_Maximum;                                                    // 0x0298 (size: 0x8)
    class UImage* Pointer_Minimum;                                                    // 0x02A0 (size: 0x8)
    class UProgressBar* ProgressBar_58;                                               // 0x02A8 (size: 0x8)
    class USlider* SliderDown;                                                        // 0x02B0 (size: 0x8)
    class USlider* SliderUp;                                                          // 0x02B8 (size: 0x8)
    float Down;                                                                       // 0x02C0 (size: 0x4)
    float Up;                                                                         // 0x02C4 (size: 0x4)
    float DownTarget;                                                                 // 0x02C8 (size: 0x4)
    float UpTarget;                                                                   // 0x02CC (size: 0x4)
    bool Start;                                                                       // 0x02D0 (size: 0x1)
    class ACustomizationHousePart_BP_C* HousePart;                                    // 0x02D8 (size: 0x8)
    float AngleUp;                                                                    // 0x02E0 (size: 0x4)
    float AngleDown;                                                                  // 0x02E4 (size: 0x4)
    float AngleDown_Target;                                                           // 0x02E8 (size: 0x4)
    float AngleUp_Target;                                                             // 0x02EC (size: 0x4)
    float LeftTime;                                                                   // 0x02F0 (size: 0x4)
    class UStatic_Text_Fx_WBP_C* StaticTextFX;                                        // 0x02F8 (size: 0x8)
    float LeftTimeToSlow;                                                             // 0x0300 (size: 0x4)
    float LeftTimeToKeepPose;                                                         // 0x0304 (size: 0x4)
    bool Destroyed;                                                                   // 0x0308 (size: 0x1)
    class UAudioComponent* Sound;                                                     // 0x0310 (size: 0x8)
    bool SoundPlaying;                                                                // 0x0318 (size: 0x1)
    FText ActionButton;                                                               // 0x0320 (size: 0x18)

    void TrySpawnDirtyPaintDecal(class UBoxComponent* Spawner, bool& bSpawned);
    void UpdateSpeed(float Speed, float& Speed1);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Stain();
    void Destruct();
    void ToSlow();
    void HoldPosition();
    void ExecuteUbergraph_WBP_WallPaint(int32 EntryPoint);
}; // Size: 0x338

#endif
