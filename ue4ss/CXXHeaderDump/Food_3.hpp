#ifndef UE4SS_SDK_Food_3_HPP
#define UE4SS_SDK_Food_3_HPP

class AFood_3_C : public AFoodBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0380 (size: 0x8)

    void ReceiveBeginPlay();
    void ReceiveDestroyed();
    void ExecuteUbergraph_Food_3(int32 EntryPoint);
}; // Size: 0x388

#endif
