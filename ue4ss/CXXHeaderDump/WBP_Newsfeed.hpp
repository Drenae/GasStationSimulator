#ifndef UE4SS_SDK_WBP_Newsfeed_HPP
#define UE4SS_SDK_WBP_Newsfeed_HPP

class UWBP_Newsfeed_C : public UInteractableUserWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0670 (size: 0x8)
    class UWidgetAnimation* HoverAnim;                                                // 0x0678 (size: 0x8)
    class UWidgetAnimation* HoverReadMoreAnim;                                        // 0x0680 (size: 0x8)
    class UWidgetAnimation* NewNews;                                                  // 0x0688 (size: 0x8)
    class UHorizontalBox* DotBox;                                                     // 0x0690 (size: 0x8)
    class UDotSwitcher_WBP_C* DotSwitcher_WBP;                                        // 0x0698 (size: 0x8)
    class UDotSwitcher_WBP_C* DotSwitcher_WBP_90;                                     // 0x06A0 (size: 0x8)
    class UDotSwitcher_WBP_C* DotSwitcher_WBP_178;                                    // 0x06A8 (size: 0x8)
    class UDotSwitcher_WBP_C* DotSwitcher_WBP_262;                                    // 0x06B0 (size: 0x8)
    class UImage* HooverBorder;                                                       // 0x06B8 (size: 0x8)
    class UImage* Image_1;                                                            // 0x06C0 (size: 0x8)
    class UImage* Image_53;                                                           // 0x06C8 (size: 0x8)
    class UImage* Image_136;                                                          // 0x06D0 (size: 0x8)
    class UWBP_SingleNews_C* WBP_SingleNews;                                          // 0x06D8 (size: 0x8)
    class UWBP_SingleNews_C* WBP_SingleNews_1;                                        // 0x06E0 (size: 0x8)
    class UWBP_SingleNews_C* WBP_SingleNews_2;                                        // 0x06E8 (size: 0x8)
    class UWBP_SingleNews_C* WBP_SingleNews_3;                                        // 0x06F0 (size: 0x8)
    class UWBP_SingleNews_C* WBP_SingleNews_4;                                        // 0x06F8 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_0;                                          // 0x0700 (size: 0x8)
    FString ChangelogFile;                                                            // 0x0708 (size: 0x10)
    FString ChangelogTags;                                                            // 0x0718 (size: 0x10)
    TArray<FChangelogNews> ChangelogNews;                                             // 0x0728 (size: 0x10)
    FString LastNewsDateSettingName;                                                  // 0x0738 (size: 0x10)
    TMap<FString, UTexture2D*> ChangelogImages;                                       // 0x0748 (size: 0x50)
    TArray<FString> ChangelogImagesUniqueNames;                                       // 0x0798 (size: 0x10)
    bool IsWidgetDataLoaded;                                                          // 0x07A8 (size: 0x1)
    int32 TestInteger;                                                                // 0x07AC (size: 0x4)
    FTimerHandle Timer;                                                               // 0x07B0 (size: 0x8)
    FWBP_Newsfeed_COnNewsfeedEnabled OnNewsfeedEnabled;                               // 0x07B8 (size: 0x10)
    void OnNewsfeedEnabled(bool IsEnabled);

    void SetDotsNormal();
    void SwitchNews(int32 Index);
    void SetNewsEnabled(bool bIsWidgetEnabled);
    void SetFocusEffect(bool bIsHovered);
    void AddMarkerOnFreshNews(FDateTime FreshNewsDate);
    void DownloadFiles();
    void OnDownloadCompleted(bool bWasSuccessfull, FString ErrorString, FString TagName);
    void OnLogin(bool bWasSuccessful, FString UserId);
    void Construct();
    void SetupNewsFeed();
    void ChangelogRead(bool bWasSuccesfull, FString Filename, const TArray<uint8>& FileContent);
    void GetChangelogImage(FChangelogNews News);
    void OnImageRead(bool bWasSuccesfull, FString Filename, const TArray<uint8>& FileContent);
    void OnNewsRead();
    void CheckIfAllImagesAreRead();
    void OnWidgetDataLoaded();
    void ChangeNews();
    void OnSetHoverEffect(bool bIsHovered, bool bPlaySound);
    void OnPressedSelect();
    void OnPressedLeft();
    void OnPressedRight();
    void OnChangeInputDevice(bool bIsGamepadBeingUsed);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void ExecuteUbergraph_WBP_Newsfeed(int32 EntryPoint);
    void OnNewsfeedEnabled__DelegateSignature(bool IsEnabled);
}; // Size: 0x7C8

#endif
