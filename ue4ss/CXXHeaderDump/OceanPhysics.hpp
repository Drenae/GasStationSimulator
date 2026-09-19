#ifndef UE4SS_SDK_OceanPhysics_HPP
#define UE4SS_SDK_OceanPhysics_HPP

class UOceanPhysics_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)
    class ABP_Oceanology_Infinity_C* Oceanology;                                      // 0x00B8 (size: 0x8)
    class AActor* Owner;                                                              // 0x00C0 (size: 0x8)
    class UPrimitiveComponent* PrimComponent;                                         // 0x00C8 (size: 0x8)
    bool EnableBuoyancy;                                                              // 0x00D0 (size: 0x1)
    TArray<FVector> Buoyancy Points;                                                  // 0x00D8 (size: 0x10)
    bool Display Buoyancy Points;                                                     // 0x00E8 (size: 0x1)
    float LinearDamping;                                                              // 0x00EC (size: 0x4)
    float AngularDamping;                                                             // 0x00F0 (size: 0x4)
    float Mass;                                                                       // 0x00F4 (size: 0x4)
    float Point Thickness;                                                            // 0x00F8 (size: 0x4)
    float Displacement Force;                                                         // 0x00FC (size: 0x4)
    bool Is Under;                                                                    // 0x0100 (size: 0x1)
    FVector Force;                                                                    // 0x0104 (size: 0xC)
    FVector Location;                                                                 // 0x0110 (size: 0xC)
    FTransform ActorTransform;                                                        // 0x0120 (size: 0x30)
    int32 Int;                                                                        // 0x0150 (size: 0x4)
    TArray<float> Depth Calculation;                                                  // 0x0158 (size: 0x10)
    bool Depth Event;                                                                 // 0x0168 (size: 0x1)
    float Amount;                                                                     // 0x016C (size: 0x4)
    float LinearDampingOutOfWater;                                                    // 0x0170 (size: 0x4)
    FOceanPhysics_COnWaterEnter OnWaterEnter;                                         // 0x0178 (size: 0x10)
    void OnWaterEnter();
    FOceanPhysics_COnWaterExit OnWaterExit;                                           // 0x0188 (size: 0x10)
    void OnWaterExit();

    void Entered Water();
    void Exited Water();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_OceanPhysics(int32 EntryPoint);
    void OnWaterExit__DelegateSignature();
    void OnWaterEnter__DelegateSignature();
}; // Size: 0x198

#endif
