#ifndef UE4SS_SDK_B_SirenLight_Sewer_HPP
#define UE4SS_SDK_B_SirenLight_Sewer_HPP

class AB_SirenLight_Sewer_C : public AB_Point_Light_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0380 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_B_SirenLight_Sewer(int32 EntryPoint);
}; // Size: 0x388

#endif
