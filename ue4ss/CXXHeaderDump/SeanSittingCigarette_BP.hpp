#ifndef UE4SS_SDK_SeanSittingCigarette_BP_HPP
#define UE4SS_SDK_SeanSittingCigarette_BP_HPP

class ASeanSittingCigarette_BP_C : public AJoeAccesories_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0258 (size: 0x8)
    class UNiagaraComponent* NS_CigSmoke;                                             // 0x0260 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0268 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_SeanSittingCigarette_BP(int32 EntryPoint);
}; // Size: 0x270

#endif
