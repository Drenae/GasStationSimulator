#ifndef UE4SS_SDK_WBP_CommunicationDevice_HPP
#define UE4SS_SDK_WBP_CommunicationDevice_HPP

class UWBP_CommunicationDevice_C : public UAirplaneHighlightAreaWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWBP_KeyBindedAction_C* LMB;                                                // 0x0268 (size: 0x8)

    void Destruct();
    void KeyBindChanged(const FName ActionName);
    void KeyBindReset();
    void Construct();
    void ExecuteUbergraph_WBP_CommunicationDevice(int32 EntryPoint);
}; // Size: 0x270

#endif
