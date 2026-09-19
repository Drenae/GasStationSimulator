#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "RedDotsManager.generated.h"

class AGSS_NewHud;
class UGSSBaseWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GSS2_API URedDotsManager : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGSS_NewHud* HudRef;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RedDotsCurrentTag;
    
    URedDotsManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetGSSHudRef(AGSS_NewHud* InHudRef);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGSS_NewHud* GetGSSHUD();
    
    UFUNCTION(BlueprintCallable)
    void CreateRedDots(UGSSBaseWidget* Widget);
    
};

