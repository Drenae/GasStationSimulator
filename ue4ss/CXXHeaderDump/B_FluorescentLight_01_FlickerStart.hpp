#ifndef UE4SS_SDK_B_FluorescentLight_01_FlickerStart_HPP
#define UE4SS_SDK_B_FluorescentLight_01_FlickerStart_HPP

class AB_FluorescentLight_01_FlickerStart_C : public AB_Rect_Light_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0380 (size: 0x8)

    void LightsOn();
    void ExecuteUbergraph_B_FluorescentLight_01_FlickerStart(int32 EntryPoint);
}; // Size: 0x388

#endif
