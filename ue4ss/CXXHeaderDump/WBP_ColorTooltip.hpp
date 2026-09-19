#ifndef UE4SS_SDK_WBP_ColorTooltip_HPP
#define UE4SS_SDK_WBP_ColorTooltip_HPP

class UWBP_ColorTooltip_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* Logo;                                                               // 0x0268 (size: 0x8)
    class UTextBlock* Name;                                                           // 0x0270 (size: 0x8)
    FCarPaintColor ColorData;                                                         // 0x0278 (size: 0x68)

    void OnLoaded_CF7F4153433DAE926D1C038AC635D3D9(class UObject* Loaded);
    void Construct();
    void ExecuteUbergraph_WBP_ColorTooltip(int32 EntryPoint);
}; // Size: 0x2E0

#endif
