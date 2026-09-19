#ifndef UE4SS_SDK_PoliceCar_BP_HPP
#define UE4SS_SDK_PoliceCar_BP_HPP

class APoliceCar_BP_C : public A00_Vehicle_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05D8 (size: 0x8)
    class UStaticMeshComponent* SM_VintageCar_STATIC_shadowcaster;                    // 0x05E0 (size: 0x8)
    class UStaticMeshComponent* SM_ORV_FlashingLight;                                 // 0x05E8 (size: 0x8)
    class UStaticMeshComponent* cccc;                                                 // 0x05F0 (size: 0x8)
    TArray<ABrakeDisc_BP_C*> BrakeDiscs_0;                                            // 0x05F8 (size: 0x10)
    float Flashing Light Emissive str;                                                // 0x0608 (size: 0x4)
    int32 Flashing Light Var;                                                         // 0x060C (size: 0x4)
    bool Add Flashing Light;                                                          // 0x0610 (size: 0x1)
    class UMaterialInstanceDynamic* Glass material;                                   // 0x0618 (size: 0x8)
    bool FlashLight ON;                                                               // 0x0620 (size: 0x1)
    class UMaterialInstanceDynamic* Siren Texture;                                    // 0x0628 (size: 0x8)
    float Flashing Light Blinking Speed;                                              // 0x0630 (size: 0x4)
    bool SirenLoc;                                                                    // 0x0634 (size: 0x1)

    bool DisplayInteractionInfo(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent, class UStaticMeshComponent*& StaticMeshComponent);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_PoliceCar_BP(int32 EntryPoint);
}; // Size: 0x635

#endif
