#ifndef UE4SS_SDK_BP_JoePlaneDropPlace_HPP
#define UE4SS_SDK_BP_JoePlaneDropPlace_HPP

class ABP_JoePlaneDropPlace_C : public APlaneDropPlace
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A0 (size: 0x8)
    class UHighlight_Component_C* Highlight_Component;                                // 0x02A8 (size: 0x8)
    int32 AllHoles;                                                                   // 0x02B0 (size: 0x4)
    int32 FixedHoles;                                                                 // 0x02B4 (size: 0x4)
    class URemainingHoles_WBP_C* InfoWidget;                                          // 0x02B8 (size: 0x8)
    FTimerHandle Timer;                                                               // 0x02C0 (size: 0x8)
    float DropZone2ndHighlightValue;                                                  // 0x02C8 (size: 0x4)
    bool ChangeHighlight;                                                             // 0x02CC (size: 0x1)
    class UDropPlaneNotification_WBP_C* DropPlaneRef;                                 // 0x02D0 (size: 0x8)
    TArray<FPartStruct> CurrentPlaneParts;                                            // 0x02D8 (size: 0x10)

    bool IsOnFixingTapeQuestAndHasTape();
    void ReceiveBeginPlay();
    void TurnOnHighlight(bool bOn);
    void TurnOnHolesHighlight(bool bOn);
    void OnJoePlaneStateChange(EJoeAirplaneState NewPlaneState);
    void CE_OnJoePlaneHoleFixed(int32 FixedHoles, int32 NumberOfAllHoles);
    void HighlightColorPlane();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_BP_JoePlaneDropPlace(int32 EntryPoint);
}; // Size: 0x2E8

#endif
