#pragma once
#include "CoreMinimal.h"
#include "EBuildingType.h"
#include "ObjectiveBase.h"
#include "UpgradeBuildingObjective.generated.h"

UCLASS(Blueprintable)
class GSS2_API UUpgradeBuildingObjective : public UObjectiveBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBuildingType BuildingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DesiredBuildingLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BuildingLevelName;
    
    UUpgradeBuildingObjective();

protected:
    UFUNCTION(BlueprintCallable)
    void OnBuildingUpgraded(EBuildingType _BuildingType, int32 NewBuildingLevel, bool bLoadedFromSave);
    
};

