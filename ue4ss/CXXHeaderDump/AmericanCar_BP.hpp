#ifndef UE4SS_SDK_AmericanCar_BP_HPP
#define UE4SS_SDK_AmericanCar_BP_HPP

class AAmericanCar_BP_C : public A00_Vehicle_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05D8 (size: 0x8)
    class UStaticMeshComponent* AmericanCar_Static_shadowcaster;                      // 0x05E0 (size: 0x8)

    void ReceiveBeginPlay();
    void EnableLamps_1(const bool Enable);
    void ExecuteUbergraph_AmericanCar_BP(int32 EntryPoint);
}; // Size: 0x5E8

#endif
