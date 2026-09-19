#ifndef UE4SS_SDK_WaterVehicle_NPC_Template_BP_HPP
#define UE4SS_SDK_WaterVehicle_NPC_Template_BP_HPP

class UWaterVehicle_NPC_Template_BP_C : public UPrimaryDataAsset
{
    FString Race;                                                                     // 0x0030 (size: 0x10)
    bool bIsMale;                                                                     // 0x0040 (size: 0x1)
    TSoftObjectPtr<class USkeletalMesh> Invis;                                        // 0x0048 (size: 0x28)
    TSoftObjectPtr<class USkeletalMesh> SwimsuitHood;                                 // 0x0070 (size: 0x28)
    TSoftObjectPtr<class USkeletalMesh> SwimsuitBody;                                 // 0x0098 (size: 0x28)
    TSoftObjectPtr<class UMaterialInstance> SkinColorMaterial;                        // 0x00C0 (size: 0x28)
    TArray<TSoftObjectPtr<class USkeletalMesh>> Faces;                                // 0x00E8 (size: 0x10)

}; // Size: 0xF8

#endif
