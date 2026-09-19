#ifndef UE4SS_SDK_AmericanBUS_BP_HPP
#define UE4SS_SDK_AmericanBUS_BP_HPP

class AAmericanBUS_BP_C : public A00_Vehicle_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05D8 (size: 0x8)
    class UStaticMeshComponent* cccc;                                                 // 0x05E0 (size: 0x8)
    class UAudioComponent* BusMusicAttached;                                          // 0x05E8 (size: 0x8)
    class USoundMix* FadeSoundtrack;                                                  // 0x05F0 (size: 0x8)

    bool IsTouristBus();
    void ReceiveDestroyed();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_AmericanBUS_BP(int32 EntryPoint);
}; // Size: 0x5F8

#endif
