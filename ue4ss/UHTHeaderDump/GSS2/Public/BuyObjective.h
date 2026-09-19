#pragma once
#include "CoreMinimal.h"
#include "CountableObjectiveBase.h"
#include "Templates/SubclassOf.h"
#include "BuyObjective.generated.h"

class AActor;

UCLASS(Blueprintable)
class GSS2_API UBuyObjective : public UCountableObjectiveBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ActorClass;
    
    UBuyObjective();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerBought(TSubclassOf<AActor> BoughtActorClass, const int32 Amount);
    
};

