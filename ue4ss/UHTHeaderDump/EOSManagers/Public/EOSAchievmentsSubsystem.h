#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "OnAchievementUnlockedEventDelegate.h"
#include "OnAchievementWrittenEventDelegate.h"
#include "EOSAchievmentsSubsystem.generated.h"

UCLASS(Blueprintable)
class EOSMANAGERS_API UEOSAchievmentsSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAchievementUnlockedEvent OnAchievementUnlockedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAchievementWrittenEvent OnAchievementWrittenEvent;
    
    UEOSAchievmentsSubsystem();

    UFUNCTION(BlueprintCallable)
    void UnlockAchievmentsForLocalPlayer(const TArray<FName>& AchievementIDs, int32 LocalPlayerNum);
    
};

