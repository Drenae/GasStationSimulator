#ifndef UE4SS_SDK_PartySpot_HUD_HPP
#define UE4SS_SDK_PartySpot_HUD_HPP

class UPartySpot_HUD_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0268 (size: 0x8)
    class UMiniGames_Tutorial_C* MiniGames_Tutorial;                                  // 0x0270 (size: 0x8)
    class APartySpot* PartySpotREF;                                                   // 0x0278 (size: 0x8)
    class UMiniGames_Tutorial_C* PartySpotTutorialREF;                                // 0x0280 (size: 0x8)

    void Construct();
    void ExecuteUbergraph_PartySpot_HUD(int32 EntryPoint);
}; // Size: 0x288

#endif
