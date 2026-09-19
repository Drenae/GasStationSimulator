#ifndef UE4SS_SDK_BP_RadioGarage_HPP
#define UE4SS_SDK_BP_RadioGarage_HPP

class ABP_RadioGarage_C : public ABP_Radio_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05B8 (size: 0x8)

    void OnLoaded_6728B7A34E6634E89FF82AB23A25245C(class UObject* Loaded);
    void EnableElectrocity(const bool On);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_RadioGarage(int32 EntryPoint);
}; // Size: 0x5C0

#endif
