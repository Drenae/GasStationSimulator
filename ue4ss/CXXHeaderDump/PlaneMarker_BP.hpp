#ifndef UE4SS_SDK_PlaneMarker_BP_HPP
#define UE4SS_SDK_PlaneMarker_BP_HPP

class APlaneMarker_BP_C : public AObjectiveMarker
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0250 (size: 0x8)
    class UUserWidget* Marker_0;                                                      // 0x0258 (size: 0x8)
    bool IsInMiniGame;                                                                // 0x0260 (size: 0x1)

    void ReceiveBeginPlay();
    void ReceiveDestroyed();
    void UpdateMarker(bool Show, float Distance);
    void UpdateOutline(bool Show, float Distance);
    void HidePlaneMarker(bool Show);
    void ExecuteUbergraph_PlaneMarker_BP(int32 EntryPoint);
}; // Size: 0x261

#endif
