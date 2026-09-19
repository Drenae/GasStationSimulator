#ifndef UE4SS_SDK_WBP_ContractCarPart_HPP
#define UE4SS_SDK_WBP_ContractCarPart_HPP

class UWBP_ContractCarPart_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* CheckAnim;                                                // 0x0268 (size: 0x8)
    class UTextBlock* AdditionalInfo;                                                 // 0x0270 (size: 0x8)
    class UImage* CarPart_BG_IMG;                                                     // 0x0278 (size: 0x8)
    class UImage* CarPartColor_Icon;                                                  // 0x0280 (size: 0x8)
    class UCheckBox* CheckBox_120;                                                    // 0x0288 (size: 0x8)
    class UImage* CheckedBG;                                                          // 0x0290 (size: 0x8)
    class UTextBlock* Main_Name;                                                      // 0x0298 (size: 0x8)
    class UImage* Material_Decal_PaintStyle_Icon;                                     // 0x02A0 (size: 0x8)
    class UImage* Storage_Icon;                                                       // 0x02A8 (size: 0x8)
    FSavedCarPart CarPartStructure;                                                   // 0x02B0 (size: 0x128)
    EJunkyardCarPartType CarPartType;                                                 // 0x03D8 (size: 0x1)
    FLinearColor TierColor;                                                           // 0x03DC (size: 0x10)
    bool bIsUsedInCustomization;                                                      // 0x03EC (size: 0x1)

    void CheckPlayerHasPartByTier(class USpecialContract* Target, EJunkyardPartRarity Rarity, EJunkyardCarPartType Type, class AJunkyardCarWreck* CarWreck, bool& bHas);
    void SetReqTypeVisibility_0(bool PaintReq);
    void SetMaterial_Decal_PaintStyle(TSoftObjectPtr<class UTexture2D> Texture, FText Name, FText Category);
    void NameRequired(FText CarPartName);
    void RarityRequired(bool bIsReq);
    void SetCarPart(FText Name, TSoftObjectPtr<class UTexture2D> Icon, bool RequiresTier, EJunkyardPartRarity Tier, FText CarPartType, bool OnlyTierRequired, class USpecialContract* SpecialContractRef, EJunkyardCarPartType Type, class AJunkyardCarWreck* CarWreckRef);
    void SetDecal(TSoftObjectPtr<class UTexture2D> DecalIcon, FText DecalCategory, FText DecalAdditional);
    void SetCarPartColor(FText CarPartText, FText ColorCode, FLinearColor ColorRequired, TSoftObjectPtr<class UTexture2D> PartIcon);
    void Set Wreck(FText Name, TSoftObjectPtr<class UTexture2D> Icon, FText TierName, bool bIsReq, FLinearColor TierColor);
    void SetReqTypeVisibility(bool PaintReq);
    void SetUnchecked();
    void SetChecked();
    void OnLoaded_D80AA01E4CA4CDE8314209B47B97801B(class UObject* Loaded);
    void OnLoaded_41ECD02543EE3CC89DEFA3A1C9C75156(class UObject* Loaded);
    void OnLoaded_CDF22E29456D870D3174A8A8453DCF7E(class UObject* Loaded);
    void OnLoaded_50BF6BEE4D310AA70E9505AC6032C9D5(class UObject* Loaded);
    void Construct();
    void LoadCarPartTexture(TSoftObjectPtr<class UTexture2D> Icon);
    void LoadPaintTexture(TSoftObjectPtr<class UTexture2D> Texture);
    void LoadColorTexture(TSoftObjectPtr<class UTexture2D> Texture);
    void ExecuteUbergraph_WBP_ContractCarPart(int32 EntryPoint);
}; // Size: 0x3ED

#endif
