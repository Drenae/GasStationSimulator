#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
#include "ESDGangActivityType.h"
#include "SDStandaloneSheriffTrigger.generated.h"

class USDSheriffActionBase;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GSS2_API USDStandaloneSheriffTrigger : public UBoxComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCustomCatchActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USDSheriffActionBase*> CatchActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGangActivityRelated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESDGangActivityType RelatedGangActivity;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanCatch;
    
public:
    USDStandaloneSheriffTrigger(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetCanBeCaught(bool bInCanBeCaught);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESDGangActivityType GetRelatedGangActivityType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<USDSheriffActionBase*> GetCatchActions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanBeCatchedBySheriff() const;
    
};

