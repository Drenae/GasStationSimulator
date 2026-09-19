#ifndef UE4SS_SDK_BP_NeonLetter_HPP
#define UE4SS_SDK_BP_NeonLetter_HPP

class ABP_NeonLetter_C : public AActor
{
    class UStaticMeshComponent* Neon;                                                 // 0x0220 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0228 (size: 0x8)
    class UStaticMesh* Mesh;                                                          // 0x0230 (size: 0x8)
    float On/Off;                                                                     // 0x0238 (size: 0x4)
    float Flicker?;                                                                   // 0x023C (size: 0x4)
    FColor LightColor;                                                                // 0x0240 (size: 0x4)
    float LightIntensity;                                                             // 0x0244 (size: 0x4)
    float DrawDistance;                                                               // 0x0248 (size: 0x4)

    void UserConstructionScript();
}; // Size: 0x24C

#endif
