#ifndef UE4SS_SDK_ParkingStopHelp_HPP
#define UE4SS_SDK_ParkingStopHelp_HPP

class AParkingStopHelp_C : public AStopHelp_C
{
    float AngleRight;                                                                 // 0x0230 (size: 0x4)
    float AngleLeft;                                                                  // 0x0234 (size: 0x4)
    float DistanceMax;                                                                // 0x0238 (size: 0x4)
    TArray<TSubclassOf<class UTaskBase>> AffectedTasks;                               // 0x0240 (size: 0x10)

}; // Size: 0x250

#endif
