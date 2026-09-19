#ifndef UE4SS_SDK_FuelPriceBoard_big_BP_HPP
#define UE4SS_SDK_FuelPriceBoard_big_BP_HPP

class AFuelPriceBoard_big_BP_C : public AFuelPriceBoard
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05F0 (size: 0x8)
    class UStaticMeshComponent* sign_back;                                            // 0x05F8 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0600 (size: 0x8)
    class UChildActorComponent* ObjectiveMarkerArrow;                                 // 0x0608 (size: 0x8)
    class UBoxComponent* WidgetBlocker;                                               // 0x0610 (size: 0x8)
    class UWidgetComponent* Widget3D;                                                 // 0x0618 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0620 (size: 0x8)
    FTimerHandle AllertHandle;                                                        // 0x0628 (size: 0x8)
    class UWBP_FuelPriceBoardConfirmation_C* Confirmation;                            // 0x0630 (size: 0x8)
    class UMainPC* MainPC;                                                            // 0x0638 (size: 0x8)

    bool DisplayInteractionInfo(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent, class UStaticMeshComponent*& StaticMeshComponent);
    void ShowCantInteractPopup();
    bool CanAlterFuelPrice();
    void SetCloseStationVisiblity(bool HideCloseStationText);
    bool SimpleInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    bool CanBeInteractable(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    FName GetInteractionName();
    void ReceiveBeginPlay();
    void GameLoaded(const bool GameLoaded);
    void ShowConfirmationPopup(bool bOnMinigameExit);
    void OnPopupExitEvent(bool bAccepted);
    void ShowResetDefaultPopup();
    void OnPopupResetDefaultExitEvent(bool Accepted);
    void OnEvent();
    void OnSetMinigameActive(bool bNewActive);
    void SetFocus();
    void EnableElectrocity(const bool On);
    void SetInteractionType(bool FromPC);
    void ExecuteUbergraph_FuelPriceBoard_big_BP(int32 EntryPoint);
}; // Size: 0x640

#endif
