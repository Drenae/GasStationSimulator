#ifndef UE4SS_SDK_Food_5_HPP
#define UE4SS_SDK_Food_5_HPP

class AFood_5_C : public AFoodBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0380 (size: 0x8)

    void ReceiveBeginPlay();
    void ReceiveDestroyed();
    void ExecuteUbergraph_Food_5(int32 EntryPoint);
}; // Size: 0x388

#endif
