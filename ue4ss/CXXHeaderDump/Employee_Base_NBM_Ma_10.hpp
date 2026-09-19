#ifndef UE4SS_SDK_Employee_Base_NBM_Ma_10_HPP
#define UE4SS_SDK_Employee_Base_NBM_Ma_10_HPP

class AEmployee_Base_NBM_Ma_10_C : public AEmployee_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0A58 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_Employee_Base_NBM_Ma_10(int32 EntryPoint);
}; // Size: 0xA60

#endif
