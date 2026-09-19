#ifndef UE4SS_SDK_RvCampParkingSpot_BP_HPP
#define UE4SS_SDK_RvCampParkingSpot_BP_HPP

class ARvCampParkingSpot_BP_C : public ARVCampParkingSpot
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0580 (size: 0x8)

    void Find Camp Spot(class ARVCampSpot*& Camp Spot);
    void ReceiveBeginPlay();
    void On Camper Arrived(class URVCamperComponent* Camper);
    void On Camper Left(class URVCamperComponent* Camper);
    void Force Update Camper State();
    void On Camper Loaded(class URVCamperComponent* Camper, bool IsParked);
    void On Building Upgraded(EBuildingType BuildingType, int32 NewBuildingLevel, bool bLoadedFromSave);
    void OnFinishGameLoaded_Event_0(const bool GameLoaded);
    void ExecuteUbergraph_RvCampParkingSpot_BP(int32 EntryPoint);
}; // Size: 0x588

#endif
