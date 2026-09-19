#ifndef UE4SS_SDK_Food_2_HPP
#define UE4SS_SDK_Food_2_HPP

class AFood_2_C : public AFoodBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0380 (size: 0x8)

    void ReceiveBeginPlay();
    void ReceiveDestroyed();
    void ExecuteUbergraph_Food_2(int32 EntryPoint);
}; // Size: 0x388

#endif
