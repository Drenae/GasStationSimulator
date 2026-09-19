#ifndef UE4SS_SDK_SeanSittingZippo_BP_HPP
#define UE4SS_SDK_SeanSittingZippo_BP_HPP

class ASeanSittingZippo_BP_C : public AJoeAccesories_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0258 (size: 0x8)
    class UParticleSystemComponent* P_ZIppoLighter;                                   // 0x0260 (size: 0x8)
    class UParticleSystemComponent* SpawnedParticle;                                  // 0x0268 (size: 0x8)

    void OnNotifyEnd_713AC35B4E25FE5D531D729DE5010D2B(FName NotifyName);
    void OnNotifyBegin_713AC35B4E25FE5D531D729DE5010D2B(FName NotifyName);
    void OnInterrupted_713AC35B4E25FE5D531D729DE5010D2B(FName NotifyName);
    void OnBlendOut_713AC35B4E25FE5D531D729DE5010D2B(FName NotifyName);
    void OnCompleted_713AC35B4E25FE5D531D729DE5010D2B(FName NotifyName);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_SeanSittingZippo_BP(int32 EntryPoint);
}; // Size: 0x270

#endif
