#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "FoundSessionParams.h"
#include "OnSessionCreatedDelegate.h"
#include "OnSessionDestroyedDelegate.h"
#include "OnSessionInterruptedDelegate.h"
#include "OnSessionSearchedDelegate.h"
#include "EOSSessionSubsystem.generated.h"

UCLASS(Blueprintable)
class EOSMANAGERS_API UEOSSessionSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSessionCreated OnSessionCreatedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSessionSearched OnSessionSearchCompletedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSessionInterrupted OnSessionInterrupted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSessionDestroyed OnSessionDestroyedEvent;
    
    UEOSSessionSubsystem();

    UFUNCTION(BlueprintCallable)
    void JoinSession(const FFoundSessionParams& Session);
    
    UFUNCTION(BlueprintCallable)
    void FindSessions(const FString& Keywords);
    
    UFUNCTION(BlueprintCallable)
    void DestroySession();
    
    UFUNCTION(BlueprintCallable)
    void CreateSesssion(const FString& SearchKeywords, int32 MaxPlayers);
    
};

