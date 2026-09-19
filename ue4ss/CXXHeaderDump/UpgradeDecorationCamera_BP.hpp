#ifndef UE4SS_SDK_UpgradeDecorationCamera_BP_HPP
#define UE4SS_SDK_UpgradeDecorationCamera_BP_HPP

class AUpgradeDecorationCamera_BP_C : public AUpgradeStationCamera
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class UArrowComponent* arrow;                                                     // 0x0250 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0258 (size: 0x8)
    FName FoundMap;                                                                   // 0x0260 (size: 0x8)
    bool bLoadingMap;                                                                 // 0x0268 (size: 0x1)
    FName MapToUnload;                                                                // 0x026C (size: 0x8)

    void CanUnload(FName MapToUnload, bool& bCanUnload);
    void ReceiveBeginPlay();
    void ActivateCamera();
    void DeActivateCamera();
    void UnblockMap(FName MapName, bool EnablePostprocess);
    void OnLoadGameProgressUpdated_Event_0(const float CurrentProgress, const float MaxProgress, const FName LoadedMap, const bool LoadGameCompleted);
    void ExecuteUbergraph_UpgradeDecorationCamera_BP(int32 EntryPoint);
}; // Size: 0x274

#endif
