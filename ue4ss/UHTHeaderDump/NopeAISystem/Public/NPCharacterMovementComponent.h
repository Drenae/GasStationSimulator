#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CharacterMovementComponent -FallbackName=CharacterMovementComponent
#include "CharacterRotateDelegate.h"
#include "ENPAIMovementSpeed.h"
#include "TargetPointStruct.h"
#include "NPCharacterMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NOPEAISYSTEM_API UNPCharacterMovementComponent : public UCharacterMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterRotate OnCharacterRotated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTargetPointStruct TargetPoint;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float GetSpeedValue[6];
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BackWalkReactDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotateToPointReactDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForwardDirectionWeight;
    
    UNPCharacterMovementComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTargetPoint(FTargetPointStruct InTargetPointStruct);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterMovementSpeed(ENPAIMovementSpeed NewAIMovementSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTargetPointReached();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTargetPointStruct GetTargetPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ENPAIMovementSpeed GetCharacterMovementSpeed();
    
};

