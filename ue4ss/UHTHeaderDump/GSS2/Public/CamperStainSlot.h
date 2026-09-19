#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent
#include "Templates/SubclassOf.h"
#include "CamperStainSlot.generated.h"

class ACamperStainActor;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GSS2_API UCamperStainSlot : public UArrowComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ACamperStainActor> CamperStainActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACamperStainActor> CamperStainActorClass;
    
    UCamperStainSlot(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void DestroyStainActor();
    
};

