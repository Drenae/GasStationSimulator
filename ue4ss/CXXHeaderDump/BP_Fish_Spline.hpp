#ifndef UE4SS_SDK_BP_Fish_Spline_HPP
#define UE4SS_SDK_BP_Fish_Spline_HPP

class ABP_Fish_Spline_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0228 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0230 (size: 0x8)
    float Fish_Offset_Lerp_78CB6F01443558170C516486B9B2544D;                          // 0x0238 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Fish_Offset__Direction_78CB6F01443558170C516486B9B2544D; // 0x023C (size: 0x1)
    class UTimelineComponent* Fish_Offset;                                            // 0x0240 (size: 0x8)
    float FishMovement_Tail_C86D861F485439D28877BEA0CF194E72;                         // 0x0248 (size: 0x4)
    float FishMovement_Lerp_C86D861F485439D28877BEA0CF194E72;                         // 0x024C (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> FishMovement__Direction_C86D861F485439D28877BEA0CF194E72; // 0x0250 (size: 0x1)
    class UTimelineComponent* FishMovement;                                           // 0x0258 (size: 0x8)
    int32 NumberOfFish;                                                               // 0x0260 (size: 0x4)
    float FishScale;                                                                  // 0x0264 (size: 0x4)
    TArray<UStaticMeshComponent*> FishMeshes;                                         // 0x0268 (size: 0x10)
    TArray<UMaterialInstanceDynamic*> FishMaterials;                                  // 0x0278 (size: 0x10)
    float StartingPosition;                                                           // 0x0288 (size: 0x4)
    int32 LoopsPerMinute;                                                             // 0x028C (size: 0x4)
    float Tail_Speed;                                                                 // 0x0290 (size: 0x4)
    float RandomiseStart;                                                             // 0x0294 (size: 0x4)
    float RandomiseOffset;                                                            // 0x0298 (size: 0x4)
    TArray<FVector> Offset;                                                           // 0x02A0 (size: 0x10)
    TArray<FVector> OffsetStart;                                                      // 0x02B0 (size: 0x10)
    TArray<FVector> OffsetEnd;                                                        // 0x02C0 (size: 0x10)
    class UStaticMesh* FishMesh;                                                      // 0x02D0 (size: 0x8)
    TArray<float> TailRandom;                                                         // 0x02D8 (size: 0x10)
    TArray<float> PositionRandom;                                                     // 0x02E8 (size: 0x10)
    float OffsetDelay;                                                                // 0x02F8 (size: 0x4)
    float DistanceThreshold;                                                          // 0x02FC (size: 0x4)

    void UpdateFish(float Position, int32 FishIndex);
    void UserConstructionScript();
    void FishMovement__FinishedFunc();
    void FishMovement__UpdateFunc();
    void Fish_Offset__FinishedFunc();
    void Fish_Offset__UpdateFunc();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Fish_Spline(int32 EntryPoint);
}; // Size: 0x300

#endif
