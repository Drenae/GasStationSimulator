#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "PlayerAnimInstance.generated.h"

class AActor;

UCLASS(Blueprintable, NonTransient)
class GSS2_API UPlayerAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStinkbomb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StartingLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DesiredLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator StartingRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator DesiredRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StoredForwardVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StoredRightVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StoredUpVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SpawnedActor;
    
public:
    UPlayerAnimInstance();

private:
    UFUNCTION(BlueprintCallable)
    void SetStoredUpVector(FVector NewVector);
    
    UFUNCTION(BlueprintCallable)
    void SetStoredRightVector(FVector NewVector);
    
    UFUNCTION(BlueprintCallable)
    void SetStoredForwardVector(FVector NewVector);
    
    UFUNCTION(BlueprintCallable)
    void SetStinkbomb(bool bNewState);
    
    UFUNCTION(BlueprintCallable)
    void SetStartingRotation(FRotator NewRotation);
    
    UFUNCTION(BlueprintCallable)
    void SetStartingLocation(FVector NewLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnedActor(AActor* NewActor);
    
    UFUNCTION(BlueprintCallable)
    void SetDesiredRotation(FRotator NewRotation);
    
    UFUNCTION(BlueprintCallable)
    void SetDesiredLocation(FVector NewLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetStoredUpVector();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetStoredRightVector();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetStoredForwardVector();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetStinkbomb();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetStartingRotation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetStartingLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetSpawnedActor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetDesiredRotation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetDesiredLocation();
    
};

