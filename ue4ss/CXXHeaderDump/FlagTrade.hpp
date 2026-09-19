#ifndef UE4SS_SDK_FlagTrade_HPP
#define UE4SS_SDK_FlagTrade_HPP

class UFlagTrade_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* FlagMaterial_IMG;                                                   // 0x0268 (size: 0x8)
    class UTexture* Image;                                                            // 0x0270 (size: 0x8)

    void Construct();
    void ExecuteUbergraph_FlagTrade(int32 EntryPoint);
}; // Size: 0x278

#endif
