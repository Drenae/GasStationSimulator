#ifndef UE4SS_SDK_WBP_CinemaSign_HPP
#define UE4SS_SDK_WBP_CinemaSign_HPP

class UWBP_CinemaSign_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UVerticalBox* VerticalBox_Movies;                                           // 0x0268 (size: 0x8)

    void RefreshMovies();
    void Construct();
    void RegisterCinemaManager(bool bGameLoaded);
    void OnSettingsApplied(bool bAppliedSetting);
    void ExecuteUbergraph_WBP_CinemaSign(int32 EntryPoint);
}; // Size: 0x270

#endif
