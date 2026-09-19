#ifndef UE4SS_SDK_AirportSandstormSpawner_BP_HPP
#define UE4SS_SDK_AirportSandstormSpawner_BP_HPP

class AAirportSandstormSpawner_BP_C : public ASandstormSpawner_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)

    void ReceiveBeginPlay();
    void ReceiveDestroyed();
    void SetSandstormTime(int32 Time);
    void ExecuteUbergraph_AirportSandstormSpawner_BP(int32 EntryPoint);
}; // Size: 0x278

#endif
