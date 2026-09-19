#ifndef UE4SS_SDK_LotteryMachine_BP_HPP
#define UE4SS_SDK_LotteryMachine_BP_HPP

class ALotteryMachine_BP_C : public ALotteryMachine
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0600 (size: 0x8)
    class UAudioComponent* SFX_LotteryLoop;                                           // 0x0608 (size: 0x8)
    class UStaticMeshComponent* money;                                                // 0x0610 (size: 0x8)
    class UStaticMeshComponent* SM_NeonLight;                                         // 0x0618 (size: 0x8)
    class UNiagaraComponent* NS_Lottery_Win;                                          // 0x0620 (size: 0x8)
    class URectLightComponent* RectLight;                                             // 0x0628 (size: 0x8)
    class USpotLightComponent* SpotLight3;                                            // 0x0630 (size: 0x8)
    class USpotLightComponent* SpotLight2;                                            // 0x0638 (size: 0x8)
    class UStaticMeshComponent* SM_DeskLamp_03;                                       // 0x0640 (size: 0x8)
    class UWidgetComponent* PrizeWidget;                                              // 0x0648 (size: 0x8)
    class UArrowComponent* ArrowComponent2;                                           // 0x0650 (size: 0x8)
    class UArrowComponent* ArrowComponent1;                                           // 0x0658 (size: 0x8)
    class UStaticMeshComponent* Lever;                                                // 0x0660 (size: 0x8)
    class ULottery_WBP_C* Widget;                                                     // 0x0668 (size: 0x8)
    class UMaterialInstanceDynamic* NeonDynamicMaterial;                              // 0x0670 (size: 0x8)

    void OnLoaded_2EDA2DA34509AE3B5726BB84EA3128C5(class UObject* Loaded);
    void OnLoaded_16FABFE243838AC58F8A3194C45E9545(class UObject* Loaded);
    void OnLoaded_66FA4E434FCC3FBC2C1E2686CE885959(class UObject* Loaded);
    void OnLoaded_4B7A80B74D9A554940AE98BF77A86742(class UObject* Loaded);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void LotteryWin();
    void LightOn();
    void LightOff();
    void SFX_Male();
    void SFX_Female();
    void ExecuteUbergraph_LotteryMachine_BP(int32 EntryPoint);
}; // Size: 0x678

#endif
