#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SaveGameDataActor.generated.h"

class USaveGameDLCActorComponent;

UCLASS(Blueprintable)
class GSS2_API ASaveGameDataActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USaveGameDLCActorComponent*> SaveGameComponents;
    
public:
    ASaveGameDataActor(const FObjectInitializer& ObjectInitializer);

};

