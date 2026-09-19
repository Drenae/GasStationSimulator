#ifndef UE4SS_SDK_WaterVehicleBase_BP_HPP
#define UE4SS_SDK_WaterVehicleBase_BP_HPP

class AWaterVehicleBase_BP_C : public AWaterVehicle
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    class UOceanPhysics_C* OceanPhysics;                                              // 0x0350 (size: 0x8)
    class UWaterMovementComponent_BP_C* WaterMovementComponent_BP;                    // 0x0358 (size: 0x8)
    bool bSwimSuit;                                                                   // 0x0360 (size: 0x1)
    bool bDelivery;                                                                   // 0x0361 (size: 0x1)
    class UMaterialInstanceDynamic* WetSuit_DMI;                                      // 0x0368 (size: 0x8)
    class UMaterialInstanceDynamic* WetSuitHood_DMI;                                  // 0x0370 (size: 0x8)
    FTimerHandle DeathDespawnTimer;                                                   // 0x0378 (size: 0x8)
    bool bIsNewSkeletonMesh;                                                          // 0x0380 (size: 0x1)
    TArray<FGameplayTag> Races;                                                       // 0x0388 (size: 0x10)
    FGameplayTagContainer GameplayTagsContainer;                                      // 0x0398 (size: 0x20)
    TArray<FDataAsset_TagQuery_F> NPCDataAssets;                                      // 0x03B8 (size: 0x10)
    TArray<UWaterVehicle_Animations_Template_BP_C*> AnimationDataAssets;              // 0x03C8 (size: 0x10)
    class UWaterVehicle_Animations_Template_BP_C* CurrentAnimationDataAsset;          // 0x03D8 (size: 0x8)
    class UWaterVehicle_NPC_Template_BP_C* CurrentNPCDataAsset;                       // 0x03E0 (size: 0x8)

    void SetUpMontages(class UWaterVehicle_Animations_Template_BP_C* AnimationDataAsset);
    void SetUpWetsuitColors();
    void SetAnimTickEnabled();
    void GetCurrentNPCDA();
    void GetCurrentAnimDA();
    void ExtractRaceFromNPC(FGameplayTagContainer NPC, FString& Race);
    void UserConstructionScript();
    void OnNotifyEnd_CD63821349C6E8A22D93408CF9B4085E(FName NotifyName);
    void OnNotifyBegin_CD63821349C6E8A22D93408CF9B4085E(FName NotifyName);
    void OnInterrupted_CD63821349C6E8A22D93408CF9B4085E(FName NotifyName);
    void OnBlendOut_CD63821349C6E8A22D93408CF9B4085E(FName NotifyName);
    void OnCompleted_CD63821349C6E8A22D93408CF9B4085E(FName NotifyName);
    void OnLoaded_B91F046B4EC2E8D50A483EA7BBF378D1(class UObject* Loaded);
    void OnLoaded_B213782F47AD812DC1E2438443112E95(class UObject* Loaded);
    void OnNotifyEnd_A302903E4ECD4B71DB7CBB9572644E8C(FName NotifyName);
    void OnNotifyBegin_A302903E4ECD4B71DB7CBB9572644E8C(FName NotifyName);
    void OnInterrupted_A302903E4ECD4B71DB7CBB9572644E8C(FName NotifyName);
    void OnBlendOut_A302903E4ECD4B71DB7CBB9572644E8C(FName NotifyName);
    void OnCompleted_A302903E4ECD4B71DB7CBB9572644E8C(FName NotifyName);
    void OnLoaded_FCED6B0D40367BC5BB4076985DD0489F(class UObject* Loaded);
    void OnNotifyEnd_CF9736424E4DCB44E0ACBF8FA1B9527D(FName NotifyName);
    void OnNotifyBegin_CF9736424E4DCB44E0ACBF8FA1B9527D(FName NotifyName);
    void OnInterrupted_CF9736424E4DCB44E0ACBF8FA1B9527D(FName NotifyName);
    void OnBlendOut_CF9736424E4DCB44E0ACBF8FA1B9527D(FName NotifyName);
    void OnCompleted_CF9736424E4DCB44E0ACBF8FA1B9527D(FName NotifyName);
    void OnLoaded_00FCA4B64DF988DAAA3DD38527F435F2(class UObject* Loaded);
    void OnNotifyEnd_56EDD9B54E09299CBAFC3CB8FC1086B0(FName NotifyName);
    void OnNotifyBegin_56EDD9B54E09299CBAFC3CB8FC1086B0(FName NotifyName);
    void OnInterrupted_56EDD9B54E09299CBAFC3CB8FC1086B0(FName NotifyName);
    void OnBlendOut_56EDD9B54E09299CBAFC3CB8FC1086B0(FName NotifyName);
    void OnCompleted_56EDD9B54E09299CBAFC3CB8FC1086B0(FName NotifyName);
    void OnLoaded_39740F5A4A306592782E358F94576000(class UObject* Loaded);
    void OnLoaded_2498DAEB47EB6FE00189B68AC5818231(UClass* Loaded);
    void OnLoaded_E0D8894B4AD8A77D70A81C9C2D6F4B0C(class UObject* Loaded);
    void OnLoaded_9F07A4F348D29B1AAB3560A9AB2F571C(class UObject* Loaded);
    void OnLoaded_9DF3934A47526952F5B0F3932C26C3C8(class UObject* Loaded);
    void OnLoaded_C34D01964A0E3B5D777AEFBA9FDDDEEA(class UObject* Loaded);
    void OnLoaded_1C91CF264F938FCA395D44AF794A84A0(class UObject* Loaded);
    void OnNotifyEnd_B81CCB4C4A75CEF6E03F4FBD259D15E7(FName NotifyName);
    void OnNotifyBegin_B81CCB4C4A75CEF6E03F4FBD259D15E7(FName NotifyName);
    void OnInterrupted_B81CCB4C4A75CEF6E03F4FBD259D15E7(FName NotifyName);
    void OnBlendOut_B81CCB4C4A75CEF6E03F4FBD259D15E7(FName NotifyName);
    void OnCompleted_B81CCB4C4A75CEF6E03F4FBD259D15E7(FName NotifyName);
    void BndEvt__Boat_03a_BP_SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void OnDestroyed_Event_0(class AActor* DestroyedActor);
    void OnDeath();
    void ConstructCharacter();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void OnDeathDespawn();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_WaterVehicleBase_BP(int32 EntryPoint);
}; // Size: 0x3E8

#endif
