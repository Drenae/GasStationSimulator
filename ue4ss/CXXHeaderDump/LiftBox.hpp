#ifndef UE4SS_SDK_LiftBox_HPP
#define UE4SS_SDK_LiftBox_HPP

class ALiftBox_C : public AItemBox
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UInventoryComponent* OtherInventory;                                        // 0x0348 (size: 0x8)
    TArray<AActor*> Shelf;                                                            // 0x0350 (size: 0x10)
    bool CanPlace;                                                                    // 0x0360 (size: 0x1)
    TArray<AObjectiveMarker*> Markers;                                                // 0x0368 (size: 0x10)
    bool IsAirplane;                                                                  // 0x0378 (size: 0x1)
    TArray<UStaticMeshComponent*> MeshWithCustomDepth;                                // 0x0380 (size: 0x10)

    FName GetInteractionName();
    void LiftBoxShelvFind();
    FTransform GetInteractiveTransform(class AActor* Actor, bool& RotateToTransform);
    class APathPoint* GetPathPoint(class AGSSWheeledVehicle* GSSWheeledVehicle);
    bool DisplayInteractionInfo(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent, class UStaticMeshComponent*& StaticMeshComponent);
    bool SimpleInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    void InpActEvt_LPM_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_RPM_K2Node_InputActionEvent_0(FKey Key);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveDestroyed();
    void OnGameSaveStarted();
    void OnGameSaveCompleted();
    void ExecuteUbergraph_LiftBox(int32 EntryPoint);
}; // Size: 0x390

#endif
