#ifndef UE4SS_SDK_GSSGameInstance_BP_HPP
#define UE4SS_SDK_GSSGameInstance_BP_HPP

class UGSSGameInstance_BP_C : public UGSSGameInstance_Parent_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0520 (size: 0x8)
    class UUserWidget* LoadingScreen;                                                 // 0x0528 (size: 0x8)
    TSoftClassPtr<UUserWidget> LoadingScreenClass;                                    // 0x0530 (size: 0x28)
    TSoftObjectPtr<class ARuins> Quest_09_SandPile;                                   // 0x0558 (size: 0x28)
    TArray<TSoftObjectPtr<class AMagazineDoor_Base_BP_C>> Quest_36_Door;              // 0x0580 (size: 0x10)
    TSoftClassPtr<UUserWidget> InBetweenLoadingScreen;                                // 0x0590 (size: 0x28)
    class UInBetweenLoadingScreenWidget_BP_C* TempLoadingScreen;                      // 0x05B8 (size: 0x8)
    FTimerHandle Timer;                                                               // 0x05C0 (size: 0x8)
    bool TEMP_IsRestockingShelvesEnabled;                                             // 0x05C8 (size: 0x1)
    TArray<USoundMix*> MusicMuteMixes;                                                // 0x05D0 (size: 0x10)

    TSoftClassPtr<UObjectiveBase> TranslateOldQuestToNew_Blueprint(FSavedQuest SavedGSSQuest, class UQuestBase* NewQuest, int32& OutMaxProgress, int32& OutCurrentProgress);
    void ReceiveInit();
    void OnSaveGameProgressUpdated_Event_0(const float CurrentProgress, const float MaxProgress, const bool SaveGameCompleted);
    void ShowLoadScreen(bool bCondition, FName MapToOpen);
    void OnFinishGameLoaded_Event_0(const bool GameLoaded);
    void Pop sound mix();
    void UnmuteAllMusic();
    void ExecuteUbergraph_GSSGameInstance_BP(int32 EntryPoint);
}; // Size: 0x5E0

#endif
