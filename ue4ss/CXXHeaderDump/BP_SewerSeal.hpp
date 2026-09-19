#ifndef UE4SS_SDK_BP_SewerSeal_HPP
#define UE4SS_SDK_BP_SewerSeal_HPP

class ABP_SewerSeal_C : public AActor
{
    class UStaticMeshComponent* Door;                                                 // 0x0220 (size: 0x8)
    class USceneComponent* Pivot;                                                     // 0x0228 (size: 0x8)
    class UStaticMeshComponent* Frame;                                                // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)
    int32 DoorType;                                                                   // 0x0240 (size: 0x4)
    float DoorRotation;                                                               // 0x0244 (size: 0x4)

    void UserConstructionScript();
}; // Size: 0x248

#endif
