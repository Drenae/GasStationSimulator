#ifndef UE4SS_SDK_Spider_Web_BaseClass_BP_HPP
#define UE4SS_SDK_Spider_Web_BaseClass_BP_HPP

class ASpider_Web_BaseClass_BP_C : public ASpiderWebBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class USceneComponent* DefaultSceneRoot1;                                         // 0x0230 (size: 0x8)
    class UStaticMeshComponent* SM_Exo_CobWeb04;                                      // 0x0238 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0240 (size: 0x8)
    ESpiderPositionType SelectedType;                                                 // 0x0248 (size: 0x1)
    TArray<TSoftObjectPtr<class UStaticMesh>> WallStaticMeshes;                       // 0x0250 (size: 0x10)
    TArray<TSoftObjectPtr<class UStaticMesh>> StandingStaticMeshes;                   // 0x0260 (size: 0x10)
    TArray<FRequiredLevel> PlacesRequiredTOSpawn;                                     // 0x0270 (size: 0x10)

    void SetRandomStaticMesh(class UStaticMesh* NewParam);
    void BndEvt__Spider_Web_BaseClass_BP_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Spider_Web_BaseClass_BP_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OnDestroy();
    void ExecuteUbergraph_Spider_Web_BaseClass_BP(int32 EntryPoint);
}; // Size: 0x280

#endif
