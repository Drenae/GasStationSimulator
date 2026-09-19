#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
//CROSS-MODULE INCLUDE V2: -ModuleName=JsonUtilities -ObjectName=JsonObjectWrapper -FallbackName=JsonObjectWrapper
#include "MachineSpec.h"
#include "OnAnalyticsEventSendCompletedDelegate.h"
#include "GoogleAnalyticsManagerSubsystem.generated.h"

class ULocalPlayer;

UCLASS(Blueprintable, Config=Game)
class GOOGLEANALYTICSMANAGER_API UGoogleAnalyticsManagerSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMachineSpec CurrentMachineSpec;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid SessionId;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnAnalyticsEventSendCompleted OnAnalyticsEventSendCompleted;
    
    UGoogleAnalyticsManagerSubsystem();

private:
    UFUNCTION(BlueprintCallable)
    void SendEventData(FJsonObjectWrapper JsonSerializedEventData, FJsonObjectWrapper JsonSerializedUserData, bool bAddEngagementTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void ReportCustomEvent(const FString& EventName, TMap<FString, FString> UserParams, TMap<FString, FString> params, bool bAddEngagementTime);
    
    UFUNCTION(BlueprintCallable)
    void QueueCustomEvent(const FString& EventName, TMap<FString, FString> params);
    
    UFUNCTION(BlueprintCallable)
    TMap<FString, FString> MachineSpecsAsMap();
    
    UFUNCTION(BlueprintCallable)
    FMachineSpec GatherMachineSpecData(ULocalPlayer* LP);
    
    UFUNCTION(BlueprintCallable)
    void AddUserCustomDimension(const FString& Name, const FString& Value);
    
};

