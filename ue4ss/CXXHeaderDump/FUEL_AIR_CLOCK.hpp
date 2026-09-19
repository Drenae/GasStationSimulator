#ifndef UE4SS_SDK_FUEL_AIR_CLOCK_HPP
#define UE4SS_SDK_FUEL_AIR_CLOCK_HPP

class UFUEL_AIR_CLOCK_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* ShakeAnim;                                                // 0x0268 (size: 0x8)
    class UWidgetAnimation* FallingArrows_FX;                                         // 0x0270 (size: 0x8)
    class UWidgetAnimation* Flesh_FX;                                                 // 0x0278 (size: 0x8)
    class UWidgetAnimation* Start_Broken;                                             // 0x0280 (size: 0x8)
    class UWidgetAnimation* FX_Start;                                                 // 0x0288 (size: 0x8)
    class UWidgetAnimation* CONSTRUCT_ANIMATION;                                      // 0x0290 (size: 0x8)
    class UImage* AIR_CLOCK_IMG;                                                      // 0x0298 (size: 0x8)
    class UHorizontalBox* Arrows_Horizontal;                                          // 0x02A0 (size: 0x8)
    class UHorizontalBox* Arrows_Horizontal_1;                                        // 0x02A8 (size: 0x8)
    class UImage* Clock_FX;                                                           // 0x02B0 (size: 0x8)
    class UImage* Flash_FX;                                                           // 0x02B8 (size: 0x8)
    class UImage* FUEL_CLOCK_IMG;                                                     // 0x02C0 (size: 0x8)
    class UImage* FUEL_CLOCK_IMG_1;                                                   // 0x02C8 (size: 0x8)
    class UImage* FUEL_CLOCK_POINTER;                                                 // 0x02D0 (size: 0x8)
    class UImage* FUEL_CLOCK_POINTER_RED;                                             // 0x02D8 (size: 0x8)
    class UImage* FX_CLOCK_BG;                                                        // 0x02E0 (size: 0x8)
    class UImage* Image;                                                              // 0x02E8 (size: 0x8)
    class UImage* Image_1;                                                            // 0x02F0 (size: 0x8)
    class UImage* Image_2;                                                            // 0x02F8 (size: 0x8)
    class UImage* Image_3;                                                            // 0x0300 (size: 0x8)
    class UImage* Image_4;                                                            // 0x0308 (size: 0x8)
    class UImage* Image_5;                                                            // 0x0310 (size: 0x8)
    class UImage* Image_6;                                                            // 0x0318 (size: 0x8)
    class UImage* Image_7;                                                            // 0x0320 (size: 0x8)
    class UImage* Image_129;                                                          // 0x0328 (size: 0x8)
    bool IsTickEnabled?;                                                              // 0x0330 (size: 0x1)
    float ADD_FUEL_AMMOUNT;                                                           // 0x0334 (size: 0x4)
    float Start_Value;                                                                // 0x0338 (size: 0x4)
    TEnumAsByte<UI_STATES::Type> NewVar_0;                                            // 0x033C (size: 0x1)

    void Set_Goal_Value(float Angle);
    void SetPointer(float Angle);
    void Construct();
    void StartEffectUI();
    void BrokenEffectUI();
    void BrokenToNormal();
    void EffectToNormal();
    void ExecuteUbergraph_FUEL_AIR_CLOCK(int32 EntryPoint);
}; // Size: 0x33D

#endif
