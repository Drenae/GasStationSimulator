#ifndef UE4SS_SDK_GSS_InteractionManager_WBP_HPP
#define UE4SS_SDK_GSS_InteractionManager_WBP_HPP

class UGSS_InteractionManager_WBP_C : public UGSS_InteractionManager
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0300 (size: 0x8)
    class UVerticalBox* Interaction_Vertical;                                         // 0x0308 (size: 0x8)

    void Construct();
    void ExecuteUbergraph_GSS_InteractionManager_WBP(int32 EntryPoint);
}; // Size: 0x310

#endif
