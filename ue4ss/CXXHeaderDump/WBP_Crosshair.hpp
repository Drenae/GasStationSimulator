#ifndef UE4SS_SDK_WBP_Crosshair_HPP
#define UE4SS_SDK_WBP_Crosshair_HPP

class UWBP_Crosshair_C : public UGSSInnerWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0288 (size: 0x8)
    class UImage* Cross_Pointer;                                                      // 0x0290 (size: 0x8)
    class UImage* Pointer_Frame;                                                      // 0x0298 (size: 0x8)

    void Construct();
    void ExecuteUbergraph_WBP_Crosshair(int32 EntryPoint);
}; // Size: 0x2A0

#endif
