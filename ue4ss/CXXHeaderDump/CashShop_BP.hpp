#ifndef UE4SS_SDK_CashShop_BP_HPP
#define UE4SS_SDK_CashShop_BP_HPP

class ACashShop_BP_C : public ACashShop
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0880 (size: 0x8)
    class UAudioComponent* SoundtrackRadio;                                           // 0x0888 (size: 0x8)
    class UStaticMeshComponent* SM_Cash_Drawer;                                       // 0x0890 (size: 0x8)
    class UStaticMeshComponent* SM_Cash_Register;                                     // 0x0898 (size: 0x8)
    class UChildActorComponent* BP_Radio;                                             // 0x08A0 (size: 0x8)
    class UChildActorComponent* Computer;                                             // 0x08A8 (size: 0x8)
    class UArrowComponent* ArrowComponent14;                                          // 0x08B0 (size: 0x8)
    class UArrowComponent* ArrowComponent13;                                          // 0x08B8 (size: 0x8)
    class UArrowComponent* ArrowComponent12;                                          // 0x08C0 (size: 0x8)
    class UArrowComponent* ArrowComponent11;                                          // 0x08C8 (size: 0x8)
    class UArrowComponent* ArrowComponent10;                                          // 0x08D0 (size: 0x8)
    class UArrowComponent* ArrowComponent09;                                          // 0x08D8 (size: 0x8)
    class UArrowComponent* ArrowComponent08;                                          // 0x08E0 (size: 0x8)
    class UArrowComponent* ArrowComponent07;                                          // 0x08E8 (size: 0x8)
    class UArrowComponent* ArrowComponent06;                                          // 0x08F0 (size: 0x8)
    class UArrowComponent* ArrowComponent05;                                          // 0x08F8 (size: 0x8)
    class UArrowComponent* ArrowComponent04;                                          // 0x0900 (size: 0x8)
    class UArrowComponent* ArrowComponent03;                                          // 0x0908 (size: 0x8)
    class UStaticMeshComponent* ScannerArrowMesh;                                     // 0x0910 (size: 0x8)
    class UArrowComponent* ArrowComponent02;                                          // 0x0918 (size: 0x8)
    class UConveyorBeltSpawnLocComp* Bottom3;                                         // 0x0920 (size: 0x8)
    class UBoxComponent* ItemComponentBox;                                            // 0x0928 (size: 0x8)
    class UBoxComponent* BoxCollision;                                                // 0x0930 (size: 0x8)
    class UConveyorBeltSpawnLocComp* Bottom2;                                         // 0x0938 (size: 0x8)
    class UConveyorBeltSpawnLocComp* Bottom1;                                         // 0x0940 (size: 0x8)
    class UConveyorBeltSpawnLocComp* Bottom;                                          // 0x0948 (size: 0x8)
    class UConveyorBeltSpawnLocComp* Mid;                                             // 0x0950 (size: 0x8)
    class UConveyorBeltSpawnLocComp* Top;                                             // 0x0958 (size: 0x8)
    class UStaticMeshComponent* SM_Counter;                                           // 0x0960 (size: 0x8)
    int32 ItemAmount;                                                                 // 0x0968 (size: 0x4)
    class AAICharacterBase* StartedMiniGameCharacter;                                 // 0x0970 (size: 0x8)
    float StartMinigameTIme;                                                          // 0x0978 (size: 0x4)
    float SpeedMaterial;                                                              // 0x097C (size: 0x4)
    float CurrentDistanceMaterial;                                                    // 0x0980 (size: 0x4)
    float Delay;                                                                      // 0x0984 (size: 0x4)
    class UMiniGames_Tutorial_C* TutorialWidgetRef;                                   // 0x0988 (size: 0x8)
    class USpongeNotification_C* SpongeTutorialREF;                                   // 0x0990 (size: 0x8)
    FText Allert Message Text;                                                        // 0x0998 (size: 0x18)
    class UAllertMessage_C* Warning;                                                  // 0x09B0 (size: 0x8)
    TSoftObjectPtr<class USoundCue> SoundtrackCueSoft;                                // 0x09B8 (size: 0x28)
    class UStaticMesh* TemporaryStaticMesh;                                           // 0x09E0 (size: 0x8)
    FLinearColor TemporaryColor;                                                      // 0x09E8 (size: 0x10)
    class UMaterialInstanceDynamic* DynamicMaterial;                                  // 0x09F8 (size: 0x8)
    FName ParameterName;                                                              // 0x0A00 (size: 0x8)
    class UStaticMesh* temporaryloadMesh;                                             // 0x0A08 (size: 0x8)
    class UWBP_GamepadCursorCashShop_C* Gamepad Cursor;                               // 0x0A10 (size: 0x8)

    TArray<AActor*> GetActorsToIgnoreInTrace();
    void OnGamepadModeToggle_BP(bool bNewGamepadMode);
    void OnGamepadTrace_BP(const FHitResult& HitTrace);
    void Custom_CreateDynamicMaterial(class UStaticMesh* Mesh);
    void GetEngineCursor(class UCursorWidget_C*& EngineCursor);
    FName GetInteractionName();
    void ChangeMeshMaterial(bool CanBePlaced, class UStaticMeshComponent* StaticMeshComp);
    bool DisplayInteractionInfo(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent, class UStaticMeshComponent*& StaticMeshComponent);
    bool CanBeInteractable(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    bool SimpleInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    void CheckTutorial(bool& bIsQuest);
    void OnLoaded_31D2B67045221AC5D6CA3F8C390B8866(class UObject* Loaded);
    void FinishTask();
    void ReceiveBeginPlay();
    void UI_SetShiftMessageVisible(bool bShow);
    void UI_UpdateStrike();
    void UI_UpdateAverageTime();
    void UI_UpdateProductCounters();
    void FirstuCustomer();
    void UI_EndOfMinigameNotification(float MoneyEarned, bool bIsStrike, int32 TotalProducts, int32 SuccessProducts, float AverageTimePerProduct, float TipMoney);
    void UI_ProductFail(FVector WorldLocation);
    void UI_ScanArrow(bool bShow);
    void UI_ScanSuccess(bool bSuccess);
    void LoadLevelWhenNeeded(bool bLoad);
    void UI_ShowTutorial(bool bShow);
    void DurabilityUpdate(const bool DirtyEffect, const float CurrentCashDurability, const float MaxCashDurability);
    void OnCashSpeedChanged(const float NewCashSpeed);
    void ReceiveTick(float DeltaSeconds);
    void OnHandleItem(const class AActor* HandleActor);
    void OnSpongeEnabled(const bool Enabled);
    void BP_DurabilityDroppedBelowCriticVal();
    void BP_MouseoverTheProduct();
    void BP_MouseRolledOffTheProduct();
    void BP_DurabilityRoseOverCriticVal();
    void OnCashShopRendering(const bool Enabled);
    void DisableInteractionInfo(class APawn* Pawn);
    void CanBeSpawned(const bool bCompatibile, const TArray<AActor*>& OverlapedElements, const FName& Reason);
    void EnableElectrocity(const bool On);
    void OnNewGameplayStuffUnlockStateChanged(FUnlockableGameplayStuffState NewUnlockableGameplayStuffState);
    void ShowInteractionAlertMessage();
    void SetCashMeshPreview(class UStaticMesh* MeshToSet, int32 MeshLevel, FLinearColor Color);
    void ApplyNewCashMesh(int32 MeshIndex);
    void BackToPreviousMesh();
    void SetPreviousMesh();
    void ChangeColor(FLinearColor Color);
    void LoadCashAndColor();
    void OnLoaded(const bool GameLoaded);
    void ExecuteUbergraph_CashShop_BP(int32 EntryPoint);
}; // Size: 0xA18

#endif
