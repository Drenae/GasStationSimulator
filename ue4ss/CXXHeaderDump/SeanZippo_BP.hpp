#ifndef UE4SS_SDK_SeanZippo_BP_HPP
#define UE4SS_SDK_SeanZippo_BP_HPP

class ASeanZippo_BP_C : public AJoeAccesories_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0258 (size: 0x8)
    class UParticleSystemComponent* P_ZIppoLighter;                                   // 0x0260 (size: 0x8)
    class UParticleSystemComponent* SpawnedParticle;                                  // 0x0268 (size: 0x8)

    void OnNotifyEnd_9C0F3E4D43B00D8C897BA0A43D821F62(FName NotifyName);
    void OnNotifyBegin_9C0F3E4D43B00D8C897BA0A43D821F62(FName NotifyName);
    void OnInterrupted_9C0F3E4D43B00D8C897BA0A43D821F62(FName NotifyName);
    void OnBlendOut_9C0F3E4D43B00D8C897BA0A43D821F62(FName NotifyName);
    void OnCompleted_9C0F3E4D43B00D8C897BA0A43D821F62(FName NotifyName);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_SeanZippo_BP(int32 EntryPoint);
}; // Size: 0x270

#endif
