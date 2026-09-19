#ifndef UE4SS_SDK_SeanResetButton_BP_HPP
#define UE4SS_SDK_SeanResetButton_BP_HPP

class ASeanResetButton_BP_C : public AInteractableBuilding
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0580 (size: 0x8)
    class UStaticMeshComponent* SM_Custom_Wheel_05_Mid;                               // 0x0588 (size: 0x8)
    class UStaticMeshComponent* DiggerResetButton;                                    // 0x0590 (size: 0x8)
    class UConfirmSeanReset_WBP_C* AreYouSurePopup;                                   // 0x0598 (size: 0x8)

    bool DisplayInteractionInfo(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent, class UStaticMeshComponent*& StaticMeshComponent);
    bool SimpleInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    bool CanBeInteractable(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    FName GetInteractionName();
    void OnLoaded_6B0301534E414B75621C6280293DFA94(UClass* Loaded);
    void DisableInteractionInfo(class APawn* Pawn);
    void OnButtonClicked();
    void ClickedYes();
    void ClickedNo();
    void ExecuteUbergraph_SeanResetButton_BP(int32 EntryPoint);
}; // Size: 0x5A0

#endif
