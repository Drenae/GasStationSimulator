#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Pawn -FallbackName=Pawn
#include "InteractionInfo.h"
#include "GuitarPlayerPawn.generated.h"

class ACharacter;
class AController;

UCLASS(Blueprintable)
class GSS2_API AGuitarPlayerPawn : public APawn, public IInteractionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAvailableForPosses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PosessionTransitionOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacter* OriginalCharacter;
    
    AGuitarPlayerPawn(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PrePosession(AController* PlayerController);
    

    // Fix for true pure virtual functions not being implemented
};

