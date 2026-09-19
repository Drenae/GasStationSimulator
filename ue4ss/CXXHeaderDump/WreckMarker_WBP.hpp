#ifndef UE4SS_SDK_WreckMarker_WBP_HPP
#define UE4SS_SDK_WreckMarker_WBP_HPP

class UWreckMarker_WBP_C : public UWreckTaskMarker
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* MarkerIcon;                                                         // 0x0268 (size: 0x8)
    class UTextBlock* MarkerText;                                                     // 0x0270 (size: 0x8)
    class UOverlay* Overlay1;                                                         // 0x0278 (size: 0x8)

    void OnLoaded_67AB9371470AF0F8300F4EA17B415E2C(class UObject* Loaded);
    void SetMarkerIcon(ECarWreckMarking NewMarking);
    void ExecuteUbergraph_WreckMarker_WBP(int32 EntryPoint);
}; // Size: 0x280

#endif
