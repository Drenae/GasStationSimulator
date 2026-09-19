#ifndef UE4SS_SDK_RV_Q022RubyChallenge_Objective_HPP
#define UE4SS_SDK_RV_Q022RubyChallenge_Objective_HPP

class URV_Q022RubyChallenge_Objective_C : public UCountableObjectiveBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0098 (size: 0x8)
    FTimerHandle QuestTimer;                                                          // 0x00A0 (size: 0x8)
    FTimerHandle CinematicTimer;                                                      // 0x00A8 (size: 0x8)
    bool Was Loaded from Save;                                                        // 0x00B0 (size: 0x1)

    void StartObjective(class UWorld* World, bool bWasLoadedFromSave);
    void Progress(FGameplayTag ServiceTag, bool bAutocompleted);
    void CustomEvent_0(class URVCamperComponent* Camper);
    void CheckIfUpgradeFinished();
    void OnTrustPointsUpdated(int32 CurrentTrustPoints, int32 Difference);
    void ExecuteUbergraph_RV_Q022RubyChallenge_Objective(int32 EntryPoint);
}; // Size: 0xB1

#endif
