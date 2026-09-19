#ifndef UE4SS_SDK_WBP_AdvertIcon_HPP
#define UE4SS_SDK_WBP_AdvertIcon_HPP

class UWBP_AdvertIcon_C : public UInteractableUserWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0670 (size: 0x8)
    class UWidgetAnimation* HoverAnimation;                                           // 0x0678 (size: 0x8)
    class UDragoButton* AdvertButton;                                                 // 0x0680 (size: 0x8)
    class UImage* AdvertIconImage;                                                    // 0x0688 (size: 0x8)
    class UImage* AdvertIconMask;                                                     // 0x0690 (size: 0x8)
    FString AdvertNewsTag;                                                            // 0x0698 (size: 0x10)
    FString AdvertFileName;                                                           // 0x06A8 (size: 0x10)
    FAdvertNews AdvertNews;                                                           // 0x06B8 (size: 0x80)
    class UTexture2D* PopupBackgroundImageTexture;                                    // 0x0738 (size: 0x8)
    class UTexture2D* PopupNiagaraMask;                                               // 0x0740 (size: 0x8)
    class UTexture2D* IconImage;                                                      // 0x0748 (size: 0x8)
    class UTexture2D* IconMask;                                                       // 0x0750 (size: 0x8)
    bool bIsReady;                                                                    // 0x0758 (size: 0x1)
    FWBP_AdvertIcon_COnAdvertIconEnabled OnAdvertIconEnabled;                         // 0x0760 (size: 0x10)
    void OnAdvertIconEnabled(bool NewEnabled);
    FWBP_AdvertIcon_COnNewPopupRequested OnNewPopupRequested;                         // 0x0770 (size: 0x10)
    void OnNewPopupRequested(class UWBP_AdvertIcon_C* AdvertIcon);

    void FocusButton(bool bIsHovered);
    void CreatePopUP(class UWBP_AdvertPopUp_C*& Popup);
    void ShowAdverrt(bool Show);
    void OnDownloadCompleted(bool bWasSuccessfull, FString ErrorString, FString TagName);
    void SetupIconFromFileData();
    void OnAdvertFileRead(bool bWasSuccesfull, FString Filename, const TArray<uint8>& FileContent);
    void SetupIconImage();
    void SetupIconMask();
    void IconMaskImageReadCompleted(bool bWasSuccesfull, FString Filename, const TArray<uint8>& FileContent);
    void DownloadFiles();
    void IconImageReadCompleted(bool bWasSuccesfull, FString Filename, const TArray<uint8>& FileContent);
    void SetupPopupFiles();
    void PopupBackgroundImageRead(bool bWasSuccesfull, FString Filename, const TArray<uint8>& FileContent);
    void NiagaraSpriteMaskRead(bool bWasSuccesfull, FString Filename, const TArray<uint8>& FileContent);
    void Construct();
    void OnLogin(bool bWasSuccessful, FString UserId);
    void CheckIfPopupDataIsLoaded();
    void OnSetHoverEffect(bool bIsHovered, bool bPlaySound);
    void OnPressedSelect();
    void BndEvt__WBP_AdvertIcon_AdvertButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__WBP_AdvertIcon_AdvertButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__WBP_AdvertIcon_AdvertButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
    void ExecuteUbergraph_WBP_AdvertIcon(int32 EntryPoint);
    void OnNewPopupRequested__DelegateSignature(class UWBP_AdvertIcon_C* AdvertIcon);
    void OnAdvertIconEnabled__DelegateSignature(bool NewEnabled);
}; // Size: 0x780

#endif
