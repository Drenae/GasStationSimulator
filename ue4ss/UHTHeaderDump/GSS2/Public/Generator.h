#pragma once
#include "CoreMinimal.h"
#include "ElectricityEventDelegate.h"
#include "InteractableActor.h"
#include "Generator.generated.h"

UCLASS(Blueprintable)
class GSS2_API AGenerator : public AInteractableActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasElectrocity;
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FElectricityEvent OnElectricityEvent;
    
public:
    AGenerator(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GeneratorEvent(bool bOn);
    
};

