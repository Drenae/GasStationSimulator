#ifndef UE4SS_SDK_NP_RubyTask_Wait_HPP
#define UE4SS_SDK_NP_RubyTask_Wait_HPP

class UNP_RubyTask_Wait_C : public UNPAITaskBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)

    void OnInitializeTask(class ANPAICharacterBase* OwnerCharacter, class AActor* InTargetActor);
    void FinishBeginTask(const FNPTaskFinishReason TaskStopReason);
    void StartTask();
    void ExecuteUbergraph_NP_RubyTask_Wait(int32 EntryPoint);
}; // Size: 0xB8

#endif
