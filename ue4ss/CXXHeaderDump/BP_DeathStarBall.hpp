#ifndef UE4SS_SDK_BP_DeathStarBall_HPP
#define UE4SS_SDK_BP_DeathStarBall_HPP

class ABP_DeathStarBall_C : public ADiscoBall
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UParticleSystemComponent* PS_electricity_arcA1;                             // 0x0228 (size: 0x8)
    class UParticleSystemComponent* PS_electricity_arcA;                              // 0x0230 (size: 0x8)
    class UStaticMeshComponent* SM_Bowl_Ring_2_inside;                                // 0x0238 (size: 0x8)
    class UStaticMeshComponent* SM_Bowl_Ring_1_outside;                               // 0x0240 (size: 0x8)
    class UStaticMeshComponent* StaticMeshComponent0;                                 // 0x0248 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0250 (size: 0x8)
    class UStaticMeshComponent* StaticMeshComponent02;                                // 0x0258 (size: 0x8)
    class UStaticMeshComponent* StaticMeshComponent01;                                // 0x0260 (size: 0x8)
    class USceneComponent* SharedRoot;                                                // 0x0268 (size: 0x8)
    float Timeline_0_LightIntensity_F6FE61A44CAE6CFD8077009CF2B26943;                 // 0x0270 (size: 0x4)
    float Timeline_0_LightHue_F6FE61A44CAE6CFD8077009CF2B26943;                       // 0x0274 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_F6FE61A44CAE6CFD8077009CF2B26943; // 0x0278 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0280 (size: 0x8)
    float RotSpeed;                                                                   // 0x0288 (size: 0x4)
    float LightIntensityMulti;                                                        // 0x028C (size: 0x4)
    class UMaterialInstanceDynamic* DMI_DiscoBall;                                    // 0x0290 (size: 0x8)
    FLinearColor CurrentHue;                                                          // 0x0298 (size: 0x10)
    bool TurnOnTheBall;                                                               // 0x02A8 (size: 0x1)
    class UMaterialInstanceDynamic* DMI_Discoball2;                                   // 0x02B0 (size: 0x8)
    class UMaterialInstanceDynamic* DMI_Ring;                                         // 0x02B8 (size: 0x8)

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void TurnLightsOnOff(bool bShouldBeOn);
    void ExecuteUbergraph_BP_DeathStarBall(int32 EntryPoint);
}; // Size: 0x2C0

#endif
