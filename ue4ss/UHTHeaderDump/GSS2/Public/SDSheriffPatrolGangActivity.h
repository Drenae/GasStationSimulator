#pragma once
#include "CoreMinimal.h"
#include "ESDGangActivityType.h"
#include "SDGangActivityObjBase.h"
#include "SDSheriffPatrolGangActivity.generated.h"

class AAICharacterBase;
class AActor;
class AGSSWheeledVehicle;
class ASDSheriffPatrolWaypoint;

UCLASS(Blueprintable)
class GSS2_API USDSheriffPatrolGangActivity : public USDGangActivityObjBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AAICharacterBase> SheriffCharacterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AGSSWheeledVehicle> SheriffVehicleClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASDSheriffPatrolWaypoint*> PatrolWaypoins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGSSWheeledVehicle* SheriffVehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAICharacterBase* SheriffCharacter;
    
public:
    USDSheriffPatrolGangActivity();

    UFUNCTION(BlueprintCallable)
    void SetWaypointReachedIndex(int32 InWaypointIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetWaypointReached(ASDSheriffPatrolWaypoint* InWaypoint);
    
    UFUNCTION(BlueprintCallable)
    void SetSheriffVehicle(AGSSWheeledVehicle* InSheriffVehicle);
    
    UFUNCTION(BlueprintCallable)
    void SetSheriffCharacter(AAICharacterBase* InSheriffChar);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSheriffActorDestroyed(AActor* DestroyedActor);
    
public:
    UFUNCTION(BlueprintCallable)
    bool MoveWaypointToIndex(ESDGangActivityType ActivityWaypoint, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWaypointReachedIndex(int32 InWaypointIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWaypointReached(ASDSheriffPatrolWaypoint* InWaypoint) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPatrollEnded() const;
    
    UFUNCTION(BlueprintCallable)
    void InsertPatrolWaypoint(int32 Index, ASDSheriffPatrolWaypoint* InWaypoint);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGSSWheeledVehicle* GetSheriffVehicle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AAICharacterBase* GetSheriffCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ASDSheriffPatrolWaypoint*> GetPatrolWaypoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASDSheriffPatrolWaypoint* GetFirstUnreachedWaypoint(int32& WaypointIndex) const;
    
};

