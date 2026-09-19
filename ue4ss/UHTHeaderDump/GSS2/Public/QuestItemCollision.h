#pragma once
#include "CoreMinimal.h"
#include "QuestItemCollision.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct GSS2_API FQuestItemCollision {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCollisionEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> ChildActorClass;
    
    FQuestItemCollision();
};

