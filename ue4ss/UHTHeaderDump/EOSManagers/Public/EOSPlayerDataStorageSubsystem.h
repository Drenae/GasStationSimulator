#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "OnConnectionToEOSChangedDelegate.h"
#include "OnPlayerCacheFilesCompletedDelegate.h"
#include "OnPlayerFileReadCompletedDelegate.h"
#include "OnPlayerFileWriteCompletedDelegate.h"
#include "EOSPlayerDataStorageSubsystem.generated.h"

UCLASS(Blueprintable)
class EOSMANAGERS_API UEOSPlayerDataStorageSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerFileReadCompleted OnPlayerFileReadCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnConnectionToEOSChanged OnConnectionToEOSChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerCacheFilesCompleted OnPlayerCacheFilesCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerFileWriteCompleted OnPlayerFileWriteCompleted;
    
    UEOSPlayerDataStorageSubsystem();

    UFUNCTION(BlueprintCallable)
    void WriteFile(int32 LocalPlayerNumber, const FString& Filename, TArray<uint8> FileContent);
    
    UFUNCTION(BlueprintCallable)
    bool UserHasFile(int32 LocalPlayerNumber, const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    void ReadFile(int32 LocalPlayerNumber, const FString& Filename);
    
};

