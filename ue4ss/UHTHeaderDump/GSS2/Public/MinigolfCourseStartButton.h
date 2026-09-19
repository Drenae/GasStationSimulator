#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "Interaction.h"
#include "MinigolfCourseStartButton.generated.h"

class AMinigolfBallStartPoint;
class AMinigolfHole;
class APawn;
class UPrimitiveComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class GSS2_API AMinigolfCourseStartButton : public AActor, public IInteraction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* ButtonBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* ButtonItself;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMinigolfBallStartPoint* StartingPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMinigolfHole* EndingHole;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Par;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CostToStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RewardForPar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RewardForUnderPar;
    
    AMinigolfCourseStartButton(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SimpleInteraction(APawn* Pawn, UPrimitiveComponent* UPrimitiveComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool DisplayInteractionInfo(APawn* Pawn, UPrimitiveComponent* UPrimitiveComponent, UStaticMeshComponent*& StaticMeshComponent);
    

    // Fix for true pure virtual functions not being implemented
};

