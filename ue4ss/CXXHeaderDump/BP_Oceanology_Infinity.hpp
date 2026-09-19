#ifndef UE4SS_SDK_BP_Oceanology_Infinity_HPP
#define UE4SS_SDK_BP_Oceanology_Infinity_HPP

class ABP_Oceanology_Infinity_C : public AQuadTree
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UStaticMeshComponent* Distance Field;                                       // 0x0238 (size: 0x8)
    class UStaticMeshComponent* Volumetric;                                           // 0x0240 (size: 0x8)
    class UStaticMeshComponent* Debug;                                                // 0x0248 (size: 0x8)
    class UInfinite_Compound* Infinite_Compound;                                      // 0x0250 (size: 0x8)
    class UPostProcessComponent* Underwater Post;                                     // 0x0258 (size: 0x8)
    class UBoxComponent* Post Process Volume;                                         // 0x0260 (size: 0x8)
    class UStaticMeshComponent* FarOceanMesh;                                         // 0x0268 (size: 0x8)
    class UHierarchicalInstancedStaticMeshComponent* WaterPreviewGrid;                // 0x0270 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0278 (size: 0x8)
    class UMaterialInstance* 3 Underwater Post-Process Material;                      // 0x0280 (size: 0x8)
    class UMaterialInstanceDynamic* Post-Process DYN;                                 // 0x0288 (size: 0x8)
    class UMaterialInstanceDynamic* Ocean surface;                                    // 0x0290 (size: 0x8)
    class UMaterialInstanceDynamic* Ocean surface (Far);                              // 0x0298 (size: 0x8)
    float Ocean Level;                                                                // 0x02A0 (size: 0x4)
    FGlobal_Displacement GlobalDisplacement;                                          // 0x02A4 (size: 0x14)
    FBaseOffset BaseOffset;                                                           // 0x02B8 (size: 0x1C)
    TEnumAsByte<Max_Waves::Type> Max_Waves;                                           // 0x02D4 (size: 0x1)
    FVector World Position;                                                           // 0x02D8 (size: 0xC)
    FVector Height;                                                                   // 0x02E4 (size: 0xC)
    class UMaterialInterface* Ocean;                                                  // 0x02F0 (size: 0x8)
    class UMaterialInstance* Ocean (Far);                                             // 0x02F8 (size: 0x8)
    Fwave_1 Σ1;                                                                       // 0x0300 (size: 0x14)
    Fwave_2 Σ2;                                                                       // 0x0314 (size: 0x14)
    Fwave_3 Σ3;                                                                       // 0x0328 (size: 0x14)
    Fwave_4 Σ4;                                                                       // 0x033C (size: 0x14)
    bool Use Distance Field;                                                          // 0x0350 (size: 0x1)
    FShoreline_Interaction Shoreline Interaction (Texture);                           // 0x0358 (size: 0x48)
    class UMaterialInstanceDynamic* Heightmap ( Debug ) ;                             // 0x03A0 (size: 0x8)
    FSurface_Light Surface_Light;                                                     // 0x03A8 (size: 0x38)
    FFoam_Generator Foam_Generator;                                                   // 0x03E0 (size: 0x30)
    FRefraction Refraction;                                                           // 0x0410 (size: 0x20)
    FNormals_Calculation Normal;                                                      // 0x0430 (size: 0x30)
    FUnderwater Underwater;                                                           // 0x0460 (size: 0x70)
    FGodRays GodRays;                                                                 // 0x04D0 (size: 0x40)
    FQuadTree_INF Quad Tree;                                                          // 0x0510 (size: 0x10)
    FDistanceField Shoreline Interaction (Distance Field);                            // 0x0520 (size: 0x20)
    FCaustics Caustics;                                                               // 0x0540 (size: 0x18)
    class UMaterialInstanceDynamic* VL;                                               // 0x0558 (size: 0x8)
    FMeshQuality Mesh Quality;                                                        // 0x0560 (size: 0x20)
    TEnumAsByte<ChangeQuality::Type> Change Quality;                                  // 0x0580 (size: 0x1)

    void Base offset + Σ1+ Σ2+ Σ3+ Σ4(FVector& Height);
    void Base offset + Σ1+ Σ2+ Σ3 (FVector& Height);
    void Base offset + Σ1+ Σ2 (FVector& Height);
    void Base offset + Σ1(FVector& Height);
    void Base offset(FVector& Height);
    void Location Offset();
    void Update Heightmap(FShoreline_Interaction Heightmap);
    void OnRep_Shoreline Interaction (Texture)();
    void Landscape Modulator();
    void OnRep_Quad Tree();
    void Update Quad Tree(FQuadTree_INF Quad Tree);
    void OnRep_Foam_Generator();
    void UpdateFoamGenerator(FFoam_Generator Foam_Generator);
    void OnRep_Max_Waves();
    void UpdateMax_Waves(TEnumAsByte<Max_Waves::Type> Max_Waves);
    void Update Σ4(Fwave_4 Σ4);
    void Update Σ3(Fwave_3 Σ3);
    void OnRep_Σ4();
    void OnRep_Σ3();
    void Update Σ2(Fwave_2 Σ2);
    void OnRep_Σ2();
    void OnRep_Σ1();
    void Update Σ1(Fwave_1 Σ1);
    void Update Base Offset(FBaseOffset BaseOffset);
    void OnRep_BaseOffset();
    void UpdateGlobalDisplacement(FGlobal_Displacement GlobalDisplacement);
    void OnRep_GlobalDisplacement();
    void EvaluateWaveHeight(FVector Point Location, float Point Thickness, bool& IsUnder, float& Amount, float& Z);
    void Get Wave Height(FVector Location, FVector& Height);
    void GerstnerWavesQuadruple(FVector World Position, float Amplitude, float Steepness, float Speed, float Wave Length, float Direction, float NumWaves, float Direction_Offset, FVector& Height);
    void Gerstner Wave(FVector World Position, float Direction XY, float Speed, float Wave Length, float Amplitude, float Steepness, float NumWaves, FVector& Height);
    void Inizialize();
    void UserConstructionScript();
    void SetBaseOffsetServer(FBaseOffset BaseOffset);
    void SetΣ1Server(Fwave_1 Σ1);
    void SetΣ2Server(Fwave_2 Σ2);
    void SetΣ3Server(Fwave_3 Σ3);
    void SetΣ4Server(Fwave_4 Σ4);
    void SetMaxWavesServer(TEnumAsByte<Max_Waves::Type> Max_Waves);
    void SetFoamGeneratorServer(FFoam_Generator Foam_Generator);
    void SetGlobalDisplacementServer(FGlobal_Displacement GlobalDisplacement);
    void ReceiveBeginPlay();
    void ExitedWater?();
    void EnteredWater?();
    void SetUpdateQuadTreeServer(FQuadTree_INF Quad Tree);
    void SetUpdateHeightmapServer(FShoreline_Interaction Heightmap);
    void ExecuteUbergraph_BP_Oceanology_Infinity(int32 EntryPoint);
}; // Size: 0x581

#endif
