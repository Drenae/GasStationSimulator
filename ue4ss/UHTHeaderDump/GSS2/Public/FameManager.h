#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "OnExperienceGainedDelegate.h"
#include "OnNewLevelUnlockedDelegate.h"
#include "UnlockableByFameData.h"
#include "FameManager.generated.h"

class UDA_JunkyardFame;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GSS2_API UFameManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNewLevelUnlocked OnNewLevelUnlocked;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnExperienceGained OnExperienceGained;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDA_JunkyardFame* FameSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentFameLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FameExperience;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUnlockableByFameData> UnlockedRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReceivedLevelsFromLastOpeningFameWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReceivedExperienceFromLastOpeningFameWidget;
    
    UFameManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ResetReceivedLevelsFromLastOpeningFameWidget();
    
    UFUNCTION(BlueprintCallable)
    void ResetReceivedExperienceFromLastOpeningFameWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRequiredExperienceForNextLevel();
    
    UFUNCTION(BlueprintCallable)
    void AddExperience(const int32 ExperienceToAdd);
    
};

