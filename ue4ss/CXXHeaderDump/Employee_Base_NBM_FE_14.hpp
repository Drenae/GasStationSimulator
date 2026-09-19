#ifndef UE4SS_SDK_Employee_Base_NBM_FE_14_HPP
#define UE4SS_SDK_Employee_Base_NBM_FE_14_HPP

class AEmployee_Base_NBM_FE_14_C : public AEmployee_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0A58 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_Employee_Base_NBM_FE_14(int32 EntryPoint);
}; // Size: 0xA60

#endif
