#ifndef UE4SS_SDK_Alligator_Spline_BP_HPP
#define UE4SS_SDK_Alligator_Spline_BP_HPP

class AAlligator_Spline_BP_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0228 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0230 (size: 0x8)
    class USkeletalMeshComponent* Aligator;                                           // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)
    float PlaneMover_Alpha_324E939F4EF1EC416AAC8DA51BDC8564;                          // 0x0248 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> PlaneMover__Direction_324E939F4EF1EC416AAC8DA51BDC8564; // 0x024C (size: 0x1)
    class UTimelineComponent* PlaneMover;                                             // 0x0250 (size: 0x8)
    bool ActivePlane;                                                                 // 0x0258 (size: 0x1)
    float alpha;                                                                      // 0x025C (size: 0x4)
    class APlane_Track_BP_C* TrackRef;                                                // 0x0260 (size: 0x8)
    float Duration;                                                                   // 0x0268 (size: 0x4)
    float PlaneStartOffset;                                                           // 0x026C (size: 0x4)

    void PlaneMover__FinishedFunc();
    void PlaneMover__UpdateFunc();
    void ReceiveBeginPlay();
    void MoverPlane();
    void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void CustomEvent_0();
    void Hide();
    void ExecuteUbergraph_Alligator_Spline_BP(int32 EntryPoint);
}; // Size: 0x270

#endif
