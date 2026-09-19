#ifndef UE4SS_SDK_CarWashStation_BP_HPP
#define UE4SS_SDK_CarWashStation_BP_HPP

class ACarWashStation_BP_C : public ACarWashStation
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05A0 (size: 0x8)
    class UStaticMeshComponent* SM_Lever_Cover_Autmatic_ON_OFF;                       // 0x05A8 (size: 0x8)
    class UStaticMeshComponent* SM_Lever_Cover_Closed_Open;                           // 0x05B0 (size: 0x8)
    class UCableComponent* FuelCable;                                                 // 0x05B8 (size: 0x8)
    class UChildActorComponent* TurnOnOffStationLever;                                // 0x05C0 (size: 0x8)
    class UChildActorComponent* AutomaticOnOffLever;                                  // 0x05C8 (size: 0x8)
    class UStaticMeshComponent* carWashFloor_polySurface3;                            // 0x05D0 (size: 0x8)
    class UStaticMeshComponent* carWashFloor_polySurface2;                            // 0x05D8 (size: 0x8)
    class UStaticMeshComponent* CarWashStatic;                                        // 0x05E0 (size: 0x8)

    FName GetInteractionName();
    bool SimpleInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    bool DisplayInteractionInfo(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent, class UStaticMeshComponent*& StaticMeshComponent);
    bool CanBeInteractable(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    void OpenCloseCarWash();
    void AutomaticOnOff();
    void ReceiveBeginPlay();
    void UpdateLeverVisibilityStatus(int32 ActorLevel);
    void OnGameLoaded(const bool GameLoaded);
    void SpecialOpenCloseEvent();
    void ExecuteUbergraph_CarWashStation_BP(int32 EntryPoint);
}; // Size: 0x5E8

#endif
