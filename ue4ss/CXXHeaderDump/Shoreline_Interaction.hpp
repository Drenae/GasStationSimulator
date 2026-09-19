#ifndef UE4SS_SDK_Shoreline_Interaction_HPP
#define UE4SS_SDK_Shoreline_Interaction_HPP

struct FShoreline_Interaction
{
    bool Debug_112_A83BBC2740BDD9336BB54E8C3AE5A324;                                  // 0x0000 (size: 0x1)
    bool Enable_114_E7B58C8A47F0F2D0733B44AF3C3C2F76;                                 // 0x0001 (size: 0x1)
    FVector LandscapeWorldSize_109_7CAF74724E7FBCF3263C37BC8CAF7333;                  // 0x0004 (size: 0xC)
    FVector LandscapeLocation_110_33FC9D274296005A047231AF0BDB4994;                   // 0x0010 (size: 0xC)
    class UTexture2D* Heightmap_67_B9ED83224127716524739FAC6CB7CEC1;                  // 0x0020 (size: 0x8)
    class UTexture* Shoreline_51_590E0C70416BCC949CCACA8C90CCD6FA;                    // 0x0028 (size: 0x8)
    float TerrainMinZ_94_BE4E53E04BE161067CC4F882C25AA7FF;                            // 0x0030 (size: 0x4)
    float TerrainMaxZ_95_4F9D23C74A1DC02DE793A3AD6E40023D;                            // 0x0034 (size: 0x4)
    float EdgeMask_98_A4CD5EE741E61216E4354582652F93B5;                               // 0x0038 (size: 0x4)
    float LandscapeFoam_100_A4A6B67C458E7103DC46E68EA5D0A4CA;                         // 0x003C (size: 0x4)
    float LandscapeOpacity_102_0705B6F845CB2102850CB28F7EE7EA3D;                      // 0x0040 (size: 0x4)
    float LandscapeFog_104_9939C7AB41262561B66105BA2AC59DA0;                          // 0x0044 (size: 0x4)

}; // Size: 0x48

#endif
