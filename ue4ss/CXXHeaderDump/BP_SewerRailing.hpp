#ifndef UE4SS_SDK_BP_SewerRailing_HPP
#define UE4SS_SDK_BP_SewerRailing_HPP

class ABP_SewerRailing_C : public AActor
{
    class USplineComponent* Spline;                                                   // 0x0220 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0228 (size: 0x8)

    void UserConstructionScript();
}; // Size: 0x230

#endif
