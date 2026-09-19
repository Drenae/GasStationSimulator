#ifndef UE4SS_SDK_OpenGasStation_Logo_Chunchumanchu_Island_HPP
#define UE4SS_SDK_OpenGasStation_Logo_Chunchumanchu_Island_HPP

class AOpenGasStation_Logo_Chunchumanchu_Island_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UStaticMeshComponent* SM_Totem_06_pole_02;                                  // 0x0228 (size: 0x8)
    class UStaticMeshComponent* SM_Totem_06_pole_03;                                  // 0x0230 (size: 0x8)
    class UStaticMeshComponent* LogoClosedMesh;                                       // 0x0238 (size: 0x8)
    class UStaticMeshComponent* LogoOpenMesh;                                         // 0x0240 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0248 (size: 0x8)
    class UMaterialInstanceDynamic* LogoOpenMaterial;                                 // 0x0250 (size: 0x8)
    class UMaterialInstanceDynamic* LogoClosedMaterial;                               // 0x0258 (size: 0x8)

    void OpenLogo();
    void CloseLogo();
    void ReceiveBeginPlay();
    void Light(bool NewParam);
    void OnGameLoaded(const float CurrentProgress, const float MaxProgress, const FName LoadedMap, const bool LoadGameCompleted);
    void ExecuteUbergraph_OpenGasStation_Logo_Chunchumanchu_Island(int32 EntryPoint);
}; // Size: 0x260

#endif
