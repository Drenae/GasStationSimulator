#ifndef UE4SS_SDK_UI_PhotoThumbnail_HPP
#define UE4SS_SDK_UI_PhotoThumbnail_HPP

class UUI_PhotoThumbnail_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* NewAnimation;                                             // 0x0268 (size: 0x8)
    class UWidgetAnimation* NotifySelection;                                          // 0x0270 (size: 0x8)
    class UImage* BottomLeft;                                                         // 0x0278 (size: 0x8)
    class UImage* BottomRight;                                                        // 0x0280 (size: 0x8)
    class UButton* Button;                                                            // 0x0288 (size: 0x8)
    class UCanvasPanel* Edges;                                                        // 0x0290 (size: 0x8)
    class UImage* Photo;                                                              // 0x0298 (size: 0x8)
    class UImage* PhotoFrame;                                                         // 0x02A0 (size: 0x8)
    class UImage* TopLeft;                                                            // 0x02A8 (size: 0x8)
    class UImage* TopRight;                                                           // 0x02B0 (size: 0x8)
    FS_PhotosData PhotoData;                                                          // 0x02B8 (size: 0x30)
    FLinearColor CurrentColor;                                                        // 0x02E8 (size: 0x10)
    class UTexture2D* Texture;                                                        // 0x02F8 (size: 0x8)
    class UTexture2D* Frame;                                                          // 0x0300 (size: 0x8)
    FVector2D BaseSize;                                                               // 0x0308 (size: 0x8)
    float SizeMultiplier;                                                             // 0x0310 (size: 0x4)
    class UUI_Gallery_C* GalleryReference;                                            // 0x0318 (size: 0x8)
    FUI_PhotoThumbnail_CSendPhoto SendPhoto;                                          // 0x0320 (size: 0x10)
    void SendPhoto(FS_PhotosData PhotoData);
    class UUI_PhotoPage_C* Page;                                                      // 0x0330 (size: 0x8)
    FLinearColor FrameFocusedColor;                                                   // 0x0338 (size: 0x10)
    FLinearColor FrameUnfocusedColor;                                                 // 0x0348 (size: 0x10)
    bool bFocusedPreviousFrame;                                                       // 0x0358 (size: 0x1)
    bool bFocused;                                                                    // 0x0359 (size: 0x1)
    float TimeSinceFocus;                                                             // 0x035C (size: 0x4)

    ESlateVisibility Edges Visibility();
    FLinearColor FrameFocusedAndUnfocusedColor();
    void PreConstruct(bool IsDesignTime);
    void SetPhotoData(FS_PhotosData PhotoInfo);
    void Initialize(class UUI_Gallery_C* GalleryReference, class UUI_PhotoPage_C* OwnPage);
    void Destruct();
    void BndEvt__ButtonPhoto_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void Animation();
    void ResetThumb();
    void UpdatePhoto();
    void DeleteData();
    void ResetThumbAnimation();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_UI_PhotoThumbnail(int32 EntryPoint);
    void SendPhoto__DelegateSignature(FS_PhotosData PhotoData);
}; // Size: 0x360

#endif
