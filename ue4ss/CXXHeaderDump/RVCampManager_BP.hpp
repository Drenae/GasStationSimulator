#ifndef UE4SS_SDK_RVCampManager_BP_HPP
#define UE4SS_SDK_RVCampManager_BP_HPP

class ARVCampManager_BP_C : public ARVCampManager
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0510 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0518 (size: 0x8)
    TArray<TSubclassOf<class UTaskBase>> AI Tasks;                                    // 0x0520 (size: 0x10)

    void OnTrustPointsUpdated(int32 CurrentTrustPoints, int32 Difference);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_RVCampManager_BP(int32 EntryPoint);
}; // Size: 0x530

#endif
