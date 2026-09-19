#ifndef UE4SS_SDK_DE_Base_HPP
#define UE4SS_SDK_DE_Base_HPP

class UDE_Base_C : public UEventDisplay
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0070 (size: 0x8)
    ECharacterState PrevMinigameState;                                                // 0x0078 (size: 0x1)
    FTimerHandle WaitForPlayerMobileTimer;                                            // 0x0080 (size: 0x8)
    bool WaitForPlayerMobile;                                                         // 0x0088 (size: 0x1)

    void InitializeEventDisplay(class AGSSGameState* InitGSSGameState);
    void FinishEventDisplay();
    void CheckForPlayerMobile();
    void ExecuteUbergraph_DE_Base(int32 EntryPoint);
}; // Size: 0x89

#endif
