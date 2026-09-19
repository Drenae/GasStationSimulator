#pragma once
#include "CoreMinimal.h"
#include "GameAction.h"
#include "PlayCooKooGameAction.generated.h"

class ADecorationBase;

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UPlayCooKooGameAction : public UGameAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ADecorationBase> CooKooClock;
    
    UPlayCooKooGameAction();

};

