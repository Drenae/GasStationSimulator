#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemUtils -ObjectName=IpNetDriver -FallbackName=IpNetDriver
#include "NetDriverEOS.generated.h"

UCLASS(Blueprintable, NonTransient, Config=Engine)
class ONLINESUBSYSTEMEOS_API UNetDriverEOS : public UIpNetDriver {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPassthrough;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUsingP2PSockets;
    
    UNetDriverEOS();

};

