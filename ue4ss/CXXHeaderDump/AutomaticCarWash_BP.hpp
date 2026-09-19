#ifndef UE4SS_SDK_AutomaticCarWash_BP_HPP
#define UE4SS_SDK_AutomaticCarWash_BP_HPP

class AAutomaticCarWash_BP_C : public ACarWashAutomaticParts
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0240 (size: 0x8)
    class UNiagaraComponent* NS_CarWash5;                                             // 0x0248 (size: 0x8)
    class UNiagaraComponent* NS_CarWash4;                                             // 0x0250 (size: 0x8)
    class UNiagaraComponent* NS_CarWash3;                                             // 0x0258 (size: 0x8)
    class UNiagaraComponent* NS_CarWash2;                                             // 0x0260 (size: 0x8)
    class UNiagaraComponent* NS_CarWash1;                                             // 0x0268 (size: 0x8)
    class UNiagaraComponent* NS_CarWash;                                              // 0x0270 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0278 (size: 0x8)
    class UStaticMeshComponent* CarWash0;                                             // 0x0280 (size: 0x8)
    class UChildActorComponent* Sequencer;                                            // 0x0288 (size: 0x8)
    class UDecalComponent* Decal1;                                                    // 0x0290 (size: 0x8)
    class UStaticMeshComponent* Frame;                                                // 0x0298 (size: 0x8)
    class UStaticMeshComponent* Roto_Brush_R;                                         // 0x02A0 (size: 0x8)
    class UStaticMeshComponent* Roto_Brush_L;                                         // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* Arm_R;                                                // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* Arm_L;                                                // 0x02B8 (size: 0x8)
    class UStaticMeshComponent* Generator;                                            // 0x02C0 (size: 0x8)
    float ElectricityValue_ValueUpdate_D311CC4942D8E463AAD287BF87E94C24;              // 0x02C8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> ElectricityValue__Direction_D311CC4942D8E463AAD287BF87E94C24; // 0x02CC (size: 0x1)
    class UTimelineComponent* ElectricityValue;                                       // 0x02D0 (size: 0x8)
    float SpreadBrushesValue;                                                         // 0x02D8 (size: 0x4)
    FName CollectionParameterName;                                                    // 0x02DC (size: 0x8)
    bool TurnOn_Brushes;                                                              // 0x02E4 (size: 0x1)
    float CurrentTime;                                                                // 0x02E8 (size: 0x4)

    bool SetAutoCarWashPartsCollision(bool bNewCollision);
    bool StartAutomaticWashing();
    void StartAutomaticSequence();
    void ElectricityValue__FinishedFunc();
    void ElectricityValue__UpdateFunc();
    void ReceiveTick(float DeltaSeconds);
    void StartAutoCarWash();
    void StopAutoCarWash();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_AutomaticCarWash_BP(int32 EntryPoint);
}; // Size: 0x2EC

#endif
