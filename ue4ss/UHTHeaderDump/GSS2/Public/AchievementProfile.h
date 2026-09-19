#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SaveGame -FallbackName=SaveGame
#include "AchievementValue.h"
#include "AchievementProfile.generated.h"

UCLASS(Blueprintable)
class GSS2_API UAchievementProfile : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAchievementValue> AchievementsSaved;
    
    UAchievementProfile();

};

