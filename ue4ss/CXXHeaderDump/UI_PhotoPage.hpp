#ifndef UE4SS_SDK_UI_PhotoPage_HPP
#define UE4SS_SDK_UI_PhotoPage_HPP

class UUI_PhotoPage_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UUniformGridPanel* Page;                                                    // 0x0268 (size: 0x8)
    int32 PhotosPerColumn;                                                            // 0x0270 (size: 0x4)
    int32 PhotosPerRow;                                                               // 0x0274 (size: 0x4)
    TArray<UUI_PhotoThumbnail_C*> PhotosArray;                                        // 0x0278 (size: 0x10)
    int32 PageIndex;                                                                  // 0x0288 (size: 0x4)
    class UUI_Gallery_C* GalleryReference;                                            // 0x0290 (size: 0x8)

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Initialize(class UUI_Gallery_C* GalleryReference, int32 PageIndex);
    void ResetPage();
    void UpdatePage();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_UI_PhotoPage(int32 EntryPoint);
}; // Size: 0x298

#endif
