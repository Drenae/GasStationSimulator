#ifndef UE4SS_SDK_BP_Chains_HPP
#define UE4SS_SDK_BP_Chains_HPP

class ABP_Chains_C : public AActor
{
    class UStaticMeshComponent* EndConnector;                                         // 0x0220 (size: 0x8)
    class UStaticMeshComponent* StartConnector;                                       // 0x0228 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)
    int32 WireType;                                                                   // 0x0240 (size: 0x4)
    bool EnableStartCable;                                                            // 0x0244 (size: 0x1)
    bool EnableEndCable;                                                              // 0x0245 (size: 0x1)

    void UserConstructionScript();
}; // Size: 0x246

#endif
