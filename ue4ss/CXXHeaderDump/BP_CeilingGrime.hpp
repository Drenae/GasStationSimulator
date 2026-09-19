#ifndef UE4SS_SDK_BP_CeilingGrime_HPP
#define UE4SS_SDK_BP_CeilingGrime_HPP

class ABP_CeilingGrime_C : public AActor
{
    class UBoxComponent* Box;                                                         // 0x0220 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0228 (size: 0x8)
    float BoundExtent_X;                                                              // 0x0230 (size: 0x4)
    float BoundExtent_Y;                                                              // 0x0234 (size: 0x4)
    int32 GrimeAmount;                                                                // 0x0238 (size: 0x4)
    float ScaleMin;                                                                   // 0x023C (size: 0x4)
    float ScaleMax;                                                                   // 0x0240 (size: 0x4)
    float CurrentScale;                                                               // 0x0244 (size: 0x4)
    TArray<UStaticMesh*> ModelList;                                                   // 0x0248 (size: 0x10)

    void UserConstructionScript();
}; // Size: 0x258

#endif
