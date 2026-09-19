#ifndef UE4SS_SDK_BP_RVCampSpot_HPP
#define UE4SS_SDK_BP_RVCampSpot_HPP

class ABP_RVCampSpot_C : public ARVCampSpot
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UArrowComponent* DebugServicesBoardLocation;                                // 0x0320 (size: 0x8)
    class UArrowComponent* DebugBoardLocation;                                        // 0x0328 (size: 0x8)
    class UBoxComponent* DebugBox;                                                    // 0x0330 (size: 0x8)
    bool DebugBoardsSpawned;                                                          // 0x0338 (size: 0x1)
    class AActor* DebugBoardActor;                                                    // 0x0340 (size: 0x8)
    class AActor* DebugServicesBoardActor;                                            // 0x0348 (size: 0x8)

    void OnLoaded_623C34724532AB70D2699983A8F8D2C2(UClass* Loaded);
    void OnLoaded_AFF5297045CF54DFD19A30B90E371D61(UClass* Loaded);
    void SetDebugBoardVisibility(bool IsVisible);
    void ExecuteUbergraph_BP_RVCampSpot(int32 EntryPoint);
}; // Size: 0x350

#endif
