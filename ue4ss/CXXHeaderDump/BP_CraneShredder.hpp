#ifndef UE4SS_SDK_BP_CraneShredder_HPP
#define UE4SS_SDK_BP_CraneShredder_HPP

class ABP_CraneShredder_C : public ACraneShredder
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03E8 (size: 0x8)
    class UWidgetComponent* EXPGainPopup;                                             // 0x03F0 (size: 0x8)
    class UBoxComponent* InsidePlayerBlocker;                                         // 0x03F8 (size: 0x8)
    bool IsLidOverlappingWreck;                                                       // 0x0400 (size: 0x1)
    class AJunkyardCarWreck* OverlappedWreck;                                         // 0x0408 (size: 0x8)
    TArray<FNPAITaskStruct> SeanSpawnTasks;                                           // 0x0410 (size: 0x10)
    FVector StartingExpPopupLocation;                                                 // 0x0420 (size: 0xC)
    float ExpPopupRiseSpeed;                                                          // 0x042C (size: 0x4)
    bool IsExpPopupActive;                                                            // 0x0430 (size: 0x1)
    FTimerHandle ExpPopupTimer;                                                       // 0x0438 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void BndEvt__BP_CraneShredder_OpenLidOverlap_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_CraneShredder_OpenLidOverlap_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void DEBUG_SpawnSean();
    void DEBUG_UnlockCrusher();
    void CreateExperiencePopup(int32 ExperienceGained);
    void ReceiveBeginPlay();
    void DeactivatePopup();
    void ExecuteUbergraph_BP_CraneShredder(int32 EntryPoint);
}; // Size: 0x440

#endif
