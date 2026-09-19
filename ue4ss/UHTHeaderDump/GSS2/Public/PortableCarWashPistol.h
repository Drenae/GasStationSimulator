#pragma once
#include "CoreMinimal.h"
#include "CarWashPistol.h"
#include "CleaningSolutionActivatedDelegate.h"
#include "CleaningSolutionDeactivatedDelegate.h"
#include "PortableCarWashPistol.generated.h"

UCLASS(Blueprintable)
class GSS2_API APortableCarWashPistol : public ACarWashPistol {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCleaningSolutionActivated OnCleaningSolutionActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCleaningSolutionDeactivated OnCleaningSolutionDeactivated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCleaningSolutionActive;
    
public:
    APortableCarWashPistol(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void PlayerInteractionF(bool bPressed);
    
protected:
    UFUNCTION(BlueprintCallable)
    void EnableCleaningSolution();
    
    UFUNCTION(BlueprintCallable)
    void DisableCleaningSolution();
    
};

