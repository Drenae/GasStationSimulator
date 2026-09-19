#ifndef UE4SS_SDK_BP_ToiletDoor_HPP
#define UE4SS_SDK_BP_ToiletDoor_HPP

class ABP_ToiletDoor_C : public ABP_ToiletDoorBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class UStaticMeshComponent* SM_Toilet_Doors_Hinge;                                // 0x0250 (size: 0x8)
    class UStaticMeshComponent* SM_Toilet_Doors_Right;                                // 0x0258 (size: 0x8)
    class UStaticMeshComponent* SM_Toilet_Doors_Left;                                 // 0x0260 (size: 0x8)
    float Timeline_1_RightDoorRotationZ_1F971676482C29AE25A69190EDBF52FA;             // 0x0268 (size: 0x4)
    float Timeline_1_LeftDoorRotationZ_1F971676482C29AE25A69190EDBF52FA;              // 0x026C (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_1F971676482C29AE25A69190EDBF52FA; // 0x0270 (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x0278 (size: 0x8)
    float Timeline_0_RightDoorRotationZ_7EAAEDFB4103255A7B3FE4BEEA551D2E;             // 0x0280 (size: 0x4)
    float Timeline_0_LeftDoorRotationZ_7EAAEDFB4103255A7B3FE4BEEA551D2E;              // 0x0284 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_7EAAEDFB4103255A7B3FE4BEEA551D2E; // 0x0288 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0290 (size: 0x8)

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ResetDoorRot();
    void OpenDoorR();
    void OnEndActionAnim_Event_0();
    void ExecuteUbergraph_BP_ToiletDoor(int32 EntryPoint);
}; // Size: 0x298

#endif
