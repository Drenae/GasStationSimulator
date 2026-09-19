#pragma once
#include "CoreMinimal.h"
#include "EEmployeeSkill.h"
#include "GSSTask.h"
#include "Templates/SubclassOf.h"
#include "TimeStruct.h"
#include "EmployeeTask.generated.h"

class AActor;
class AInteractableActor;

UCLASS(Blueprintable)
class GSS2_API UEmployeeTask : public UGSSTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RegenerateEnergyPerMinute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoneyPerMinute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEmployeeSkill RequirementEmployeeSkill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanEarnMoney;
    
    UEmployeeTask();

private:
    UFUNCTION(BlueprintCallable)
    void WorkTime(FTimeStruct Time);
    
public:
    UFUNCTION(BlueprintCallable)
    AActor* FindAndAddAsEmployee(TSubclassOf<AInteractableActor> InteractableActorClass, TArray<AActor*> Actors);
    
};

