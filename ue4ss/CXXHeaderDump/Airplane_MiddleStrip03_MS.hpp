#ifndef UE4SS_SDK_Airplane_MiddleStrip03_MS_HPP
#define UE4SS_SDK_Airplane_MiddleStrip03_MS_HPP

class USequenceDirector_C : public ULevelSequenceDirector
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0038 (size: 0x8)

    void SequenceEvent__ENTRYPOINTSequenceDirector_3(class ATradingAirplane* Airplane_BP);
    void SequenceEvent__ENTRYPOINTSequenceDirector_2(class ATradingAirplane* Airplane_BP2);
    void SequenceEvent__ENTRYPOINTSequenceDirector_1(class ATradingAirplane* Airplane_BP2);
    void SequenceEvent__ENTRYPOINTSequenceDirector_0(class ATradingAirplane* Airplane_BP2);
    void Remove(class ATradingAirplane* Airplane_BP2);
    void Pause(class ATradingAirplane* Airplane_BP2);
    void Airplane_BP_Event_0(class ATradingAirplane* Airplane_BP);
    void SetPlane(class ATradingAirplane* Airplane_BP2);
    void ExecuteUbergraph_SequenceDirector(int32 EntryPoint);
}; // Size: 0x40

#endif
