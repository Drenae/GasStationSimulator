#ifndef UE4SS_SDK_BP_CrushedCar_Color_HPP
#define UE4SS_SDK_BP_CrushedCar_Color_HPP

class ABP_CrushedCar_Color_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UArrowComponent* arrow;                                                     // 0x0228 (size: 0x8)
    class UStaticMeshComponent* SM_CrushedCar;                                        // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)
    FColor Color;                                                                     // 0x0240 (size: 0x4)
    float SecondsToStartDisappearing;                                                 // 0x0244 (size: 0x4)
    float ImmobileVelocityTreshold;                                                   // 0x0248 (size: 0x4)
    float CurrentImmobileTime;                                                        // 0x024C (size: 0x4)
    float SinkingSpeed;                                                               // 0x0250 (size: 0x4)
    float DestroyHeight;                                                              // 0x0254 (size: 0x4)
    bool IsSinking;                                                                   // 0x0258 (size: 0x1)
    class UMaterialInstanceDynamic* MaterialInstance;                                 // 0x0260 (size: 0x8)

    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void UpdateColor(FColor NewColor);
    void ExecuteUbergraph_BP_CrushedCar_Color(int32 EntryPoint);
}; // Size: 0x268

#endif
