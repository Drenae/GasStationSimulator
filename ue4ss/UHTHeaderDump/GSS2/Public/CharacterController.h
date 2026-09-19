#pragma once
#include "CoreMinimal.h"
#include "AIBaseController.h"
#include "EAIState.h"
#include "CharacterController.generated.h"

UCLASS(Blueprintable)
class GSS2_API ACharacterController : public AAIBaseController {
    GENERATED_BODY()
public:
    ACharacterController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopInitiativeTask(const EAIState TaskState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartAI();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitiativeTask();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAIState GetAIState();
    
};

