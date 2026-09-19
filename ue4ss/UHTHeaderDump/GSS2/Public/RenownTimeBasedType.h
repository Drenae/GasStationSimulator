#pragma once
#include "CoreMinimal.h"
#include "RenownType.h"
#include "TimeStruct.h"
#include "RenownTimeBasedType.generated.h"

UCLASS(Blueprintable)
class GSS2_API URenownTimeBasedType : public URenownType {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChangeAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimeStruct TimeToTriggerInterval;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimeStruct TimeAtWhichRenownChangeTriggers;
    
public:
    URenownTimeBasedType();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RenownChangedByTime();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnGameTimeUpdated(FTimeStruct Time);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool AdditionalTimeAmountChangeConditions();
    
};

