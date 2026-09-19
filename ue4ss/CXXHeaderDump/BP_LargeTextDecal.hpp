#ifndef UE4SS_SDK_BP_LargeTextDecal_HPP
#define UE4SS_SDK_BP_LargeTextDecal_HPP

class ABP_LargeTextDecal_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0228 (size: 0x8)
    FString Text;                                                                     // 0x0230 (size: 0x10)
    float TextSize;                                                                   // 0x0240 (size: 0x4)
    TArray<FString> Alphabet;                                                         // 0x0248 (size: 0x10)
    float TextSpacing;                                                                // 0x0258 (size: 0x4)
    int32 TextMaterial;                                                               // 0x025C (size: 0x4)
    FLinearColor Color;                                                               // 0x0260 (size: 0x10)
    float Roughness;                                                                  // 0x0270 (size: 0x4)
    float Wear;                                                                       // 0x0274 (size: 0x4)
    float Chipping;                                                                   // 0x0278 (size: 0x4)
    float DecalDepth;                                                                 // 0x027C (size: 0x4)
    TArray<UDecalComponent*> DecalComponents;                                         // 0x0280 (size: 0x10)

    void UserConstructionScript();
    void UpdateText(FString NewText, float TextSize);
    void ExecuteUbergraph_BP_LargeTextDecal(int32 EntryPoint);
}; // Size: 0x290

#endif
