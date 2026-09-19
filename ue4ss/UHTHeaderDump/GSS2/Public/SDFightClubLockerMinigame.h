#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ESDFightClubGloves.h"
#include "ESDFightClubZone.h"
#include "SDFightClubLockerGlovesDelegateDelegate.h"
#include "SDFighterAttributes.h"
#include "SDShadyDealsMinigameBase.h"
#include "SDFightClubLockerMinigame.generated.h"

class UBillboardComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class GSS2_API ASDFightClubLockerMinigame : public ASDShadyDealsMinigameBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDFightClubLockerGlovesDelegate GlovesTypeChangedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESDFightClubZone FightClubZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESDFightClubGloves, FSDFighterAttributes> GlovesAttributeBonuses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* DefaultGlovesMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* ReducedPaddingGlovesMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* GravelPaddingGlovesMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* BuckshotFilledGlovesMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* HorseshoeGlovesMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* SelectedGlovesPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* GlovesPosition_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* GlovesPosition_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* GlovesPosition_3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* GlovesPosition_4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector GlovesPositionOffset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> GlovesMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<UBillboardComponent*, UStaticMeshComponent*> GlovesPositions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESDFightClubGloves SelectedGlovesType;
    
public:
    ASDFightClubLockerMinigame(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetGlovesTypeByStaticMeshComp(UStaticMeshComponent* InStaticMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetGlovesType(ESDFightClubGloves InGlovesType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESDFightClubGloves GetSelectedGlovesType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSDFighterAttributes GetSelectedGlovesBonus() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    ESDFightClubGloves GetGlvoesType(UStaticMeshComponent* InGlovesStaticMesh) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStaticMeshComponent* GetGlvoesStaticMesh(ESDFightClubGloves InGlovesType) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESDFightClubZone GetFightClubZone() const;
    
};

