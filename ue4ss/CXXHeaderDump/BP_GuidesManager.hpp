#ifndef UE4SS_SDK_BP_GuidesManager_HPP
#define UE4SS_SDK_BP_GuidesManager_HPP

class ABP_GuidesManager_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0228 (size: 0x8)
    int32 RadialElementIndex;                                                         // 0x0230 (size: 0x4)
    TArray<UWBP_RedDotUiMark_C*> MarkersOnScreen;                                     // 0x0238 (size: 0x10)

    void RemoveGuideWidgets();
    void ExecuteUbergraph_BP_GuidesManager(int32 EntryPoint);
}; // Size: 0x248

#endif
