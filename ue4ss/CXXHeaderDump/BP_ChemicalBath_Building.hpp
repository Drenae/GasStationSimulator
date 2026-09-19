#ifndef UE4SS_SDK_BP_ChemicalBath_Building_HPP
#define UE4SS_SDK_BP_ChemicalBath_Building_HPP

class ABP_ChemicalBath_Building_C : public AChemicalBath_Building
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05C0 (size: 0x8)

    void SetActorLevel(int32 Level, bool bLoadedFromSaveGame, bool bNewVersion);
    void ExecuteUbergraph_BP_ChemicalBath_Building(int32 EntryPoint);
}; // Size: 0x5C8

#endif
