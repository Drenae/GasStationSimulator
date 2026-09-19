#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIController -FallbackName=AIController
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=GenericTeamId -FallbackName=GenericTeamId
#include "ENPAIActionState.h"
#include "NPAIControllerBase.generated.h"

class UBehaviorTree;
class UBlackboardData;

UCLASS(Blueprintable)
class NOPEAISYSTEM_API ANPAIControllerBase : public AAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenericTeamId TeamID;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* BehaviorTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlackboardData* BlackboardData;
    
public:
    ANPAIControllerBase(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void StartAILogicWithDelay();
    
    UFUNCTION(BlueprintCallable)
    void StartAILogic();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetAIActionState(ENPAIActionState NewAIActionState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializeTaskList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ENPAIActionState GetAIActionState();
    
};

