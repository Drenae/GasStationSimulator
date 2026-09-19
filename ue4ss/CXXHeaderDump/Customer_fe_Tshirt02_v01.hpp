#ifndef UE4SS_SDK_Customer_fe_Tshirt02_v01_HPP
#define UE4SS_SDK_Customer_fe_Tshirt02_v01_HPP

class ACustomer_fe_Tshirt02_v01_C : public AAIHumanBase_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0A10 (size: 0x8)
    class USkeletalMeshComponent* fe_hair09_v01_SK;                                   // 0x0A18 (size: 0x8)
    FName Simulated Bone Name;                                                        // 0x0A20 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Customer_fe_Tshirt02_v01(int32 EntryPoint);
}; // Size: 0xA28

#endif
