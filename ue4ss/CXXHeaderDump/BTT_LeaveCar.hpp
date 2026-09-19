#ifndef UE4SS_SDK_BTT_LeaveCar_HPP
#define UE4SS_SDK_BTT_LeaveCar_HPP

class UBTT_LeaveCar_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    FBlackboardKeySelector VehicleState;                                              // 0x00B0 (size: 0x28)
    class AGSSWheeledVehicle* ControlledVehicle;                                      // 0x00D8 (size: 0x8)
    class AAICharacterBase* Driver;                                                   // 0x00E0 (size: 0x8)
    TSubclassOf<class UTaskBase> DriverTaskClass;                                     // 0x00E8 (size: 0x8)
    class UGoToCinema_C* CinemaTask;                                                  // 0x00F0 (size: 0x8)

    void PrintLeaveFuelLog(FString Reason);
    void CheckVehiclePosition(class AGSSWheeledVehicle* Vehicle, bool& CanPark);
    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_LeaveCar(int32 EntryPoint);
}; // Size: 0xF8

#endif
