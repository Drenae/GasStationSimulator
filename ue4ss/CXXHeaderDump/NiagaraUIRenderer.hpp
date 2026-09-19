#ifndef UE4SS_SDK_NiagaraUIRenderer_HPP
#define UE4SS_SDK_NiagaraUIRenderer_HPP

class ANiagaraUIActor : public AActor
{
}; // Size: 0x220

class UNiagaraSystemWidget : public UWidget
{
    class UNiagaraSystem* NiagaraSystemReference;                                     // 0x0108 (size: 0x8)
    TMap<UMaterialInterface*, UMaterialInterface*> MaterialRemapList;                 // 0x0110 (size: 0x50)
    bool AutoActivate;                                                                // 0x0160 (size: 0x1)
    bool TickWhenPaused;                                                              // 0x0161 (size: 0x1)
    bool FakeDepthScale;                                                              // 0x0162 (size: 0x1)
    float FakeDepthScaleDistance;                                                     // 0x0164 (size: 0x4)
    bool ShowDebugSystemInWorld;                                                      // 0x0168 (size: 0x1)
    bool DisableWarnings;                                                             // 0x0169 (size: 0x1)
    class ANiagaraUIActor* NiagaraActor;                                              // 0x0180 (size: 0x8)
    class UNiagaraUIComponent* NiagaraComponent;                                      // 0x0188 (size: 0x8)

    void UpdateTickWhenPaused(bool NewTickWhenPaused);
    void UpdateNiagaraSystemReference(class UNiagaraSystem* NewNiagaraSystem);
    void RedrawNiagaraUI();
    class UNiagaraUIComponent* GetNiagaraComponent();
    void DeactivateSystem();
    void ActivateSystem(bool Reset);
}; // Size: 0x190

class UNiagaraUIComponent : public UNiagaraComponent
{
}; // Size: 0x600

#endif
