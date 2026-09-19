#ifndef UE4SS_SDK_SnapPoint_Wall_HPP
#define UE4SS_SDK_SnapPoint_Wall_HPP

class ASnapPoint_Wall_C : public ASnapPoint
{
    TArray<AInsideGasStationArea_C*> AllIsideAreas;                                   // 0x0270 (size: 0x10)
    float Closest;                                                                    // 0x0280 (size: 0x4)
    FVector Out Point on Body;                                                        // 0x0284 (size: 0xC)

}; // Size: 0x290

#endif
