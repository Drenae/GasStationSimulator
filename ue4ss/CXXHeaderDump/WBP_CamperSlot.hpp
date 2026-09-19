#ifndef UE4SS_SDK_WBP_CamperSlot_HPP
#define UE4SS_SDK_WBP_CamperSlot_HPP

class UWBP_CamperSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UOverlay* Blocker1;                                                         // 0x0268 (size: 0x8)
    class UImage* Camper1;                                                            // 0x0270 (size: 0x8)
    class UImage* Image_lock1;                                                        // 0x0278 (size: 0x8)
    FCamperStruct CamperStruct;                                                       // 0x0280 (size: 0x40)

    void Construct();
    void CheckState();
    void ExecuteUbergraph_WBP_CamperSlot(int32 EntryPoint);
}; // Size: 0x2C0

#endif
