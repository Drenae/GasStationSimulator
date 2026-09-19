#ifndef UE4SS_SDK_TradeCenter_BP_HPP
#define UE4SS_SDK_TradeCenter_BP_HPP

class ATradeCenter_BP_C : public ATradeCenter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0580 (size: 0x8)

    void UpdateMesh(const int32 ActorLevel, bool bLoadedFromSaveGame, bool bNewVersion);
    void PostLoadMapsBlueprintEvent();
    void ExecuteUbergraph_TradeCenter_BP(int32 EntryPoint);
}; // Size: 0x588

#endif
