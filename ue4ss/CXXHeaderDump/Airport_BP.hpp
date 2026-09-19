#ifndef UE4SS_SDK_Airport_BP_HPP
#define UE4SS_SDK_Airport_BP_HPP

class AAirport_BP_C : public AAirport
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05D0 (size: 0x8)
    int32 Index;                                                                      // 0x05D8 (size: 0x4)
    int32 MaxIndex;                                                                   // 0x05DC (size: 0x4)

    bool IsOnCheckDepartureScreenQuest();
    void ReceiveTick(float DeltaSeconds);
    void UpdateMesh(const int32 ActorLevel, bool bLoadedFromSaveGame, bool bNewVersion);
    void ReceiveBeginPlay();
    void PostLoadMapsBlueprintEvent();
    void ExecuteUbergraph_Airport_BP(int32 EntryPoint);
}; // Size: 0x5E0

#endif
