#ifndef UE4SS_SDK_WBP_QuestManager_HPP
#define UE4SS_SDK_WBP_QuestManager_HPP

class UWBP_QuestManager_C : public UUI_QuestManager
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0288 (size: 0x8)
    class UInvalidationBox* InvalidationBox_0;                                        // 0x0290 (size: 0x8)

    void SetPositionMarker(class UUserWidget* MarkerWidget, class AActor* Actor);
    void Construct();
    void UpdateMarket(class UUserWidget* UserWidget, class AActor* TargetActor);
    void ExecuteUbergraph_WBP_QuestManager(int32 EntryPoint);
}; // Size: 0x298

#endif
