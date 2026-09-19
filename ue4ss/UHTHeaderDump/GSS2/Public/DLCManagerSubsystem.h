#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "DLCActivationStateChangedDelegate.h"
#include "EDLCName.h"
#include "DLCManagerSubsystem.generated.h"

UCLASS(Blueprintable)
class GSS2_API UDLCManagerSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDLCActivationStateChanged OnDLCActivationStateChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<EDLCName> DeactivatedDLCs;
    
public:
    UDLCManagerSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDLCEnabled(EDLCName DLCName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSet<EDLCName> GetDeactivatedDLCs() const;
    
    UFUNCTION(BlueprintCallable)
    void DeactivateDLCUsingString(const FString& DLCName);
    
    UFUNCTION(BlueprintCallable)
    void DeactivateDLC(EDLCName DLCName);
    
    UFUNCTION(BlueprintCallable)
    void ActivateDLCUsingString(const FString& DLCName);
    
    UFUNCTION(BlueprintCallable)
    void ActivateDLC(EDLCName DLCName);
    
};

