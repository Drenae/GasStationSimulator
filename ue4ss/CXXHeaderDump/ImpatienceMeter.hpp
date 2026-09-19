#ifndef UE4SS_SDK_ImpatienceMeter_HPP
#define UE4SS_SDK_ImpatienceMeter_HPP

class UImpatienceMeter_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* Image;                                                              // 0x0268 (size: 0x8)
    class UImage* Image_calm;                                                         // 0x0270 (size: 0x8)
    float ImpatienceLevel;                                                            // 0x0278 (size: 0x4)
    float ImpatienceProgressChange;                                                   // 0x027C (size: 0x4)
    bool bImpatienceChange;                                                           // 0x0280 (size: 0x1)
    FLinearColor Color1;                                                              // 0x0284 (size: 0x10)
    FLinearColor Color2;                                                              // 0x0294 (size: 0x10)
    class UMaterialInterface* Material_IMG;                                           // 0x02A8 (size: 0x8)

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ChangeProgress();
    void UpdateProgressEvent(float AmountToPass);
    void OnCalmSkillUsed(float NewImpatienceValue);
    void ImpatienceChangeProcess();
    void ExecuteUbergraph_ImpatienceMeter(int32 EntryPoint);
}; // Size: 0x2B0

#endif
