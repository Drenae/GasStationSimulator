#ifndef UE4SS_SDK_BrakeDIsc_BP_HPP
#define UE4SS_SDK_BrakeDIsc_BP_HPP

class ABrakeDisc_BP_C : public AVehiclePart
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UAudioComponent* TireOn;                                                    // 0x03C8 (size: 0x8)
    class AWheel_BP_C* CurrentWheel;                                                  // 0x03D0 (size: 0x8)

    bool SimpleInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    void EnableBrakeDiscCollision(bool Enable);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BrakeDisc_BP(int32 EntryPoint);
}; // Size: 0x3D8

#endif
