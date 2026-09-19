#ifndef UE4SS_SDK_BP_ChemicalBath_HPP
#define UE4SS_SDK_BP_ChemicalBath_HPP

class ABP_ChemicalBath_C : public AChemicalBath
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05D0 (size: 0x8)
    class UAudioComponent* SFX_DLC_JY_ChemicalBath_Loop_Cue;                          // 0x05D8 (size: 0x8)
    class UNiagaraComponent* NS_ChemicalBath;                                         // 0x05E0 (size: 0x8)

    FName GetInteractionName();
    bool DisplayInteractionInfo(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent, class UStaticMeshComponent*& StaticMeshComponent);
    bool CanBeInteractable(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    bool SimpleInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_ChemicalBath(int32 EntryPoint);
}; // Size: 0x5E8

#endif
