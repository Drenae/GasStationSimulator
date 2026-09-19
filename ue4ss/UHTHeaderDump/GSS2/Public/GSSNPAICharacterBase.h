#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NopeAISystem -ObjectName=NPAICharacterBase -FallbackName=NPAICharacterBase
#include "ENPCAccent.h"
#include "ENPCGender.h"
#include "GSSNPAICharacterBase.generated.h"

class UAudioComponent;
class USkeletalMeshComponent;

UCLASS(Abstract, Blueprintable)
class GSS2_API AGSSNPAICharacterBase : public ANPAICharacterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Head_SMC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* Sound;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENPCGender Gender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENPCAccent LanguageAccent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDialogNeverLookAt;
    
public:
    AGSSNPAICharacterBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    ENPCGender GetGender();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ENPCAccent GetAccent();
    
};

