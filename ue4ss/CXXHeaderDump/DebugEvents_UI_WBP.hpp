#ifndef UE4SS_SDK_DebugEvents_UI_WBP_HPP
#define UE4SS_SDK_DebugEvents_UI_WBP_HPP

class UDebugEvents_UI_WBP_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UEventDebugLine_WBP_C* EventDebugLine_WBP;                                  // 0x0268 (size: 0x8)
    class UVerticalBox* EventList;                                                    // 0x0270 (size: 0x8)

    void Construct();
    void ExecuteUbergraph_DebugEvents_UI_WBP(int32 EntryPoint);
}; // Size: 0x278

#endif
