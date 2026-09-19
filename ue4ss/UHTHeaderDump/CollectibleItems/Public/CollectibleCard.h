#pragma once
#include "CoreMinimal.h"
#include "Collectible.h"
#include "CollectibleCardStruct.h"
#include "CollectibleCard.generated.h"

UCLASS(Blueprintable)
class COLLECTIBLEITEMS_API ACollectibleCard : public ACollectible {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollectibleCardStruct CollectibleCardStruct;
    
    ACollectibleCard(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void CollectCard();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CardFound();
    
};

