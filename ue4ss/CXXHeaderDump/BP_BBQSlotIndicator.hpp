#ifndef UE4SS_SDK_BP_BBQSlotIndicator_HPP
#define UE4SS_SDK_BP_BBQSlotIndicator_HPP

class ABP_BBQSlotIndicator_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UStaticMeshComponent* Plane;                                                // 0x0228 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0230 (size: 0x8)
    float Show_Timeline_Scale_29C1BF4F4382EA202DC96AB97CEA6CAA;                       // 0x0238 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Show_Timeline__Direction_29C1BF4F4382EA202DC96AB97CEA6CAA; // 0x023C (size: 0x1)
    class UTimelineComponent* Show Timeline;                                          // 0x0240 (size: 0x8)
    class UBBQSlotComponent* BBQ Slot;                                                // 0x0248 (size: 0x8)
    class ABBQItem* Binded BBQ Item;                                                  // 0x0250 (size: 0x8)
    class UMaterialInstanceDynamic* Mid;                                              // 0x0258 (size: 0x8)
    FLinearColor Empty Color;                                                         // 0x0260 (size: 0x10)
    FLinearColor Cooking Color;                                                       // 0x0270 (size: 0x10)
    FLinearColor Perfect Color;                                                       // 0x0280 (size: 0x10)
    FLinearColor Burning Color;                                                       // 0x0290 (size: 0x10)

    void Show Timeline__FinishedFunc();
    void Show Timeline__UpdateFunc();
    void Destroy Slot();
    void OnSetBBQItemInside_Event_0(class UBBQSlotComponent* Slot, class ABBQItem* BBQItem);
    void On Cooking Progress Updated(class ABBQItem* Item, float CookingProgress, float CurrentStateProgress);
    void ReceiveBeginPlay();
    void Set Progress(float Progress, bool Cooked);
    void ExecuteUbergraph_BP_BBQSlotIndicator(int32 EntryPoint);
}; // Size: 0x2A0

#endif
