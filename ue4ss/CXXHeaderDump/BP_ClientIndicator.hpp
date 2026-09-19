#ifndef UE4SS_SDK_BP_ClientIndicator_HPP
#define UE4SS_SDK_BP_ClientIndicator_HPP

class ABP_ClientIndicator_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UStaticMeshComponent* SM_Welder_Set;                                        // 0x0228 (size: 0x8)
    class UStaticMeshComponent* SM_BaloonIndicator_line;                              // 0x0230 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x0238 (size: 0x8)
    class UStaticMeshComponent* SM_BaloonIndicator;                                   // 0x0240 (size: 0x8)
    class USceneComponent* Baloon;                                                    // 0x0248 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0250 (size: 0x8)
    float Scale_BaloonScale_FF64A9EB43438F964A950889C4C1DC60;                         // 0x0258 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Scale__Direction_FF64A9EB43438F964A950889C4C1DC60; // 0x025C (size: 0x1)
    class UTimelineComponent* Scale;                                                  // 0x0260 (size: 0x8)
    FGameplayTag Service Tag;                                                         // 0x0268 (size: 0x8)
    TSoftObjectPtr<class ARVCampSpot> Optional Camp Spot;                             // 0x0270 (size: 0x28)
    class ARvGuestServiceSpot* Guest Service Spot;                                    // 0x0298 (size: 0x8)
    class UMaterialInterface* Not Automated Material;                                 // 0x02A0 (size: 0x8)
    class UMaterialInterface* Automated Material;                                     // 0x02A8 (size: 0x8)

    void Bind Guest Service();
    bool Is Service Automated();
    void Scale__FinishedFunc();
    void Scale__UpdateFunc();
    void ReceiveBeginPlay();
    void On Guest Waits For Service(bool bWaits);
    void On Automated Services Updated();
    void Update Material(bool Service Automated);
    void ExecuteUbergraph_BP_ClientIndicator(int32 EntryPoint);
}; // Size: 0x2B0

#endif
