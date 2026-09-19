#ifndef UE4SS_SDK_TestScalingWidgetEmploye_HPP
#define UE4SS_SDK_TestScalingWidgetEmploye_HPP

class UTestScalingWidgetEmploye_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* LevelUpAnim;                                              // 0x0268 (size: 0x8)
    class UImage* ActivityIcon;                                                       // 0x0270 (size: 0x8)
    class UImage* BlockIcon;                                                          // 0x0278 (size: 0x8)
    class UImage* EmployeAtWork_IMG;                                                  // 0x0280 (size: 0x8)
    class UImage* Image_294;                                                          // 0x0288 (size: 0x8)
    class UOverlay* LevelUpOverlay;                                                   // 0x0290 (size: 0x8)
    class UOverlay* MainOverlay;                                                      // 0x0298 (size: 0x8)
    class UImage* PayEmployee_IMG;                                                    // 0x02A0 (size: 0x8)
    class UOverlay* VIPBlockOverlay;                                                  // 0x02A8 (size: 0x8)
    class AEmployee_Base_C* EmployeeREF;                                              // 0x02B0 (size: 0x8)
    float RangeClose;                                                                 // 0x02B8 (size: 0x4)
    float RangeMedium;                                                                // 0x02BC (size: 0x4)
    float RangeFar;                                                                   // 0x02C0 (size: 0x4)
    TEnumAsByte<MINI_GAMES_TYPES::Type> EmployeWorkType;                              // 0x02C4 (size: 0x1)

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ShowPayForWorkGraphic();
    void ShowAtWorkGraphic(EWorkerWorkType WorkType);
    void HideAtWorkGraphic();
    void HidePayForWorkGraphic();
    void Construct();
    void Destruct();
    void OnLevelUpEvent(const int32 NewLevel);
    void ColapsedGraphic();
    void ExecuteUbergraph_TestScalingWidgetEmploye(int32 EntryPoint);
}; // Size: 0x2C5

#endif
