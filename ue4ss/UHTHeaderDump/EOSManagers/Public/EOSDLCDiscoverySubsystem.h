#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "OnQueryDLCOwnershipFinishedDelegate.h"
#include "EOSDLCDiscoverySubsystem.generated.h"

UCLASS(Blueprintable)
class EOSMANAGERS_API UEOSDLCDiscoverySubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnQueryDLCOwnershipFinished OnQueryDLCOwnershipFinished;
    
    UEOSDLCDiscoverySubsystem();

    UFUNCTION(BlueprintCallable)
    void QueryDLCOwnership(int32 LocalPlayerId, TArray<FName> DLC_Names);
    
};

