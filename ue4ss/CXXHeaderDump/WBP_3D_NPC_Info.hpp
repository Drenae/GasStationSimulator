#ifndef UE4SS_SDK_WBP_3D_NPC_Info_HPP
#define UE4SS_SDK_WBP_3D_NPC_Info_HPP

class UWBP_3D_NPC_Info_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* AtWork;                                                   // 0x0268 (size: 0x8)
    class UProgressBar* EmployeeEnergyBar_1;                                          // 0x0270 (size: 0x8)
    class UImage* Image_322;                                                          // 0x0278 (size: 0x8)
    class UCanvasPanel* MainCanvas;                                                   // 0x0280 (size: 0x8)
    class UOverlay* MainOverlay;                                                      // 0x0288 (size: 0x8)
    class UImage* MoneyIcon;                                                          // 0x0290 (size: 0x8)
    class UTextBlock* MoneyToPayTXT;                                                  // 0x0298 (size: 0x8)
    class UTextBlock* TextBlock_66;                                                   // 0x02A0 (size: 0x8)
    class AAICharacterBase* Character;                                                // 0x02A8 (size: 0x8)
    float RangeMedium;                                                                // 0x02B0 (size: 0x4)
    float RangeClose;                                                                 // 0x02B4 (size: 0x4)
    class AEmployee_Base_C* EmployeeBase;                                             // 0x02B8 (size: 0x8)
    float RangeFar;                                                                   // 0x02C0 (size: 0x4)
    float LastKnown;                                                                  // 0x02C4 (size: 0x4)

    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void RestartAnim();
    void ExecuteUbergraph_WBP_3D_NPC_Info(int32 EntryPoint);
}; // Size: 0x2C8

#endif
