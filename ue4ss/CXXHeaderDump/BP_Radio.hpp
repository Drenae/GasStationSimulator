#ifndef UE4SS_SDK_BP_Radio_HPP
#define UE4SS_SDK_BP_Radio_HPP

class ABP_Radio_C : public AInteractableBuilding
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0580 (size: 0x8)
    class UAudioComponent* SOUNDTRACK_RADIO;                                          // 0x0588 (size: 0x8)
    TSoftObjectPtr<class USoundCue> SoundtrackCueSoft;                                // 0x0590 (size: 0x28)

    void OnLoaded_63F7DE2147F0B8FC6E34BCAE22562952(class UObject* Loaded);
    void EnableElectrocity(const bool On);
    void ExecuteUbergraph_BP_Radio(int32 EntryPoint);
}; // Size: 0x5B8

#endif
