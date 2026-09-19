#ifndef UE4SS_SDK_Food_4_HPP
#define UE4SS_SDK_Food_4_HPP

class AFood_4_C : public AFoodBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0380 (size: 0x8)

    void ReceiveBeginPlay();
    void ReceiveDestroyed();
    void ExecuteUbergraph_Food_4(int32 EntryPoint);
}; // Size: 0x388

#endif
