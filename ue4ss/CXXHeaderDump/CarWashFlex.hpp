#ifndef UE4SS_SDK_CarWashFlex_HPP
#define UE4SS_SDK_CarWashFlex_HPP

class ACarWashFlex_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UNiagaraComponent* NS_CarWash;                                              // 0x0228 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0230 (size: 0x8)
    float BeamSpreadMax;                                                              // 0x0238 (size: 0x4)
    TArray<FParticleSysParam> params;                                                 // 0x0240 (size: 0x10)
    float BeamSpreadMin;                                                              // 0x0250 (size: 0x4)
    bool Spread;                                                                      // 0x0254 (size: 0x1)
    float DropSpreadMax;                                                              // 0x0258 (size: 0x4)
    float DropSpreadMin;                                                              // 0x025C (size: 0x4)
    float SteamSpreadMax;                                                             // 0x0260 (size: 0x4)
    float SteamSpreadMin;                                                             // 0x0264 (size: 0x4)
    float LogicSpreadMax;                                                             // 0x0268 (size: 0x4)
    float LogicSpreadMin;                                                             // 0x026C (size: 0x4)
    float LogicDensity;                                                               // 0x0270 (size: 0x4)
    float BeamSize;                                                                   // 0x0274 (size: 0x4)
    float DropsSize;                                                                  // 0x0278 (size: 0x4)
    float CloudSize;                                                                  // 0x027C (size: 0x4)
    bool CleaningSolution;                                                            // 0x0280 (size: 0x1)

    void Spread setup(bool NewSpread);
    void CleaningSolution_Setup(bool CleaningSolutionStatus);
    void ExecuteUbergraph_CarWashFlex(int32 EntryPoint);
}; // Size: 0x281

#endif
