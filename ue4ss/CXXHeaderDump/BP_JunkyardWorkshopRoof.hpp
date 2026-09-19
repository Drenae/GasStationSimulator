#ifndef UE4SS_SDK_BP_JunkyardWorkshopRoof_HPP
#define UE4SS_SDK_BP_JunkyardWorkshopRoof_HPP

class ABP_JunkyardWorkshopRoof_C : public AWorkshopRoof
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A0 (size: 0x8)
    class UStaticMeshComponent* SM_FluorescentLight_01;                               // 0x02A8 (size: 0x8)

    void OnRoofStartedMoving();
    void OnRoofFinishedMoving();
    void ExecuteUbergraph_BP_JunkyardWorkshopRoof(int32 EntryPoint);
}; // Size: 0x2B0

#endif
