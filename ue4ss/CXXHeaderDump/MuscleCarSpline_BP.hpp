#ifndef UE4SS_SDK_MuscleCarSpline_BP_HPP
#define UE4SS_SDK_MuscleCarSpline_BP_HPP

class AMuscleCarSpline_BP_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UStaticMeshComponent* MuscleCar_LampaLewaTylnia1;                           // 0x0228 (size: 0x8)
    class UStaticMeshComponent* MuscleCar_LampaLewaTylnia;                            // 0x0230 (size: 0x8)
    class UStaticMeshComponent* MuscleCar_Wheel3;                                     // 0x0238 (size: 0x8)
    class UStaticMeshComponent* MuscleCar_Wheel2;                                     // 0x0240 (size: 0x8)
    class UStaticMeshComponent* MuscleCar_Wheel1;                                     // 0x0248 (size: 0x8)
    class UStaticMeshComponent* MuscleCar_Wheel;                                      // 0x0250 (size: 0x8)
    class UStaticMeshComponent* MuscleCar_DrzwiPrawe;                                 // 0x0258 (size: 0x8)
    class UStaticMeshComponent* MuscleCar_DrzwiLewe;                                  // 0x0260 (size: 0x8)
    class USkeletalMeshComponent* MuscleCar_Skeletal_02;                              // 0x0268 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0270 (size: 0x8)
    float PlaneMover_Alpha_BB391020464FD38B977974AA6F7629DF;                          // 0x0278 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> PlaneMover__Direction_BB391020464FD38B977974AA6F7629DF; // 0x027C (size: 0x1)
    class UTimelineComponent* PlaneMover;                                             // 0x0280 (size: 0x8)
    bool ActivePlane;                                                                 // 0x0288 (size: 0x1)
    float alpha;                                                                      // 0x028C (size: 0x4)
    class APlane_Track_BP_C* TrackRef;                                                // 0x0290 (size: 0x8)
    float Duration;                                                                   // 0x0298 (size: 0x4)
    float PlaneStartOffset;                                                           // 0x029C (size: 0x4)

    void PlaneMover__FinishedFunc();
    void PlaneMover__UpdateFunc();
    void MoverPlane();
    void AnyButtonPressed();
    void ExecuteUbergraph_MuscleCarSpline_BP(int32 EntryPoint);
}; // Size: 0x2A0

#endif
