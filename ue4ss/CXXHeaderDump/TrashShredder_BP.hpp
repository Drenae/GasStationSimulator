#ifndef UE4SS_SDK_TrashShredder_BP_HPP
#define UE4SS_SDK_TrashShredder_BP_HPP

class ATrashShredder_BP_C : public ATrashShredder
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UStaticMeshComponent* SM_Sredder_gear1;                                     // 0x0268 (size: 0x8)
    class UStaticMeshComponent* SM_Sredder_gear;                                      // 0x0270 (size: 0x8)
    float ShredderWheels_Wheel2_BEE73114464D076C50391EB9C3B87367;                     // 0x0278 (size: 0x4)
    float ShredderWheels_Wheel1_BEE73114464D076C50391EB9C3B87367;                     // 0x027C (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> ShredderWheels__Direction_BEE73114464D076C50391EB9C3B87367; // 0x0280 (size: 0x1)
    class UTimelineComponent* ShredderWheels;                                         // 0x0288 (size: 0x8)
    bool bIsPlaying;                                                                  // 0x0290 (size: 0x1)

    void ShredderWheels__FinishedFunc();
    void ShredderWheels__UpdateFunc();
    void OnButtonPress();
    void ExecuteUbergraph_TrashShredder_BP(int32 EntryPoint);
}; // Size: 0x291

#endif
