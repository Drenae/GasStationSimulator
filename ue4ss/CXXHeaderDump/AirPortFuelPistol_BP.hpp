#ifndef UE4SS_SDK_AirPortFuelPistol_BP_HPP
#define UE4SS_SDK_AirPortFuelPistol_BP_HPP

class AAirPortFuelPistol_BP_C : public AFuelPistolBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0240 (size: 0x8)
    class USceneComponent* PistolCableLocation;                                       // 0x0248 (size: 0x8)
    class UAudioComponent* FuelCapSound;                                              // 0x0250 (size: 0x8)
    class UAudioComponent* FuelPourSound;                                             // 0x0258 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0260 (size: 0x8)
    class APawn* User;                                                                // 0x0268 (size: 0x8)
    FTimerHandle LimpTimerHandle;                                                     // 0x0270 (size: 0x8)
    class AFuelStation* Fuel Station;                                                 // 0x0278 (size: 0x8)
    class AActor* _target;                                                            // 0x0280 (size: 0x8)
    class AActor* _Instaginator;                                                      // 0x0288 (size: 0x8)
    FAirPortFuelPistol_BP_CPistolInUse PistolInUse;                                   // 0x0290 (size: 0x10)
    void PistolInUse(bool PistolInUse);
    class AFuelEnter* Fuel Enter;                                                     // 0x02A0 (size: 0x8)
    class UWBP_FuelBeforeTanking_C* PreWidget;                                        // 0x02A8 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void LimpEvent();
    void PutDownPistol(class AFuelStation* FuelStationRef);
    void PistolUse(class AActor* Target, class AActor* UseInstigator, class AFuelEnter* FuelEnter);
    void StartMiniGame();
    void StopMiniGame();
    void ExecuteUbergraph_AirPortFuelPistol_BP(int32 EntryPoint);
    void PistolInUse__DelegateSignature(bool PistolInUse);
}; // Size: 0x2B0

#endif
