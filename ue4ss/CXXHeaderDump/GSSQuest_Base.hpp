#ifndef UE4SS_SDK_GSSQuest_Base_HPP
#define UE4SS_SDK_GSSQuest_Base_HPP

class UGSSQuest_Base_C : public UGSSQuest
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00E8 (size: 0x8)
    TArray<FGSSEventTime> EventsTimer;                                                // 0x00F0 (size: 0x10)

    void InitializeQuest(class APawn* Pawn);
    void UpdateQuest(class APawn* Pawn);
    void TickObject(float DeltaTime);
    void FinishQuest(const EQuestState QuestState);
    void LoadQuestStats();
    void ExecuteUbergraph_GSSQuest_Base(int32 EntryPoint);
}; // Size: 0x100

#endif
