#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "EndedRvGuestServiceDelegate.generated.h"

class AAICharacterBase;
class ARVCampEmployee;
class ARvGuestServiceSpot;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FEndedRvGuestService, const FGameplayTag&, ServiceTag, ARvGuestServiceSpot*, GuestServiceSpot, AAICharacterBase*, Customer, ARVCampEmployee*, Employee);

