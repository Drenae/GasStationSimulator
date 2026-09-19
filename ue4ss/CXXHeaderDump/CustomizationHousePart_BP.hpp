#ifndef UE4SS_SDK_CustomizationHousePart_BP_HPP
#define UE4SS_SDK_CustomizationHousePart_BP_HPP

class ACustomizationHousePart_BP_C : public ACustomizationHousePart
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0320 (size: 0x8)
    class UParticleSystemComponent* VFX_templateBack;                                 // 0x0328 (size: 0x8)
    class UParticleSystemComponent* VFX_templateFront;                                // 0x0330 (size: 0x8)
    class UBoxComponent* FrontBoxSpawner;                                             // 0x0338 (size: 0x8)
    class UBoxComponent* BackBoxSpawner;                                              // 0x0340 (size: 0x8)
    class UArrowComponent* SpawnBack1;                                                // 0x0348 (size: 0x8)
    class UArrowComponent* SpawnFront1;                                               // 0x0350 (size: 0x8)
    class UArrowComponent* FrontArrowBrush;                                           // 0x0358 (size: 0x8)
    class UArrowComponent* BackArrowBrush;                                            // 0x0360 (size: 0x8)
    class UArrowComponent* BackArrow;                                                 // 0x0368 (size: 0x8)
    class UArrowComponent* FrontArrow;                                                // 0x0370 (size: 0x8)
    FTransform TransformPoint;                                                        // 0x0380 (size: 0x30)
    float StartDelay;                                                                 // 0x03B0 (size: 0x4)
    float DistanceToFinish;                                                           // 0x03B4 (size: 0x4)
    EWallSide Wall;                                                                   // 0x03B8 (size: 0x1)
    class ACameraSnapPoint_C* CameraSnapPoint;                                        // 0x03C0 (size: 0x8)

    FName GetInteractionName();
    bool CanBeInteractable(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    void SetupColors();
    FTransform GetInteractiveTransform(class AActor* Actor, bool& RotateToTransform);
    void DestroySide(EWallSide NewParam);
    void ReceiveBeginPlay();
    void PaintingEvent(class APawn* Pawn);
    void AddDecal(class AInteractableDecal* DennisDecal);
    void RemoveDestroyedDecals(class AActor* DestroyedActor);
    void PlayCustomizationHousePartChangeVFX(EWallSide WallSide);
    void ExecuteUbergraph_CustomizationHousePart_BP(int32 EntryPoint);
}; // Size: 0x3C8

#endif
