#ifndef UE4SS_SDK_WBP_VipRoute_HPP
#define UE4SS_SDK_WBP_VipRoute_HPP

class UWBP_VipRoute_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* Image_bg;                                                           // 0x0268 (size: 0x8)
    class UImage* Image_route;                                                        // 0x0270 (size: 0x8)
    class UTexture2D* BGImage;                                                        // 0x0278 (size: 0x8)
    class UMaterialInterface* MaterialRoute;                                          // 0x0280 (size: 0x8)
    float Progress;                                                                   // 0x0288 (size: 0x4)
    float Debug;                                                                      // 0x028C (size: 0x4)
    FVector2D Desired Size;                                                           // 0x0290 (size: 0x8)
    EDLCName DLCDestination;                                                          // 0x0298 (size: 0x1)

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_VipRoute(int32 EntryPoint);
}; // Size: 0x299

#endif
