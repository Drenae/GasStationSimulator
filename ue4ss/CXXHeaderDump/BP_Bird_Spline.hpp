#ifndef UE4SS_SDK_BP_Bird_Spline_HPP
#define UE4SS_SDK_BP_Bird_Spline_HPP

class ABP_Bird_Spline_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0228 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0230 (size: 0x8)
    float FlattenWing_LittleFlap_6C108F184CB98FFAEA18C59A4759F707;                    // 0x0238 (size: 0x4)
    float FlattenWing_BigFlap_6C108F184CB98FFAEA18C59A4759F707;                       // 0x023C (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> FlattenWing__Direction_6C108F184CB98FFAEA18C59A4759F707; // 0x0240 (size: 0x1)
    class UTimelineComponent* FlattenWing;                                            // 0x0248 (size: 0x8)
    float Bird_Movement_Wing_2316A6FE4C9838D57A245E8E07B0480C;                        // 0x0250 (size: 0x4)
    float Bird_Movement_Lerp_2316A6FE4C9838D57A245E8E07B0480C;                        // 0x0254 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Bird_Movement__Direction_2316A6FE4C9838D57A245E8E07B0480C; // 0x0258 (size: 0x1)
    class UTimelineComponent* Bird_Movement;                                          // 0x0260 (size: 0x8)
    float Bird_Offset_Lerp_F99833EA4C008EEB390B35B1B76C6B38;                          // 0x0268 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Bird_Offset__Direction_F99833EA4C008EEB390B35B1B76C6B38; // 0x026C (size: 0x1)
    class UTimelineComponent* Bird_Offset;                                            // 0x0270 (size: 0x8)
    int32 NumberOfBirds;                                                              // 0x0278 (size: 0x4)
    float BirdScale;                                                                  // 0x027C (size: 0x4)
    TArray<UStaticMeshComponent*> BirdMeshes;                                         // 0x0280 (size: 0x10)
    TArray<UMaterialInstanceDynamic*> BirdMaterials;                                  // 0x0290 (size: 0x10)
    bool PreviewSplinePoints;                                                         // 0x02A0 (size: 0x1)
    bool bIsLoop;                                                                     // 0x02A1 (size: 0x1)
    float StartingPosition;                                                           // 0x02A4 (size: 0x4)
    int32 LoopsPerMinute;                                                             // 0x02A8 (size: 0x4)
    float FlapSpeed;                                                                  // 0x02AC (size: 0x4)
    float RandomiseStart;                                                             // 0x02B0 (size: 0x4)
    float RandomiseOffset;                                                            // 0x02B4 (size: 0x4)
    TArray<FVector> Offset;                                                           // 0x02B8 (size: 0x10)
    TArray<FVector> OffsetStart;                                                      // 0x02C8 (size: 0x10)
    TArray<FVector> OffsetEnd;                                                        // 0x02D8 (size: 0x10)
    class UStaticMesh* BirdMesh;                                                      // 0x02E8 (size: 0x8)
    TArray<float> FlapRandom;                                                         // 0x02F0 (size: 0x10)
    TArray<float> PositionRandom;                                                     // 0x0300 (size: 0x10)
    bool NewVar_0;                                                                    // 0x0310 (size: 0x1)
    float DistanceThreshold;                                                          // 0x0314 (size: 0x4)

    void UpdateBird(float Position, int32 BirdIndex);
    void UserConstructionScript();
    void Bird_Movement__FinishedFunc();
    void Bird_Movement__UpdateFunc();
    void Bird_Offset__FinishedFunc();
    void Bird_Offset__UpdateFunc();
    void FlattenWing__FinishedFunc();
    void FlattenWing__UpdateFunc();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_Bird_Spline(int32 EntryPoint);
}; // Size: 0x318

#endif
