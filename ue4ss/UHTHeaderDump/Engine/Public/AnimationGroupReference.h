#pragma once
#include "CoreMinimal.h"
#include "EAnimGroupRole.h"
#include "EAnimSyncGroupScope.h"
#include "AnimationGroupReference.generated.h"

USTRUCT(BlueprintType)
struct FAnimationGroupReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAnimGroupRole::Type> GroupRole;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimSyncGroupScope GroupScope;
    
    ENGINE_API FAnimationGroupReference();
};

