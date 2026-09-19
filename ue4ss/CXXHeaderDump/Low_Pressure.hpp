#ifndef UE4SS_SDK_Low_Pressure_HPP
#define UE4SS_SDK_Low_Pressure_HPP

class ULow_Pressure_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* ConstructAnim;                                            // 0x0268 (size: 0x8)
    class UImage* Image_arrow;                                                        // 0x0270 (size: 0x8)
    class UImage* Image_bar;                                                          // 0x0278 (size: 0x8)

    void Construct();
    void ExecuteUbergraph_Low_Pressure(int32 EntryPoint);
}; // Size: 0x280

#endif
