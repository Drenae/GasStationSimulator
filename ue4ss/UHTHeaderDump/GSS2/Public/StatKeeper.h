#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EGSS_Stat.h"
#include "GSSStatHolder.h"
#include "GSSStatUpdatedDelegate.h"
#include "StatKeeper.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GSS2_API UStatKeeper : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGSSStatUpdated OnGSSStatUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGSSStatHolder> Stats;
    
public:
    UStatKeeper(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SaveStats();
    
    UFUNCTION(BlueprintCallable)
    void LoadStats();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetValue(EGSS_Stat Stat);
    
protected:
    UFUNCTION(BlueprintCallable)
    int32 GetStatIndex(EGSS_Stat StatToFind);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddValue(EGSS_Stat Stat, float AddedValue);
    
};

