#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DecalActor -FallbackName=DecalActor
#include "SoftenedStateChangedDelegate.h"
#include "WashedStateChangedDelegate.h"
#include "CamperStainActor.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class GSS2_API ACamperStainActor : public ADecalActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* HitArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSoftened;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWashed;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftenedStateChanged OnSoftenedStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWashedStateChanged OnWashedStateChanged;
    
    ACamperStainActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWashed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EnableShowDirt(bool bEnable);
    
};

