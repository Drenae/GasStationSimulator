#ifndef UE4SS_SDK_Sewer_LockedDoor_BP_HPP
#define UE4SS_SDK_Sewer_LockedDoor_BP_HPP

class ASewer_LockedDoor_BP_C : public ADoor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05A0 (size: 0x8)
    float DoorOpen_Yaw_AD557372449301D117C583A143D8235F;                              // 0x05A8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> DoorOpen__Direction_AD557372449301D117C583A143D8235F; // 0x05AC (size: 0x1)
    class UTimelineComponent* DoorOpen;                                               // 0x05B0 (size: 0x8)
    EDoorState PreviousState;                                                         // 0x05B8 (size: 0x1)

    bool SimpleInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    void UserConstructionScript();
    void DoorOpen__FinishedFunc();
    void DoorOpen__UpdateFunc();
    void OnStateUpdated(EDoorState NewState);
    void ExecuteUbergraph_Sewer_LockedDoor_BP(int32 EntryPoint);
}; // Size: 0x5B9

#endif
