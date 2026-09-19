#ifndef UE4SS_SDK_Garage_Overlay_HPP
#define UE4SS_SDK_Garage_Overlay_HPP

class UGarage_Overlay_C : public UGSSWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0270 (size: 0x8)
    class UMiniGame_Notification_C* MiniGame_Notification;                            // 0x0278 (size: 0x8)
    bool ActiveMinigame;                                                              // 0x0280 (size: 0x1)
    class AAICharacterBase* AICharacter;                                              // 0x0288 (size: 0x8)
    class UGarage_Minigame_C* GarageMinigame;                                         // 0x0290 (size: 0x8)

    void WelcomePlayer(bool Condition, bool& ActiveMinigame);
    void MinigameMode(bool Enable, class AAICharacterBase* AICharacter);
    void ExecuteUbergraph_Garage_Overlay(int32 EntryPoint);
}; // Size: 0x298

#endif
