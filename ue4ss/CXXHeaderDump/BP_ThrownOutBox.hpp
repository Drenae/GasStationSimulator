#ifndef UE4SS_SDK_BP_ThrownOutBox_HPP
#define UE4SS_SDK_BP_ThrownOutBox_HPP

class ABP_ThrownOutBox_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0228 (size: 0x8)
    FBP_ThrownOutBox_COnCarWreckAmountInsideChanged OnCarWreckAmountInsideChanged;    // 0x0230 (size: 0x10)
    void OnCarWreckAmountInsideChanged();

    void GetNumberOfCarWrecksInside(int32& NumberOfCarWrecksInside);
    void CustomEvent_0(const bool& NewParam);
    void OnBoxBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveBeginPlay();
    void OnComponentEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_BP_ThrownOutBox(int32 EntryPoint);
    void OnCarWreckAmountInsideChanged__DelegateSignature();
}; // Size: 0x240

#endif
