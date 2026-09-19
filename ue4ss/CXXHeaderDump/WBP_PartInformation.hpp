#ifndef UE4SS_SDK_WBP_PartInformation_HPP
#define UE4SS_SDK_WBP_PartInformation_HPP

class UWBP_PartInformation_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UVerticalBox* CartStats_Vertical;                                           // 0x0268 (size: 0x8)
    class UTextBlock* GSSOnly;                                                        // 0x0270 (size: 0x8)
    class UImage* Image_21;                                                           // 0x0278 (size: 0x8)
    class UTextBlock* PartHeadline_Text;                                              // 0x0280 (size: 0x8)
    class UImage* PartIcon;                                                           // 0x0288 (size: 0x8)
    class UPlatformCarStats_C* Stats_Acceleration;                                    // 0x0290 (size: 0x8)
    class UPlatformCarStats_C* Stats_Handling;                                        // 0x0298 (size: 0x8)
    class UPlatformCarStats_C* Stats_Strenght;                                        // 0x02A0 (size: 0x8)
    class UPlatformCarStats_C* Stats_TopSpeed;                                        // 0x02A8 (size: 0x8)

    void SetupStats(const FCarPartData& CarPartData, EJunkyardCarPartType PartType);
    void SetupName(FText PartName, const TArray<EJunkyardCarPartType>& PartTypes, FCarPartData CarPartData, bool bGarage, TSoftObjectPtr<class UTexture2D> Icon, TSoftObjectPtr<class UTexture2D> RustIcon);
    void OnLoaded_66A057E64E74C9E9CB1788B2F3A57372(class UObject* Loaded);
    void OnLoaded_5FE099824C1787D55E5DA0A1EA16FBBF(class UObject* Loaded);
    void SetupIcon(TSoftObjectPtr<class UTexture2D> Icon, FCarPartData CarPartData, TSoftObjectPtr<class UTexture2D> RustIcon);
    void ExecuteUbergraph_WBP_PartInformation(int32 EntryPoint);
}; // Size: 0x2B0

#endif
