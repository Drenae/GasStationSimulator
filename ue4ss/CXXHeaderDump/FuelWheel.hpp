#ifndef UE4SS_SDK_FuelWheel_HPP
#define UE4SS_SDK_FuelWheel_HPP

class AFuelWheel_C : public AInteractableActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0400 (size: 0x8)
    class UAudioComponent* FuelWheelTurn_Cue;                                         // 0x0408 (size: 0x8)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_C0D4D25648F3DCA94C9224BA4774183D; // 0x0410 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0418 (size: 0x8)
    class AFuelMagazine_C* FuelMagazine;                                              // 0x0420 (size: 0x8)
    TSoftObjectPtr<class UStaticMesh> StaticMesh;                                     // 0x0428 (size: 0x28)

    bool SimpleInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void OnLoaded_0B39633F4EFF0CED38FE65BDBA211E0F(class UObject* Loaded);
    void StartAnimation();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_FuelWheel(int32 EntryPoint);
}; // Size: 0x450

#endif
