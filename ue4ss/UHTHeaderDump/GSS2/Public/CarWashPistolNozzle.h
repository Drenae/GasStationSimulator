#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ENozzleRotation.h"
#include "CarWashPistolNozzle.generated.h"

class UNozzleData;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class GSS2_API ACarWashPistolNozzle : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* NozzleMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENozzleRotation NozzleRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNozzleData* ActiveNozzleData;
    
public:
    ACarWashPistolNozzle(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStaticMeshComponent* GetNozzleMeshComponent();
    
    UFUNCTION(BlueprintCallable)
    UNozzleData* GetActiveNozzleData();
    
    UFUNCTION(BlueprintCallable)
    void ChangeRotation();
    
    UFUNCTION(BlueprintCallable)
    void ChangeNozzle(UNozzleData* NewNozzleData);
    
};

