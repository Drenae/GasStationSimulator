#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemUtils -ObjectName=IpConnection -FallbackName=IpConnection
#include "NetConnectionEOS.generated.h"

UCLASS(Blueprintable, NonTransient)
class UNetConnectionEOS : public UIpConnection {
    GENERATED_BODY()
public:
    UNetConnectionEOS();

};

