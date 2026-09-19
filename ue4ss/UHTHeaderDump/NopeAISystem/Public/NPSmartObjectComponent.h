#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "SmartPoint.h"
#include "NPSmartObjectComponent.generated.h"

class ACharacter;
class ANPAICharacterBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NOPEAISYSTEM_API UNPSmartObjectComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcceptableRadious;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSmartPoint> SmartPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRotateToActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReservePoint;
    
    UNPSmartObjectComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    FSmartPoint StopReserveActor(ANPAICharacterBase* AICharacterBase);
    
    UFUNCTION(BlueprintCallable)
    FSmartPoint StartReserveActor(ANPAICharacterBase* AICharacterBase);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSmartPoint FindCharacter(ANPAICharacterBase* AICharacterBase);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanReserve(ACharacter* User);
    
};

