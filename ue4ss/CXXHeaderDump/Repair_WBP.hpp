#ifndef UE4SS_SDK_Repair_WBP_HPP
#define UE4SS_SDK_Repair_WBP_HPP

class URepair_WBP_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* repairAnim;                                               // 0x0268 (size: 0x8)
    class UImage* wrench_left;                                                        // 0x0270 (size: 0x8)
    class UImage* wrench_right;                                                       // 0x0278 (size: 0x8)

    void Finished_0A4627C3452587CEAE0DAA9F38D9E408();
    void Construct();
    void ExecuteUbergraph_Repair_WBP(int32 EntryPoint);
}; // Size: 0x280

#endif
