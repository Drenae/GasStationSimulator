#pragma once
#include "CoreMinimal.h"
#include "ECarWreckMarking.h"
#include "OnJunkyardWreckMarkedDelegate.generated.h"

class AJunkyardCarWreck;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnJunkyardWreckMarked, AJunkyardCarWreck*, MarkedWreck, ECarWreckMarking, NewMarking);

