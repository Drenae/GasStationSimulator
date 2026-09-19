#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "OutlineInterface.generated.h"

UINTERFACE()
class UOutlineInterface : public UInterface {
    GENERATED_BODY()
};

class IOutlineInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION()
    virtual void SetOutline(bool bShouldBeOutlined) PURE_VIRTUAL(SetOutline,);
    
};

