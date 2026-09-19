#ifndef UE4SS_SDK_BP_TowyFrontWheel_HPP
#define UE4SS_SDK_BP_TowyFrontWheel_HPP

class UBP_TowyFrontWheel_C : public UTowyWheel
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00F8 (size: 0x8)

    void ReceiveBeginPlay_1();
    void ReceiveActorBeginOverlap_1(class AActor* OtherActor);
    void ReceiveTick_1(float DeltaSeconds);
    void ExecuteUbergraph_BP_TowyFrontWheel(int32 EntryPoint);
}; // Size: 0x100

#endif
