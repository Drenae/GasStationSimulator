#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TriggerSphere -FallbackName=TriggerSphere
#include "CinemaMuteMusicVolume.generated.h"

class AActor;
class ADLCDriveInCinemaManager;

UCLASS(Blueprintable)
class GSS2_API ACinemaMuteMusicVolume : public ATriggerSphere {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADLCDriveInCinemaManager* CinemaManager;
    
public:
    ACinemaMuteMusicVolume(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnOverlapEnd(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor);
    
};

