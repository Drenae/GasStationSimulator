#ifndef UE4SS_SDK_FuelMagazine_HPP
#define UE4SS_SDK_FuelMagazine_HPP

class AFuelMagazine_C : public AInteractableBuilding
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0580 (size: 0x8)
    class UChildActorComponent* FuelWheel;                                            // 0x0588 (size: 0x8)
    class USceneComponent* FuelPlace;                                                 // 0x0590 (size: 0x8)
    bool Open;                                                                        // 0x0598 (size: 0x1)
    TSoftObjectPtr<class UStaticMesh> NewVar_0;                                       // 0x05A0 (size: 0x28)
    TSoftClassPtr<AActor> Actor;                                                      // 0x05C8 (size: 0x28)

    bool DisplayInteractionInfo(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent, class UStaticMeshComponent*& StaticMeshComponent);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_FuelMagazine(int32 EntryPoint);
}; // Size: 0x5F0

#endif
