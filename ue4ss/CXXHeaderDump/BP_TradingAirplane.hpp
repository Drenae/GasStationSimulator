#ifndef UE4SS_SDK_BP_TradingAirplane_HPP
#define UE4SS_SDK_BP_TradingAirplane_HPP

class ABP_TradingAirplane_C : public ATradingAirplane
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0478 (size: 0x8)
    class UParticleSystemComponent* P_EngineSmoke_Dir1;                               // 0x0480 (size: 0x8)
    class UParticleSystemComponent* P_WheelsSmokeScrach;                              // 0x0488 (size: 0x8)
    class UParticleSystemComponent* P_EngineSmoke_Dir;                                // 0x0490 (size: 0x8)
    class UMaterialInstanceDynamic* DMI_1_TradePlane;                                 // 0x0498 (size: 0x8)
    class UMaterialInstanceDynamic* DMI_2_TradePlane;                                 // 0x04A0 (size: 0x8)
    int32 DMI_1_Index;                                                                // 0x04A8 (size: 0x4)
    int32 DMI_2_Index;                                                                // 0x04AC (size: 0x4)
    TArray<FLinearColor> ColorBoardLinear1;                                           // 0x04B0 (size: 0x10)
    bool Procedural Colorig In Editor;                                                // 0x04C0 (size: 0x1)
    TSoftClassPtr<UAirstripTradeWidget> TradeWidgetClass;                             // 0x04C8 (size: 0x28)

    FName GetInteractionName();
    void Colors Update();
    void SettingVariablesWithRandomColors();
    void RandomColorsFromBoard(FLinearColor& Output);
    void PreppingMaterials();
    bool SimpleInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    void UserConstructionScript();
    void OnLoaded_EA73D84044948D6F1C885B920EDB0F4E(UClass* Loaded);
    void ReceiveBeginPlay();
    void UpdateColors();
    void RandomColors();
    void StartTrading();
    void ExecuteUbergraph_BP_TradingAirplane(int32 EntryPoint);
}; // Size: 0x4F0

#endif
