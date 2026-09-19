#ifndef UE4SS_SDK_BP_SewerPipes_HPP
#define UE4SS_SDK_BP_SewerPipes_HPP

class ABP_SewerPipes_C : public AActor
{
    class USplineComponent* Spline;                                                   // 0x0220 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0228 (size: 0x8)
    int32 PipeType;                                                                   // 0x0230 (size: 0x4)
    bool PipeSectionEnable;                                                           // 0x0234 (size: 0x1)

    void UserConstructionScript();
}; // Size: 0x235

#endif
