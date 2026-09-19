#ifndef UE4SS_SDK_CabrioletCar_BP_HPP
#define UE4SS_SDK_CabrioletCar_BP_HPP

class ACabrioletCar_BP_C : public A00_Vehicle_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05D8 (size: 0x8)
    class UStaticMeshComponent* cccc;                                                 // 0x05E0 (size: 0x8)

    bool CanActorGetAttracted();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_CabrioletCar_BP(int32 EntryPoint);
}; // Size: 0x5E8

#endif
