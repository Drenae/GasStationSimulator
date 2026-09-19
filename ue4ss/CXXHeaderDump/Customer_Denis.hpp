#ifndef UE4SS_SDK_Customer_Denis_HPP
#define UE4SS_SDK_Customer_Denis_HPP

class ACustomer_Denis_C : public AAIHumanBase_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0A10 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x0A18 (size: 0x8)
    class UStaticMeshComponent* SprayCan;                                             // 0x0A20 (size: 0x8)
    bool bIsBoombCooldown;                                                            // 0x0A28 (size: 0x1)
    bool isSpraying;                                                                  // 0x0A29 (size: 0x1)
    bool CanSetNextSound;                                                             // 0x0A2A (size: 0x1)
    bool isHitReact;                                                                  // 0x0A2B (size: 0x1)
    class UDennis_Animbp_C* AnimBP;                                                   // 0x0A30 (size: 0x8)
    bool GoHomeSound;                                                                 // 0x0A38 (size: 0x1)
    bool DennisSoundCanInterrupt;                                                     // 0x0A39 (size: 0x1)
    bool bIsSpawnedFromQuest;                                                         // 0x0A3A (size: 0x1)

    void SetupForRV();
    bool IsDennisClass_Helper();
    void TryThrowBomb();
    void OnNotifyEnd_4E6EC59E46689CDC608D7E93DDEACD40(FName NotifyName);
    void OnNotifyBegin_4E6EC59E46689CDC608D7E93DDEACD40(FName NotifyName);
    void OnInterrupted_4E6EC59E46689CDC608D7E93DDEACD40(FName NotifyName);
    void OnBlendOut_4E6EC59E46689CDC608D7E93DDEACD40(FName NotifyName);
    void OnCompleted_4E6EC59E46689CDC608D7E93DDEACD40(FName NotifyName);
    void OnNotifyEnd_96D7BEF540CB0B04A00270B64BF32410(FName NotifyName);
    void OnNotifyBegin_96D7BEF540CB0B04A00270B64BF32410(FName NotifyName);
    void OnInterrupted_96D7BEF540CB0B04A00270B64BF32410(FName NotifyName);
    void OnBlendOut_96D7BEF540CB0B04A00270B64BF32410(FName NotifyName);
    void OnCompleted_96D7BEF540CB0B04A00270B64BF32410(FName NotifyName);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ThrowBomb();
    void AlllowBombThrow();
    void CustomEvent(TEnumAsByte<HitDirectionEnum::Type> HitDirectionE);
    void DenisSounds(class USoundBase* NewSound, bool CanInterrupt?);
    void SoundDone();
    void ReceiveAnyDamage(float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
    void HitReactSound();
    void ExecuteUbergraph_Customer_Denis(int32 EntryPoint);
}; // Size: 0xA3B

#endif
