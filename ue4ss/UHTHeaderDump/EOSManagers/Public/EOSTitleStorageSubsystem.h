#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "EUsedPlatform.h"
#include "OnCacheFilesCompletedDelegate.h"
#include "OnConnectionToEOSChangedDelegate.h"
#include "OnFileReadCompletedDelegate.h"
#include "EOSTitleStorageSubsystem.generated.h"

UCLASS(Blueprintable)
class EOSMANAGERS_API UEOSTitleStorageSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FString> ReadFileRequestQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentReadNum;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFileReadCompleted OnFileReadCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnConnectionToEOSChanged OnConnectionToEOSChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCacheFilesCompleted OnCacheFilesCompleted;
    
    UEOSTitleStorageSubsystem();

    UFUNCTION(BlueprintCallable)
    void ReadFile(const FString& Filename);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEOSConnectionAvailable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EUsedPlatform GetUsedPlatform() const;
    
    UFUNCTION(BlueprintCallable)
    void CacheFileByTags(const FString& TagName);
    
};

