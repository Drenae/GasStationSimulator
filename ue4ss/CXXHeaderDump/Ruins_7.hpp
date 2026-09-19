#ifndef UE4SS_SDK_Ruins_7_HPP
#define UE4SS_SDK_Ruins_7_HPP

class ARuins_7_C : public ARuins_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0250 (size: 0x8)
    float Timeline_0_NewTrack_0_E2ED257B4E5385531313D1B6A6A3FD7A;                     // 0x0258 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_E2ED257B4E5385531313D1B6A6A3FD7A; // 0x025C (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0260 (size: 0x8)
    FVector StartScale;                                                               // 0x0268 (size: 0xC)
    int32 StartStage;                                                                 // 0x0274 (size: 0x4)
    FVector CurrentScale;                                                             // 0x0278 (size: 0xC)

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void UpdateRuins(int32 CurrentStage);
    void ExecuteUbergraph_Ruins_7(int32 EntryPoint);
}; // Size: 0x284

#endif
