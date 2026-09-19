#ifndef UE4SS_SDK_Generator_BP_HPP
#define UE4SS_SDK_Generator_BP_HPP

class AGenerator_BP_C : public AGenerator
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0410 (size: 0x8)
    class UAudioComponent* RadioSoundtrack;                                           // 0x0418 (size: 0x8)
    class UAudioComponent* SOUNDTRACK;                                                // 0x0420 (size: 0x8)
    class UAudioComponent* GeneratorLoopSound;                                        // 0x0428 (size: 0x8)
    class UAudioComponent* GeneratorTurnOnSound;                                      // 0x0430 (size: 0x8)
    class UAudioComponent* GeneratorHandleSound;                                      // 0x0438 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x0440 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0448 (size: 0x8)
    float Timeline_0_NewTrack_0_0381796A47062C13A21F4197A5AFB7BD;                     // 0x0450 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_0381796A47062C13A21F4197A5AFB7BD; // 0x0454 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0458 (size: 0x8)
    TSoftObjectPtr<class USoundCue> SoundtrackSoft;                                   // 0x0460 (size: 0x28)

    bool CanBeInteractable(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    void GeneratorSound();
    bool DisplayInteractionInfo(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent, class UStaticMeshComponent*& StaticMeshComponent);
    FTransform GetInteractiveTransform(class AActor* Actor, bool& RotateToTransform);
    class APathPoint* GetPathPoint(class AGSSWheeledVehicle* GSSWheeledVehicle);
    bool SimpleInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    bool UseItem(class APawn* Pawn, bool Throw, float AimingTime);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void OnLoaded_BEC5AE8B4D3C35C546793B9BA662AAD8(class UObject* Loaded);
    void OnLoaded_FC0B2AF34AF461BB769AA8A4D55972B2(class UObject* Loaded);
    void DisableInteractionInfo(class APawn* Pawn);
    void EnableElectrocity(const bool On);
    void GeneratorEvent(bool bOn);
    void ExecuteUbergraph_Generator_BP(int32 EntryPoint);
}; // Size: 0x488

#endif
