#ifndef UE4SS_SDK_VehicleAdvHud_HPP
#define UE4SS_SDK_VehicleAdvHud_HPP

class AVehicleAdvHud_C : public AHUD
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0310 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0318 (size: 0x8)
    float HUDXRatio;                                                                  // 0x0320 (size: 0x4)
    float HUDYRatio;                                                                  // 0x0324 (size: 0x4)

    void ReceiveDrawHUD(int32 SizeX, int32 SizeY);
    void ExecuteUbergraph_VehicleAdvHud(int32 EntryPoint);
}; // Size: 0x328

#endif
