#ifndef UE4SS_SDK_Uncle_Vip_Car_BP_HPP
#define UE4SS_SDK_Uncle_Vip_Car_BP_HPP

class AUncle_Vip_Car_BP_C : public A00_Vehicle_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05D8 (size: 0x8)
    class UStaticMeshComponent* AmericanCar_Horns;                                    // 0x05E0 (size: 0x8)
    class UStaticMeshComponent* AmericanCar_Static_shadowcaster;                      // 0x05E8 (size: 0x8)

    bool IsVIPCar();
    void ReceiveBeginPlay();
    void EnableLamps_1(const bool Enable);
    void ExecuteUbergraph_Uncle_Vip_Car_BP(int32 EntryPoint);
}; // Size: 0x5F0

#endif
