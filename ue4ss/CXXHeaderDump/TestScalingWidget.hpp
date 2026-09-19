#ifndef UE4SS_SDK_TestScalingWidget_HPP
#define UE4SS_SDK_TestScalingWidget_HPP

class UTestScalingWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* Image_342;                                                          // 0x0268 (size: 0x8)
    class UImage* IMG_ANGRY;                                                          // 0x0270 (size: 0x8)
    class UImage* IMG_AngryEmplo;                                                     // 0x0278 (size: 0x8)
    class UImage* IMG_Dirty;                                                          // 0x0280 (size: 0x8)
    class UImage* IMG_HAPPY;                                                          // 0x0288 (size: 0x8)
    class UImage* IMG_PRODUCT;                                                        // 0x0290 (size: 0x8)
    class UImage* IMG_Waiting;                                                        // 0x0298 (size: 0x8)
    class UOverlay* MainOverlay;                                                      // 0x02A0 (size: 0x8)
    class UOverlay* Overlay_product;                                                  // 0x02A8 (size: 0x8)
    class AAICharacterBase* AICharREF;                                                // 0x02B0 (size: 0x8)
    float RangeClose;                                                                 // 0x02B8 (size: 0x4)
    float RangeMedium;                                                                // 0x02BC (size: 0x4)
    float RangeFar;                                                                   // 0x02C0 (size: 0x4)

    void SetReactionIMG();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void UpdateHappy(const int32 HappyCount, const int32 HappyMin, const int32 HappyMax, const bool bIsHappy, const int32 CurrentPopularityLevel, const class UObject* Instaginator, const FString Reason);
    void Construct();
    void Destruct();
    void DisplayMissingProduct(const TArray<TSubclassOf<class AProduct>>& ItemList, const float DisplayTime);
    void HideAfterDisplay();
    void Colapse();
    void ExecuteUbergraph_TestScalingWidget(int32 EntryPoint);
}; // Size: 0x2C4

#endif
