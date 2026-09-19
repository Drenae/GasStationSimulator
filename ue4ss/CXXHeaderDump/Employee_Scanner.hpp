#ifndef UE4SS_SDK_Employee_Scanner_HPP
#define UE4SS_SDK_Employee_Scanner_HPP

class AEmployee_Scanner_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x0228 (size: 0x8)
    class UStaticMeshComponent* ScannerPOC_pahu;                                      // 0x0230 (size: 0x8)
    float LigthIntensity_Intensity_8768EC734F028E2AC5578E955ACA0F98;                  // 0x0238 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> LigthIntensity__Direction_8768EC734F028E2AC5578E955ACA0F98; // 0x023C (size: 0x1)
    class UTimelineComponent* LigthIntensity;                                         // 0x0240 (size: 0x8)

    void LigthIntensity__FinishedFunc();
    void LigthIntensity__UpdateFunc();
    void LightChange();
    void ExecuteUbergraph_Employee_Scanner(int32 EntryPoint);
}; // Size: 0x248

#endif
