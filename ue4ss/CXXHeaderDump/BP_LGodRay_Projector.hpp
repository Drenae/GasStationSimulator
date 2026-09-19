#ifndef UE4SS_SDK_BP_LGodRay_Projector_HPP
#define UE4SS_SDK_BP_LGodRay_Projector_HPP

class ABP_LGodRay_Projector_C : public AActor
{
    class UStaticMeshComponent* StaticMesh1;                                          // 0x0220 (size: 0x8)
    class UBillboardComponent* UISprite;                                              // 0x0228 (size: 0x8)
    class UStaticMeshComponent* GodRayMesh;                                           // 0x0230 (size: 0x8)
    class AActor* Sun;                                                                // 0x0238 (size: 0x8)
    float 1. Mesh Width;                                                              // 0x0240 (size: 0x4)
    float 2. Mesh Length;                                                             // 0x0244 (size: 0x4)
    class UMaterialInstanceDynamic* Dynamic material;                                 // 0x0248 (size: 0x8)
    FLinearColor 2. Color;                                                            // 0x0250 (size: 0x10)
    float 3. Brightness;                                                              // 0x0260 (size: 0x4)
    float 5. FadeDistance;                                                            // 0x0264 (size: 0x4)
    bool Animated;                                                                    // 0x0268 (size: 0x1)
    FRandomStream RandomTime;                                                         // 0x026C (size: 0x8)
    bool SpotLight;                                                                   // 0x0274 (size: 0x1)
    bool UseSun;                                                                      // 0x0275 (size: 0x1)

    void UserConstructionScript();
}; // Size: 0x276

#endif
