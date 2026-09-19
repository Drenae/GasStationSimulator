#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NetConnection -FallbackName=NetConnection
#include "NetConnectionGOG.generated.h"

UCLASS(Blueprintable, NonTransient)
class UNetConnectionGOG : public UNetConnection {
    GENERATED_BODY()
public:
    UNetConnectionGOG();

};

