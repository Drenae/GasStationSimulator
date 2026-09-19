#pragma once
#include "CoreMinimal.h"
#include "GSSEvent.h"
#include "RushHourEvent.generated.h"

UCLASS(Blueprintable)
class GSS2_API URushHourEvent : public UGSSEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectedHour;
    
    URushHourEvent();

    UFUNCTION(BlueprintCallable)
    void PickRandomHour();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelectedHour();
    
    UFUNCTION(BlueprintCallable)
    void CheckAnyMovieIsSetinSelectedHour();
    
};

