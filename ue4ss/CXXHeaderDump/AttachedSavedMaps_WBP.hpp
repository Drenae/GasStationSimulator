#ifndef UE4SS_SDK_AttachedSavedMaps_WBP_HPP
#define UE4SS_SDK_AttachedSavedMaps_WBP_HPP

class UAttachedSavedMaps_WBP_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* Image_26;                                                           // 0x0268 (size: 0x8)
    FString MapName;                                                                  // 0x0270 (size: 0x10)

    void Construct();
    void ExecuteUbergraph_AttachedSavedMaps_WBP(int32 EntryPoint);
}; // Size: 0x280

#endif
