#ifndef UE4SS_SDK_BP_CandleArrow_HPP
#define UE4SS_SDK_BP_CandleArrow_HPP

class ABP_CandleArrow_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UStaticMeshComponent* arrow;                                                // 0x0228 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0230 (size: 0x8)
    class USpaSettings* SpaSettings;                                                  // 0x0238 (size: 0x8)

    void PointToNewCandle(const TArray<ABP_SpaCandle_C*>& AllCandles, class ABP_SpaCandle_C*& TargetCandle);
    void ReceiveBeginPlay();
    void OnSpaFinished(FGameplayTag ServiceTag, class ARvGuestServiceSpot* ServiceBuilding, bool bSuccess);
    void ExecuteUbergraph_BP_CandleArrow(int32 EntryPoint);
}; // Size: 0x240

#endif
