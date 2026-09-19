#ifndef UE4SS_SDK_BP_BoatFuelDeliveryWheel_HPP
#define UE4SS_SDK_BP_BoatFuelDeliveryWheel_HPP

class ABP_BoatFuelDeliveryWheel_C : public ABoatFuelDeliveryWheel
{
    class UAudioComponent* FuelWheelTurn_Cue;                                         // 0x0470 (size: 0x8)
    class ABP_BoatFuelPlace_C* FuelPlace;                                             // 0x0478 (size: 0x8)

    bool SimpleInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
}; // Size: 0x480

#endif
