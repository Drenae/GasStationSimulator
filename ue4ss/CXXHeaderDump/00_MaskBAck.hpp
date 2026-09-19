#ifndef UE4SS_SDK_00_MaskBAck_HPP
#define UE4SS_SDK_00_MaskBAck_HPP

class A00_MaskBack_C : public ABackMask
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03E0 (size: 0x8)
    class UBP_LockComponent_C* BP_LockComponent;                                      // 0x03E8 (size: 0x8)
    class UWBP_LootPanel_C* LootPanel;                                                // 0x03F0 (size: 0x8)

    FName GetInteractionName();
    void RandomAwards();
    bool DisplayInteractionInfo(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent, class UStaticMeshComponent*& StaticMeshComponent);
    void OnLoaded_99454E9643924972C0B692834FCCCC68(UClass* Loaded);
    void UpdateVehiclePart(bool Broken, bool WasFixedSuccessfully);
    void OpenMask(bool Opened);
    void ReceiveBeginPlay();
    void RandomCards();
    void AfterLoadSetSettings();
    void ExecuteUbergraph_00_MaskBack(int32 EntryPoint);
}; // Size: 0x3F8

#endif
