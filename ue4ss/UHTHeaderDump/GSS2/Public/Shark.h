#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "Templates/SubclassOf.h"
#include "WaterVehicle.h"
#include "Shark.generated.h"

class AObjectiveMarker;
class AShark;
class UArrowComponent;
class USharkHealthBar;
class USharkNotification;
class USoundCue;

UCLASS(Blueprintable)
class GSS2_API AShark : public AWaterVehicle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreysNumberToEat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EatenCustomersNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinPreysNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPreysNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentSecondsToFindNextPrey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SecondsToFindNextPrey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundCue> ScreamsSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreCustomers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcceptableDistance;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* SharkMarkerArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AObjectiveMarker> SharkMarkerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AObjectiveMarker* SharkMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USharkHealthBar> HealthBarClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USharkHealthBar* HealthBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USharkNotification> NotificationClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USharkNotification* Notification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAttacking;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle UniqueHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CheckMarkerTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bChecking;
    
public:
    AShark(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateSharkMarker();
    
    UFUNCTION(BlueprintCallable)
    void StartLookingForAPrey();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartAttack();
    
    UFUNCTION(BlueprintCallable)
    void RandomAttackValues();
    
    UFUNCTION(BlueprintCallable)
    void OnSharkOutAnimFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnCustomerEaten(AShark* Shark, AWaterVehicle* EatenCustomer);
    
    UFUNCTION(BlueprintCallable)
    void ManageWigdetsPostEvent();
    
    UFUNCTION(BlueprintCallable)
    bool IsSharkSeenByPlayer();
    
    UFUNCTION(BlueprintCallable)
    void CreateSharkMarker();
    
    UFUNCTION(BlueprintCallable)
    void CreateNotification();
    
    UFUNCTION(BlueprintCallable)
    void CreateHealthBar();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActivateSounds();
    
};

