#ifndef UE4SS_SDK_OneSideStop_HPP
#define UE4SS_SDK_OneSideStop_HPP

class AOneSideStop_C : public AStop_C
{
    class UArrowComponent* DirectionArrow;                                            // 0x0270 (size: 0x8)
    float Distance;                                                                   // 0x0278 (size: 0x4)
    float Angle;                                                                      // 0x027C (size: 0x4)
    bool CheckLeftSide;                                                               // 0x0280 (size: 0x1)
    class AParkingStopHelp_C* ParkingStop;                                            // 0x0288 (size: 0x8)
    float ShortDistance;                                                              // 0x0290 (size: 0x4)

    void CheckCollisionStop(class AGSSWheeledVehicle* Vehicle, bool& isStopped);
    void UserConstructionScript();
}; // Size: 0x294

#endif
