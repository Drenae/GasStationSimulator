#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "OnLoginCompletedDelegate.h"
#include "EOSAuthSubsystem.generated.h"

UCLASS(Blueprintable)
class EOSMANAGERS_API UEOSAuthSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoginCompleted OnLoginCompletedEvent;
    
    UEOSAuthSubsystem();

    UFUNCTION(BlueprintCallable)
    void TestLogin(int32 LocalPlayerNum);
    
    UFUNCTION(BlueprintCallable)
    void Logout();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoggedIn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetLoggedPlayerUserName() const;
    
};

