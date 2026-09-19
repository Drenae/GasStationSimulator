#ifndef UE4SS_SDK_BP_BrokenPlanePartParent_HPP
#define UE4SS_SDK_BP_BrokenPlanePartParent_HPP

class ABP_BrokenPlanePartParent_C : public ABrokenPlanePart
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0330 (size: 0x8)
    int32 WidgetIndexToRemove;                                                        // 0x0338 (size: 0x4)

    void SetHoleVisibility(bool bNewVisiblilty);
    void ReceiveBeginPlay();
    void OnHoleFixed_Event(class UStaticMeshComponent* HoleMesh);
    void ExecuteUbergraph_BP_BrokenPlanePartParent(int32 EntryPoint);
}; // Size: 0x33C

#endif
