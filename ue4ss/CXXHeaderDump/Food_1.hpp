#ifndef UE4SS_SDK_Food_1_HPP
#define UE4SS_SDK_Food_1_HPP

class AFood_1_C : public AFoodBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0380 (size: 0x8)

    void ReceiveBeginPlay();
    void ReceiveDestroyed();
    void ExecuteUbergraph_Food_1(int32 EntryPoint);
}; // Size: 0x388

#endif
