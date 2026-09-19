#ifndef UE4SS_SDK_ContractSinglePosition_HPP
#define UE4SS_SDK_ContractSinglePosition_HPP

class UContractSinglePosition_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UTextBlock* PositionName_TXT;                                               // 0x0268 (size: 0x8)
    class UTextBlock* ValueNeeded_TXT;                                                // 0x0270 (size: 0x8)
    FText Requirement;                                                                // 0x0278 (size: 0x18)
    bool bMet;                                                                        // 0x0290 (size: 0x1)

    void Construct();
    void ExecuteUbergraph_ContractSinglePosition(int32 EntryPoint);
}; // Size: 0x291

#endif
