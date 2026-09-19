#ifndef UE4SS_SDK_Airstrip_HangarRuins_HPP
#define UE4SS_SDK_Airstrip_HangarRuins_HPP

class AAirstrip_HangarRuins_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    TSoftObjectPtr<class ABP_AirportFuelMagazine_C> FuelTankAirport;                  // 0x0230 (size: 0x28)

    void ReceiveBeginPlay();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_Airstrip_HangarRuins(int32 EntryPoint);
}; // Size: 0x258

#endif
