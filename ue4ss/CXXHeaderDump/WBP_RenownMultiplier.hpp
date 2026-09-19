#ifndef UE4SS_SDK_WBP_RenownMultiplier_HPP
#define UE4SS_SDK_WBP_RenownMultiplier_HPP

class UWBP_RenownMultiplier_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* RushHourIcon;                                                       // 0x0268 (size: 0x8)
    class UTextBlock* TextBlock_Title;                                                // 0x0270 (size: 0x8)
    class UTextBlock* TextBlock_Value;                                                // 0x0278 (size: 0x8)
    TArray<FLinearColor> ColorArray;                                                  // 0x0280 (size: 0x10)

    void HasUpcomingMovieRushHourBonus(bool& bBonus);
    void RegisterCinemaManager(bool bGameLoaded);
    void OnDirtyUpdated(float NewDirty);
    void Construct();
    void OnQueueUpdated();
    void ExecuteUbergraph_WBP_RenownMultiplier(int32 EntryPoint);
}; // Size: 0x290

#endif
