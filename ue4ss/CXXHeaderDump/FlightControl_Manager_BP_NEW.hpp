#ifndef UE4SS_SDK_FlightControl_Manager_BP_NEW_HPP
#define UE4SS_SDK_FlightControl_Manager_BP_NEW_HPP

class AFlightControl_Manager_BP_NEW_C : public AFlightControlManager
{
    class USceneComponent* DefaultSceneRoot;                                          // 0x02F0 (size: 0x8)
    float MiddleStrip_TimeBetweenPlanes;                                              // 0x02F8 (size: 0x4)
    FTimerHandle MiddleStripTimer;                                                    // 0x0300 (size: 0x8)
    FTimerHandle ThirdStripTimer;                                                     // 0x0308 (size: 0x8)
    float ThirdStrip_TimeBetweenPlanes;                                               // 0x0310 (size: 0x4)
    class ULevelSequencePlayer* CurrentSequencPlayer_MS;                              // 0x0318 (size: 0x8)
    class ULevelSequencePlayer* CurrentSequencPlayer_TS;                              // 0x0320 (size: 0x8)

    void F_StartSequence(class ALevelSequenceActor* SequenceToStart, class ULevelSequencePlayer*& CurrentSequencPlayer);
}; // Size: 0x328

#endif
