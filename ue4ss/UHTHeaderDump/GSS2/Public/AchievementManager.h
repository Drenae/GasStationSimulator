#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "AchievementRow.h"
#include "AchievementValue.h"
#include "EGSS_Stat.h"
#include "AchievementManager.generated.h"

class UUserWidget;

UCLASS(Blueprintable)
class GSS2_API AAchievementManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AchievementScreenTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAchievementValue> Achievements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAchievementValue> OfflineAchievements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAchievementValue> AchievementsToShow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* ActiveAchivementWidget;
    
public:
    AAchievementManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WriteAchievementToOnlineSubsystem(FName AchievementStub);
    
    UFUNCTION(BlueprintCallable)
    void SaveAchievementDataToFile();
    
    UFUNCTION(BlueprintCallable)
    void RetroactiveAchievementCheck();
    
    UFUNCTION(BlueprintCallable)
    void NativeHandleAchievement(FName AchievementToTrigger);
    
    UFUNCTION(BlueprintCallable)
    void LoadAchievementDataFromFile();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAchievementCompleted(FName AchievementName);
    
    UFUNCTION(BlueprintCallable)
    void HandleStatAchievement(EGSS_Stat Stat, float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleAchievement(FName AchievementToTrigger);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FAchievementRow GetAchievementData(FName AchievementName);
    
    UFUNCTION(BlueprintCallable)
    TArray<FAchievementRow> FilterAchievementsByStat(EGSS_Stat Stat);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AchievementWidgetDone();
    
};

