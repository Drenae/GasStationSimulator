#ifndef UE4SS_SDK_OpenGasStation_Logo_HPP
#define UE4SS_SDK_OpenGasStation_Logo_HPP

class AOpenGasStation_Logo_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0230 (size: 0x8)
    float Timeline_0_NewTrack_0_A91F14B0473ECE18E191F6A88FC3D41D;                     // 0x0238 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_A91F14B0473ECE18E191F6A88FC3D41D; // 0x023C (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0240 (size: 0x8)
    class UMaterialInstanceDynamic* logo1;                                            // 0x0248 (size: 0x8)
    class UMaterialInstanceDynamic* Logo2;                                            // 0x0250 (size: 0x8)
    bool emmisive;                                                                    // 0x0258 (size: 0x1)
    FTimerHandle CustomFlickerHandle;                                                 // 0x0260 (size: 0x8)

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void OpenLogo();
    void CloseLogo();
    void ReceiveBeginPlay();
    void Light_OpenClose(bool NewParam);
    void StartFlickering();
    void ChangeEmmisive();
    void StopFlickering();
    void ExecuteUbergraph_OpenGasStation_Logo(int32 EntryPoint);
}; // Size: 0x268

#endif
