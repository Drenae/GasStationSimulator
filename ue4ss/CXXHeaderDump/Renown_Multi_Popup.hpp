#ifndef UE4SS_SDK_Renown_Multi_Popup_HPP
#define UE4SS_SDK_Renown_Multi_Popup_HPP

class URenown_Multi_Popup_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UTextBlock* TextBlock_Value;                                                // 0x0268 (size: 0x8)
    TArray<FLinearColor> ColorArray;                                                  // 0x0270 (size: 0x10)

    void HasUpcomingMovieRushHourBonus(bool& bBonus);
    void Construct();
    void ExecuteUbergraph_Renown_Multi_Popup(int32 EntryPoint);
}; // Size: 0x280

#endif
