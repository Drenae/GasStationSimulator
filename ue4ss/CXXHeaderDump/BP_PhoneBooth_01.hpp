#ifndef UE4SS_SDK_BP_PhoneBooth_01_HPP
#define UE4SS_SDK_BP_PhoneBooth_01_HPP

class ABP_PhoneBooth_01_C : public APhoneBooth
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0420 (size: 0x8)
    class UAudioComponent* UncleVoice8th;                                             // 0x0428 (size: 0x8)
    class UAudioComponent* UncleVoice7th;                                             // 0x0430 (size: 0x8)
    class UAudioComponent* UncleVoice6th;                                             // 0x0438 (size: 0x8)
    class UAudioComponent* UncleVoice5th;                                             // 0x0440 (size: 0x8)
    class UAudioComponent* UncleVoice4th;                                             // 0x0448 (size: 0x8)
    class UAudioComponent* UncleVoice3rd;                                             // 0x0450 (size: 0x8)
    class UAudioComponent* PhonePickup;                                               // 0x0458 (size: 0x8)
    class UAudioComponent* UncleVoice2nd;                                             // 0x0460 (size: 0x8)
    class UAudioComponent* UncleVoice1st;                                             // 0x0468 (size: 0x8)
    class UAudioComponent* PhoneRing;                                                 // 0x0470 (size: 0x8)
    class UStaticMeshComponent* StaticMesh4;                                          // 0x0478 (size: 0x8)
    class UStaticMeshComponent* StaticMesh3;                                          // 0x0480 (size: 0x8)
    class UStaticMeshComponent* StaticMesh2;                                          // 0x0488 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x0490 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0498 (size: 0x8)
    class UStaticMeshComponent* SM_Coins_01_A;                                        // 0x04A0 (size: 0x8)
    class UStaticMeshComponent* SM_Can_01_A;                                          // 0x04A8 (size: 0x8)
    class UStaticMeshComponent* SM_Phone_01;                                          // 0x04B0 (size: 0x8)
    class UStaticMeshComponent* SM_PhoneBoothGlass_01;                                // 0x04B8 (size: 0x8)
    class UStaticMeshComponent* SM_WallLamp_01_LightShaft;                            // 0x04C0 (size: 0x8)

    bool SimpleInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    bool DisplayInteractionInfo(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent, class UStaticMeshComponent*& StaticMeshComponent);
    void ReceiveBeginPlay();
    void ReceiveDestroyed();
    void DisableInteractionInfo(class APawn* Pawn);
    void ExecuteUbergraph_BP_PhoneBooth_01(int32 EntryPoint);
}; // Size: 0x4C8

#endif
