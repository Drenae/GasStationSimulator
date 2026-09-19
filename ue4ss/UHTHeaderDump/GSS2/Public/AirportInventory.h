#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "AirportSlotStruct.h"
#include "Templates/SubclassOf.h"
#include "AirportInventory.generated.h"

class AItem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GSS2_API UAirportInventory : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAirportSlotStruct> Slots;
    
    UAirportInventory(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    int32 AddAirplaneItem(TSubclassOf<AItem> ItemClass, int32 Quantity, bool IgnoreLimit);
    
};

