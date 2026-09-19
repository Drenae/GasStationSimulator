#ifndef UE4SS_SDK_WaterVehicle_Animations_Template_BP_HPP
#define UE4SS_SDK_WaterVehicle_Animations_Template_BP_HPP

class UWaterVehicle_Animations_Template_BP_C : public UPrimaryDataAsset
{
    FString BoatName;                                                                 // 0x0030 (size: 0x10)
    FGameplayTag CharacterGenderTag;                                                  // 0x0040 (size: 0x8)
    TSoftClassPtr<UAnimInstance> AnimBlueprint;                                       // 0x0048 (size: 0x28)
    TSoftObjectPtr<class UAnimMontage> AM_Spawn;                                      // 0x0070 (size: 0x28)
    TSoftObjectPtr<class UAnimMontage> AM_DeSpawn;                                    // 0x0098 (size: 0x28)
    TSoftObjectPtr<class UAnimMontage> AM_Stopping;                                   // 0x00C0 (size: 0x28)
    TSoftObjectPtr<class UAnimMontage> AM_Reverse;                                    // 0x00E8 (size: 0x28)
    TSoftObjectPtr<class UAnimMontage> AM_Destroy;                                    // 0x0110 (size: 0x28)
    TSoftObjectPtr<class UAnimMontage> AM_HitLeft;                                    // 0x0138 (size: 0x28)
    TSoftObjectPtr<class UAnimMontage> AM_HitRight;                                   // 0x0160 (size: 0x28)

}; // Size: 0x188

#endif
