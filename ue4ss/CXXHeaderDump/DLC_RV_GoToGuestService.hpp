#ifndef UE4SS_SDK_DLC_RV_GoToGuestService_HPP
#define UE4SS_SDK_DLC_RV_GoToGuestService_HPP

class UDLC_RV_GoToGuestService_C : public UGoToGuestService
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0170 (size: 0x8)
    class UAnimMontage* Playing Autocomplete End Montage;                             // 0x0178 (size: 0x8)
    class UMaterialInterface* Skin Material;                                          // 0x0180 (size: 0x8)
    class AInteractableBuilding* Interactable Building;                               // 0x0188 (size: 0x8)
    FTimerHandle Autocomplete Timer;                                                  // 0x0190 (size: 0x8)
    EMovementGroundType DefaultOverrideMovementType;                                  // 0x0198 (size: 0x1)

    void GetIsMontageManagerPlayingAnim(bool& IsPlayingAnim);
    void Get Assigned Employee(class ARVCampEmployee*& Rv Employee);
    void Get Guest Service Settings(class URvMinigameBaseSettings*& Guest Service Settings);
    void Get Random Character Look Preset(bool& bFound, FCharacterLookOverride& Preset);
    void InitializeTask(class AAICharacterBase* Character, const TArray<FTaskProgress>& NewTasksProgress);
    void StartTask(class ACharacter* Character);
    void TickObject(float DeltaTime);
    void FinishBeginTask(const ETaskResult TaskState, FString FinishReason);
    void BeginAutocompleteService();
    void OnFinishedAutocompleteService();
    void FinishEndTask();
    void FinishAutocompleteService();
    void FinishTask_MontageBlendOut(class UAnimMontage* Montage, bool bInterrupted);
    void OnAutocompleteServiceEnded_BlendOut(class UAnimMontage* Montage, bool bInterrupted);
    void ExecuteUbergraph_DLC_RV_GoToGuestService(int32 EntryPoint);
}; // Size: 0x199

#endif
