#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
#include "ConveyorBeltComponent.generated.h"

class UArrowComponent;
class UConveyorBeltSpawnLocComp;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GSS2_API UConveyorBeltComponent : public UBoxComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* PushDirection;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PushForceMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PushForce;
    
    UConveyorBeltComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetConveyorActivity(bool bNewActive);
    
    UFUNCTION(BlueprintCallable)
    bool IsConveyorActive();
    
    UFUNCTION(BlueprintCallable)
    TArray<UConveyorBeltSpawnLocComp*> GetSpawnLocationsFromOwner();
    
};

