#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "EFuelState.h"
#include "ENotificationType.h"
#include "ESpecialCharacterType.h"
#include "GSS_HUD_BaseWidget.h"
#include "GSS_Notification_Manager.generated.h"

class USideNotification;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UGSS_Notification_Manager : public UGSS_HUD_BaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* Side_Notification_BOX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USideNotification*> Notifications;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TrashTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FuelTag;
    
    UGSS_Notification_Manager();

    UFUNCTION(BlueprintCallable)
    void RemoveOrCreateNotification(const bool bShow, const ENotificationType NotificationType, const ESpecialCharacterType CharacterType);
    
    UFUNCTION(BlueprintCallable)
    void RemoveNotification(USideNotification* Notification);
    
    UFUNCTION(BlueprintCallable)
    void OnFuelStatusChanged(EFuelState FuelState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCreateNotification(ENotificationType NotificationType, ESpecialCharacterType SpecialCharacterType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CreateNotification(const bool bShow, const ENotificationType NotificationType, const ESpecialCharacterType CharacterType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USideNotification* CheckAndGetNotification(const ENotificationType NotificationType, const ESpecialCharacterType SpecialCharacterType);
    
};

