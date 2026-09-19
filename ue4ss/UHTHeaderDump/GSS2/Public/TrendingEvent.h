#pragma once
#include "CoreMinimal.h"
#include "GSSEvent.h"
#include "TrendingEvent.generated.h"

UCLASS(Blueprintable)
class GSS2_API UTrendingEvent : public UGSSEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> SelectedMovies;
    
    UTrendingEvent();

    UFUNCTION(BlueprintCallable)
    void PickMoviesToEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetSelectedMovies();
    
    UFUNCTION(BlueprintCallable)
    void CheckIsBonusMoviePlaying();
    
};

