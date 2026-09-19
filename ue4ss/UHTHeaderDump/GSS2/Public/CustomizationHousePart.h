#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EColorType.h"
#include "EStructureType.h"
#include "EWallSide.h"
#include "Interaction.h"
#include "PaintingColor.h"
#include "Templates/SubclassOf.h"
#include "WallMaterialStruct.h"
#include "CustomizationHousePart.generated.h"

class AGSSWheeledVehicle;
class AInteractableDecal;
class APathPoint;
class APawn;
class ARelaxSpot;
class ASnapPoint;
class UBoxComponent;
class UMaterialInstance;
class UPrimitiveComponent;
class USceneComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class GSS2_API ACustomizationHousePart : public AActor, public IInteraction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MainMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWallMaterialStruct> DynamicMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath Material0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath Material1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath MaterialWallpaper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> LevelExist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CameraActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AInteractableDecal*> InteractableDecals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASnapPoint* WallSnapPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASnapPoint* OutsideDecorationSnapPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* SnapPointLocationSphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* OutsideDecorationSnapPointLocationSphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASnapPoint> SnapPointClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SnapPointLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStructureType StructureType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStructureType AvaliableStructureTypeChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPartPaintable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsGasStationPart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSnapPointInsideBlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSnapPointOutsideBlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWallTypeEdited;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OriginalPathName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ARelaxSpot> KulkaClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARelaxSpot* Kulka1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARelaxSpot* Kulka2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* NoShelfZone;
    
    ACustomizationHousePart(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool UseItem(APawn* Pawn, bool Throw, float AimingTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SimpleInteraction(APawn* Pawn, UPrimitiveComponent* UPrimitiveComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetWallEndColor(EWallSide CheckWallSide, const FLinearColor NewColour, const EColorType ColorType);
    
    UFUNCTION(BlueprintCallable)
    void SetWallColour(EWallSide CheckWallSide, float NewCurrentDurability, float NewMaxDurability, const FLinearColor NewColour, const EColorType ColorType);
    
    UFUNCTION(BlueprintCallable)
    void SetOriginalPathName(const FString& _OriginalPathName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemoveDestroyedDecals(AActor* DestroyedActor);
    
    UFUNCTION(BlueprintCallable)
    void RefreshPaintDurability();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayCustomizationHousePartChangeVFX(EWallSide WallSide);
    
    UFUNCTION(BlueprintCallable)
    void PaintingWall(EWallSide CheckWallSide, float NewCurrentDurability, float NewMaxDurability, const FLinearColor NewColour, const EColorType ColorType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PaintingEvent(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTimeUpdated_Hours(const int32 Hours);
    
    UFUNCTION(BlueprintCallable)
    void LoadWallColor(EWallSide CheckWallSide, float NewCurrentDurability, float NewMaxDurability, const FLinearColor NewColour, const EColorType ColorType, UMaterialInstance* WallpaperInstance);
    
    UFUNCTION(BlueprintCallable)
    FLinearColor GetWallColor(EWallSide CheckWallSide);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    APathPoint* GetPathPoint(AGSSWheeledVehicle* GSSWheeledVehicle);
    
    UFUNCTION(BlueprintCallable)
    float GetMaxDurability(EWallSide CheckWallSide);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FTransform GetInteractiveTransform(AActor* Actor, bool& RotateToTransform);
    
    UFUNCTION(BlueprintCallable)
    float GetDurabilityByColor(EWallSide CheckWallSide, const FLinearColor NewColour);
    
    UFUNCTION(BlueprintCallable)
    float GetCurrentDurability(EWallSide CheckWallSide);
    
    UFUNCTION(BlueprintCallable)
    FWallMaterialStruct GetCompatibileMaterialParams(EWallSide CheckWallSide);
    
    UFUNCTION(BlueprintCallable)
    EColorType GetColorType(EWallSide CheckWallSide);
    
    UFUNCTION(BlueprintCallable)
    EWallSide GetClosestWallSide();
    
    UFUNCTION(BlueprintCallable)
    TArray<USceneComponent*> GetAllSpawnPointsLocation(EWallSide CheckWallSide);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool DisplayInteractionInfo(APawn* Pawn, UPrimitiveComponent* UPrimitiveComponent, UStaticMeshComponent*& StaticMeshComponent);
    
    UFUNCTION(BlueprintCallable)
    void DisableSnapPointSpawn(UStaticMeshComponent* SnapPoint, bool bDisable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DisableInteractionInfo(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    bool ChangePaintType(FPaintingColor NewColor, EWallSide Side);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddDecal(AInteractableDecal* DennisDecal);
    
    UFUNCTION(BlueprintCallable)
    void AddCurrentDurability(float Amount);
    

    // Fix for true pure virtual functions not being implemented
};

