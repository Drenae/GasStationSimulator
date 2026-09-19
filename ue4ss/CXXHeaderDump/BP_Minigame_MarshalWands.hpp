#ifndef UE4SS_SDK_BP_Minigame_MarshalWands_HPP
#define UE4SS_SDK_BP_Minigame_MarshalWands_HPP

class ABP_Minigame_MarshalWands_C : public AMinigame_MarshalWands
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0800 (size: 0x8)
    class UBoxComponent* PlayerVehicleCheck;                                          // 0x0808 (size: 0x8)
    class UStaticMeshComponent* MarshalWands1;                                        // 0x0810 (size: 0x8)
    class UStaticMeshComponent* MarshalWands;                                         // 0x0818 (size: 0x8)

    bool SimpleInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void TurnOnAirplaneStartLights(bool bOn);
    void TurnOnRunwayLights(bool bOn);
    void OnMinigameFinished_BP(bool bSuccessfull);
    void ExecuteUbergraph_BP_Minigame_MarshalWands(int32 EntryPoint);
}; // Size: 0x820

#endif
