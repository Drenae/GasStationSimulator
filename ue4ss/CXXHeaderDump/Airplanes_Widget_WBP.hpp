#ifndef UE4SS_SDK_Airplanes_Widget_WBP_HPP
#define UE4SS_SDK_Airplanes_Widget_WBP_HPP

class UAirplanes_Widget_WBP_C : public UGSSInnerWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0288 (size: 0x8)
    class UHorizontalBox* AirplaneNotification_Horizontal;                            // 0x0290 (size: 0x8)
    class UNewPlaneNotification_WBP_C* NewPlaneNotification_WBP;                      // 0x0298 (size: 0x8)

    void RefreshOwnedRunways();
    void UpdateNotificationOnPlaneSet(const class ATradingAirplane* CurrentAirplane);
    void BindEventOnLandedFirstStrip(ERunway Runway);
    void ChangeIsPlaneOnSpot(ERunway Runway, ECurrentStatus CurrentStatus);
    void StartListeningPlains();
    void PlaneArriving(ERunway Runway);
    void PlaneArrived(ERunway Runway);
    void ExecuteUbergraph_Airplanes_Widget_WBP(int32 EntryPoint);
}; // Size: 0x2A0

#endif
