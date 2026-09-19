#ifndef UE4SS_SDK_WBP_FuelStatus_HPP
#define UE4SS_SDK_WBP_FuelStatus_HPP

class UWBP_FuelStatus_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* ALARM;                                                    // 0x0268 (size: 0x8)
    class USlider* Fuel_Slider;                                                       // 0x0270 (size: 0x8)
    class UTextBlock* Fuel_TXT;                                                       // 0x0278 (size: 0x8)
    class UTextBlock* GasSation;                                                      // 0x0280 (size: 0x8)
    class UImage* Image;                                                              // 0x0288 (size: 0x8)
    class UImage* Image_223;                                                          // 0x0290 (size: 0x8)

    void Construct();
    void ALARM_ANIMATION(const EFuelState FuelStatusEnum);
    void ExecuteUbergraph_WBP_FuelStatus(int32 EntryPoint);
}; // Size: 0x298

#endif
