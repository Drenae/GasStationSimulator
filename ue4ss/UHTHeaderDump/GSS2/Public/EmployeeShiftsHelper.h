#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EEmployeeTask.h"
#include "EShiftType.h"
#include "EmployeeShiftsHelper.generated.h"

class AAICharacterBase;
class AInteractableBuilding;
class UObject;
class UTaskBase;

UCLASS(Blueprintable)
class GSS2_API UEmployeeShiftsHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UEmployeeShiftsHelper();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RemoveAsTargetActor(UObject* WorldContextObject, AInteractableBuilding* BuldingToRemove, EEmployeeTask TaskType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTargetActorWorthToGoOrAvailable(AAICharacterBase* Employee, AInteractableBuilding* BuildingToLookForCustomers);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static EEmployeeTask GetTaskType(UObject* WorldContextObject, UTaskBase* Task);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static EShiftType GetCurrentShift(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ForceNextTaskOrHome(UObject* WorldContextObject, AAICharacterBase* Employee);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool ForceNextTask(UObject* WorldContextObject, AAICharacterBase* Employee);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool CheckIfStationDirty(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool CheckIfShelvesNeedRestock(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool CheckIfCanMoveToNextTask(UObject* WorldContextObject, AAICharacterBase* Employee, int32& NewTaskIndex, bool& bCurrentTaskConsent);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddAsTargetActor(UObject* WorldContextObject, AInteractableBuilding* NewBuilding, EEmployeeTask TaskType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ActivateEmployeeNewTask(UObject* WorldContextObject, AAICharacterBase* Employee, int32 NewTaskIndex);
    
};

