#ifndef UE4SS_SDK_CarWash_Building_BP_HPP
#define UE4SS_SDK_CarWash_Building_BP_HPP

class ACarWash_Building_BP_C : public ACarWash
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0490 (size: 0x8)
    TArray<APathStation*> PathStation_Carwash_01;                                     // 0x0498 (size: 0x10)
    class UUserWidget* NotificationREF;                                               // 0x04A8 (size: 0x8)

    void ReceiveBeginPlay();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void SetupCarwashPathPoints();
    void UpdateMesh(const int32 ActorLevel, bool bLoadedFromSaveGame, bool bNewVersion);
    void SetupAutomaticCarWash2(int32 ActorLevel);
    void OnGameLoaded(const bool GameLoaded);
    void OnPressureGoodAgain();
    void OnPressureLow();
    void ReceiveDestroyed();
    void ExtraSetup(int32 ActorLvl);
    void LowPressureNotification();
    void ExecuteUbergraph_CarWash_Building_BP(int32 EntryPoint);
}; // Size: 0x4B0

#endif
