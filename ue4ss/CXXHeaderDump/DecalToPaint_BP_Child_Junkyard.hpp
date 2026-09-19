#ifndef UE4SS_SDK_DecalToPaint_BP_Child_Junkyard_HPP
#define UE4SS_SDK_DecalToPaint_BP_Child_Junkyard_HPP

class ADecalToPaint_BP_Child_Junkyard_C : public ADecalToPaint_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* Plane;                                                // 0x02B0 (size: 0x8)
    float DitherTimeline_NewTrack_0_1B54E8CC472E3FAA93F0379083151218;                 // 0x02B8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> DitherTimeline__Direction_1B54E8CC472E3FAA93F0379083151218; // 0x02BC (size: 0x1)
    class UTimelineComponent* DitherTimeline;                                         // 0x02C0 (size: 0x8)
    class UMaterialInstanceDynamic* PlaneInstancedMaterial;                           // 0x02C8 (size: 0x8)

    void DitherTimeline__FinishedFunc();
    void DitherTimeline__UpdateFunc();
    void ReceiveBeginPlay();
    void HidePlane();
    void ShowPlane();
    void ExecuteUbergraph_DecalToPaint_BP_Child_Junkyard(int32 EntryPoint);
}; // Size: 0x2D0

#endif
