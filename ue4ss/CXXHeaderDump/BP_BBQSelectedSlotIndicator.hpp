#ifndef UE4SS_SDK_BP_BBQSelectedSlotIndicator_HPP
#define UE4SS_SDK_BP_BBQSelectedSlotIndicator_HPP

class ABP_BBQSelectedSlotIndicator_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UStaticMeshComponent* Plane;                                                // 0x0228 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0230 (size: 0x8)
    class UBBQSlotComponent* Target Slot;                                             // 0x0238 (size: 0x8)
    float Move Speed;                                                                 // 0x0240 (size: 0x4)

    void Set Target Slot(class UBBQSlotComponent* Slot);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_BBQSelectedSlotIndicator(int32 EntryPoint);
}; // Size: 0x244

#endif
