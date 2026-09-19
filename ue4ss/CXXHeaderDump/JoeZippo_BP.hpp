#ifndef UE4SS_SDK_JoeZippo_BP_HPP
#define UE4SS_SDK_JoeZippo_BP_HPP

class AJoeZippo_BP_C : public AJoeAccesories_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0258 (size: 0x8)
    class UParticleSystemComponent* P_ZIppoLighter;                                   // 0x0260 (size: 0x8)
    class UParticleSystemComponent* SpawnedParticle;                                  // 0x0268 (size: 0x8)

    void OnNotifyEnd_71E6A528412D1DEE98C591AB7BD5116F(FName NotifyName);
    void OnNotifyBegin_71E6A528412D1DEE98C591AB7BD5116F(FName NotifyName);
    void OnInterrupted_71E6A528412D1DEE98C591AB7BD5116F(FName NotifyName);
    void OnBlendOut_71E6A528412D1DEE98C591AB7BD5116F(FName NotifyName);
    void OnCompleted_71E6A528412D1DEE98C591AB7BD5116F(FName NotifyName);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_JoeZippo_BP(int32 EntryPoint);
}; // Size: 0x270

#endif
