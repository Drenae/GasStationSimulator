#pragma once
#include "CoreMinimal.h"
#include "CleanRange.h"
#include "House.h"
#include "CentralShop.generated.h"

class UMaterialInstance;

UCLASS(Blueprintable)
class GSS2_API ACentralShop : public AHouse {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* StationFloorMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* ToiletFloorMaterial;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCleanRange> DirtyClean;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RoofLevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RoofLevelToUnload;
    
    ACentralShop(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCleanRange GetDirtyCleanStruct();
    
};

