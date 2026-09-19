#pragma once
#include "CoreMinimal.h"
#include "AchievementManager.h"
#include "GSSAchievementManager.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class GSS2_API AGSSAchievementManager : public AAchievementManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DTAchievements;
    
    AGSSAchievementManager(const FObjectInitializer& ObjectInitializer);

};

