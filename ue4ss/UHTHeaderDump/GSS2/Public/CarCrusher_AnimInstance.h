#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "CloseAnimationCompletedDelegate.h"
#include "CrushingCompletedDelegate.h"
#include "OpenAnimationCompletedDelegate.h"
#include "CarCrusher_AnimInstance.generated.h"

class AActor;

UCLASS(Blueprintable, NonTransient)
class GSS2_API UCarCrusher_AnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOpenAnimationCompleted OnOpenAnimationCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCloseAnimationCompleted OnCloseAnimationCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCrushingCompleted OnCrushingCompleted;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOpenCloseAnimationPlaying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCrushingCar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLidOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SpawnedCrushedCar;
    
public:
    UCarCrusher_AnimInstance();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartCrushing();
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnedCrushedCar(AActor* SpawnedActor);
    
    UFUNCTION(BlueprintCallable)
    void SetLidOpen(bool Open);
    
    UFUNCTION(BlueprintCallable)
    void SetCrushing(bool Crushing);
    
    UFUNCTION(BlueprintCallable)
    bool IsOpenCloseAnimationPlaying();
    
    UFUNCTION(BlueprintCallable)
    bool IsOpen();
    
    UFUNCTION(BlueprintCallable)
    bool IsCrushingCar();
    
};

