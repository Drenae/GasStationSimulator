#pragma once
#include "CoreMinimal.h"
#include "Item.h"
#include "ItemBox.generated.h"

class UInventoryComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class GSS2_API AItemBox : public AItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryComponent* InventoryComponent;
    
    AItemBox(const FObjectInitializer& ObjectInitializer);

};

