#ifndef UE4SS_SDK_WBP_YouEarnedDolar_HPP
#define UE4SS_SDK_WBP_YouEarnedDolar_HPP

class UWBP_YouEarnedDolar_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* ConstructAnim;                                            // 0x0268 (size: 0x8)

    void Construct();
    void ExecuteUbergraph_WBP_YouEarnedDolar(int32 EntryPoint);
}; // Size: 0x270

#endif
