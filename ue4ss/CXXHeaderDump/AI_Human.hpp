#ifndef UE4SS_SDK_AI_Human_HPP
#define UE4SS_SDK_AI_Human_HPP

class AAI_Human_C : public ACharacterController
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0330 (size: 0x8)

    void ReceiveBeginPlay();
    void ReceivePossess(class APawn* PossessedPawn);
    void OnFinishGameLoaded_Event_0(const bool GameLoaded);
    void StartAI();
    void StartAIEvent();
    void ExecuteUbergraph_AI_Human(int32 EntryPoint);
}; // Size: 0x338

#endif
