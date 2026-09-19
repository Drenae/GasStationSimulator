#ifndef UE4SS_SDK_SharkMarker_BP_HPP
#define UE4SS_SDK_SharkMarker_BP_HPP

class ASharkMarker_BP_C : public AObjectiveMarker
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0250 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_SharkMarker_BP(int32 EntryPoint);
}; // Size: 0x258

#endif
