#pragma once
#include "CoreMinimal.h"
#include "GameAction.h"
#include "SetActorsCollisionGameAction.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API USetActorsCollisionGameAction : public UGameAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCollisionEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> ChildActorClass;
    
    USetActorsCollisionGameAction();

};

