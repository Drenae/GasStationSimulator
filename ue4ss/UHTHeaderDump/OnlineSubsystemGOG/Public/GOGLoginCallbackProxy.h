#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnlineBlueprintCallProxyBase -FallbackName=OnlineBlueprintCallProxyBase
#include "OnlineLogoutResultDelegate2.h"
#include "GOGLoginCallbackProxy.generated.h"

class APlayerController;
class UGOGLoginCallbackProxy;
class UObject;

UCLASS(Blueprintable, MinimalAPI)
class UGOGLoginCallbackProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnlineLogoutResult OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnlineLogoutResult OnFailure;
    
    UGOGLoginCallbackProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UGOGLoginCallbackProxy* Login(UObject* WorldContextObject, APlayerController* PlayerController, const FString& AuthType, const FString& UserId, const FString& UserToken);
    
};

