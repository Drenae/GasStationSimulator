#pragma once
#include "CoreMinimal.h"
#include "PlayerVehicle.h"
#include "Digger.generated.h"

class ACharacter;
class ARuins;
class UDiggerWidget;

UCLASS(Blueprintable)
class GSS2_API ADigger : public APlayerVehicle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetHoldDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentHoldDistance;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARuins* OverlappedSandDune;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanDiggerBeEmpty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UDiggerWidget> DiggerWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDiggerWidget* DiggerWidgetInstance;
    
public:
    ADigger(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowSand(bool bShowSand);
    
    UFUNCTION(BlueprintCallable)
    void SetOverlappedSandDune(ARuins* InDune);
    
    UFUNCTION(BlueprintCallable)
    void SetIsFull(bool bNewValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDiggerSandPositionAndHeatColor(bool bIsDiggerFull);
    
    UFUNCTION(BlueprintCallable)
    void SetCanDiggerBeEmpty(bool InCanBeEmpty);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SandScaling();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARuins* GetOverlappedSandDune();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsFull() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCanDiggerBeEmpty();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    ACharacter* GetBPOriginalCharacter();
    
};

