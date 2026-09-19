#ifndef UE4SS_SDK_Computer_HPP
#define UE4SS_SDK_Computer_HPP

class AComputer_C : public AComputer
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0400 (size: 0x8)
    class USkeletalMeshComponent* SnoopDogg01_v01_SK;                                 // 0x0408 (size: 0x8)
    class UAudioComponent* PCRunSound;                                                // 0x0410 (size: 0x8)
    class UUserWidget* NewVar_0;                                                      // 0x0418 (size: 0x8)
    class UMaterialInterface* Material;                                               // 0x0420 (size: 0x8)

    FName GetInteractionName();
    bool CanBeInteractable(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    bool DisplayInteractionInfo(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent, class UStaticMeshComponent*& StaticMeshComponent);
    bool SimpleInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    void EnableElectrocity(const bool On);
    void ShowLevel();
    void ReceiveBeginPlay();
    void ToggleSkeletalTick();
    void ExecuteUbergraph_Computer(int32 EntryPoint);
}; // Size: 0x428

#endif
