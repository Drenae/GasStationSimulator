#ifndef UE4SS_SDK_BP_TelegraphPole_01_A_HPP
#define UE4SS_SDK_BP_TelegraphPole_01_A_HPP

class ABP_TelegraphPole_01_A_C : public AActor
{
    class UStaticMeshComponent* SM_TelegraphPoleTransformer_01;                       // 0x0220 (size: 0x8)
    class USplineMeshComponent* SplineMesh2;                                          // 0x0228 (size: 0x8)
    class UBillboardComponent* Billboard2;                                            // 0x0230 (size: 0x8)
    class USplineMeshComponent* SplineMesh1;                                          // 0x0238 (size: 0x8)
    class USplineMeshComponent* SplineMesh;                                           // 0x0240 (size: 0x8)
    class UBillboardComponent* Billboard1;                                            // 0x0248 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0250 (size: 0x8)
    class UStaticMeshComponent* TelegraphPole_01_A;                                   // 0x0258 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0260 (size: 0x8)
    FRotator Hang Amount;                                                             // 0x0268 (size: 0xC)
    FTransform End Transform;                                                         // 0x0280 (size: 0x30)
    FTransform Start Transform;                                                       // 0x02B0 (size: 0x30)
    FVector Distance;                                                                 // 0x02E0 (size: 0xC)
    bool UseTransformer;                                                              // 0x02EC (size: 0x1)
    bool UseLight;                                                                    // 0x02ED (size: 0x1)

    void UserConstructionScript();
}; // Size: 0x2EE

#endif
