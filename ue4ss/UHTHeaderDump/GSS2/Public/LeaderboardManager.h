#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EMinigame.h"
#include "SubsystemQueryLeaderboardsCompleteDelegate.h"
#include "LeaderboardManager.generated.h"

UCLASS(Blueprintable)
class GSS2_API ALeaderboardManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IndxLiderboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EMinigame> LeaderboardList;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMinigame, FString> LeaderboardMapKey;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubsystemQueryLeaderboardsComplete LeaderboardDownloaded_OnCallback;
    
    ALeaderboardManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    EMinigame GetMinigameFromLeaderboardName(const FString& LeaderboardName);
    
    UFUNCTION(BlueprintCallable)
    FString GetLeaderboardKey(EMinigame minigame);
    
};

