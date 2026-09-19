#ifndef UE4SS_SDK_Oceanology_Plugin_HPP
#define UE4SS_SDK_Oceanology_Plugin_HPP

#include "Oceanology_Plugin_enums.hpp"

class AOceanologySwimVolume : public APhysicsVolume
{
}; // Size: 0x268

class AQuadTree : public AActor
{
    class USceneComponent* DefaultSceneRoot;                                          // 0x0220 (size: 0x8)
    bool EditorTickIsEnabled;                                                         // 0x0228 (size: 0x1)

    void SetEditorTickEnabled(bool bEnabled);
    void Procedural(class UHierarchicalInstancedStaticMeshComponent* HISMC, float GridSize, int32 GridTiles, float CellSize);
    void EditorTick(float DeltaSeconds);
}; // Size: 0x230

class UInfinite_Compound : public USceneComponent
{
    bool RealTime;                                                                    // 0x01F8 (size: 0x1)
    float TimeJump;                                                                   // 0x01FC (size: 0x4)
    EInfinityCategory InfinityCategory;                                               // 0x0200 (size: 0x1)

}; // Size: 0x210

class UOceanology_PluginBPLibrary : public UBlueprintFunctionLibrary
{

    float Oceanology_PluginSampleFunction(float Param);
}; // Size: 0x28

#endif
