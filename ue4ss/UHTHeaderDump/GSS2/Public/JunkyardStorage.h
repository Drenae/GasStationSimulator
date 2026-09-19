#pragma once
#include "CoreMinimal.h"
#include "InteractableBuilding.h"
#include "StorageCarPart.h"
#include "JunkyardStorage.generated.h"

class UActorComponent;

UCLASS(Blueprintable)
class GSS2_API AJunkyardStorage : public AInteractableBuilding {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStorageCarPart> OwnedParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Cappacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxCappacity;
    
public:
    AJunkyardStorage(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetOwnedParts(TArray<FStorageCarPart> InParts);
    
    UFUNCTION(BlueprintCallable)
    bool RemovePart_Struct(FStorageCarPart CarPartStruct);
    
    UFUNCTION(BlueprintCallable)
    bool RemovePart(UActorComponent* PartClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool InventoryContainsItem(FStorageCarPart PartToCheck, bool CheckChemicalBath, bool bCountBetterQuality);
    
    UFUNCTION(BlueprintCallable)
    void IncreaseMaxcappacity(float AditionalCappacityAmount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FStorageCarPart GetSpawnedPartAsStorageStruct(UActorComponent* PartClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FStorageCarPart> GetOwnedParts();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxCappacity();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsStorageFull();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentCappacity();
    
    UFUNCTION(BlueprintCallable)
    void CalcaulateCurrentCappacity();
    
    UFUNCTION(BlueprintCallable)
    int32 AddPart_Struct(FStorageCarPart PartToAdd, bool bIgnoreLimit);
    
    UFUNCTION(BlueprintCallable)
    bool AddPart(UActorComponent* PartClass);
    
};

