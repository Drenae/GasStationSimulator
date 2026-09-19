#ifndef UE4SS_SDK_BP_Oceanology_Lake_HPP
#define UE4SS_SDK_BP_Oceanology_Lake_HPP

class ABP_Oceanology_Lake_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UDecalComponent* Caustics;                                                  // 0x0228 (size: 0x8)
    class UBoxComponent* Underwater;                                                  // 0x0230 (size: 0x8)
    class UStaticMeshComponent* Lake;                                                 // 0x0238 (size: 0x8)
    class UPostProcessComponent* Underwater Post;                                     // 0x0240 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0248 (size: 0x8)
    FVector Height;                                                                   // 0x0250 (size: 0xC)
    TArray<UPrimitiveComponent*> Primitives List;                                     // 0x0260 (size: 0x10)
    bool Activate Buoyancy;                                                           // 0x0270 (size: 0x1)
    float Water Density;                                                              // 0x0274 (size: 0x4)
    float Gravity;                                                                    // 0x0278 (size: 0x4)
    float Normal Angular Damping;                                                     // 0x027C (size: 0x4)
    float Normal Linear Damping;                                                      // 0x0280 (size: 0x4)
    float Water Angular Damping;                                                      // 0x0284 (size: 0x4)
    float Water Linear Damping;                                                       // 0x0288 (size: 0x4)
    class UMaterialInterface* Water Material;                                         // 0x0290 (size: 0x8)
    class UMaterialInstance* Underwater Post-Process Material;                        // 0x0298 (size: 0x8)
    class UMaterialInstanceDynamic* Post-Process DYN;                                 // 0x02A0 (size: 0x8)
    class UMaterialInstanceDynamic* Decal DY;                                         // 0x02A8 (size: 0x8)

    void UserConstructionScript();
    void EnteredWater?();
    void ExitedWater?();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ReceiveActorEndOverlap(class AActor* OtherActor);
    void BndEvt__BP_Oceanology_Lake_Lake_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_Oceanology_Lake_Lake_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_BP_Oceanology_Lake(int32 EntryPoint);
}; // Size: 0x2B0

#endif
