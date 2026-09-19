#pragma once
#include "CoreMinimal.h"
#include "RenownLevelEvent.h"
#include "RenownType.h"
#include "RenownLevelingType.generated.h"

class UEventDisplay;

UCLASS(Blueprintable)
class GSS2_API URenownLevelingType : public URenownType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRenownLevelEvent> DisplayEventsPerLevel;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RenownLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RenownLevelCap;
    
public:
    URenownLevelingType();

    UFUNCTION(BlueprintCallable)
    void LoadEventDisplay(TSoftClassPtr<UEventDisplay> EventToLoad);
    
};

