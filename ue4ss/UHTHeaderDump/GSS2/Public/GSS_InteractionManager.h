#pragma once
#include "CoreMinimal.h"
#include "Action.h"
#include "GSS_HUD_BaseWidget.h"
#include "Templates/SubclassOf.h"
#include "GSS_InteractionManager.generated.h"

class AActor;
class AGSSPlayerCharacter;
class AGSSPlayerController;
class AGSS_NewHud;
class AObjectiveMarker;
class UDataTable;
class UInteractionInfoWidget;

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UGSS_InteractionManager : public UGSS_HUD_BaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* InteractionDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* InteractionIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionInfoWidget* Interaction_Info_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionInfoWidget* Interaction_Info_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionInfoWidget* Interaction_Info_3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AObjectiveMarker> ObjectiveMarkerClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGSSPlayerCharacter* Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGSSPlayerController* PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGSS_NewHud* HUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UInteractionInfoWidget*> Widgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UInteractionInfoWidget*> ProgressBarWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AObjectiveMarker*> TrashBinMarkers;
    
public:
    UGSS_InteractionManager();

    UFUNCTION(BlueprintCallable)
    void UpdateInteractionInfoWidget(UInteractionInfoWidget* WidgetToUpdate, const FAction& DataToUpdate);
    
    UFUNCTION(BlueprintCallable)
    void ToggleInteractions(int32 InteractionCountToToggle, bool bToggle);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentMode(int32 InMode);
    
    UFUNCTION(BlueprintCallable)
    void OnHandleActorUpdated(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void HoldedInteractionStart(float TimeToHold);
    
    UFUNCTION(BlueprintCallable)
    void HoldedInteractionEnd(bool bHoldedInteractionSuccess);
    
};

