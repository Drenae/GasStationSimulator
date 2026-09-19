#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "EDLCName.h"
#include "ERVBookingView.h"
#include "ERVCamperLeftReason.h"
#include "ERVGuestType.h"
#include "ERVResource.h"
#include "OnBookedCustomersUpdatedDelegate.h"
#include "OnBookingActionErrorDelegate.h"
#include "OnBookingCampSpotSelectedDelegate.h"
#include "OnBookingViewUpdatedDelegate.h"
#include "OnCheckOutNeededDelegate.h"
#include "OnCustomerBookedInDelegate.h"
#include "OnCustomerCheckedOutDelegate.h"
#include "OnInterestedCustomersRefreshTimeUpdatedDelegate.h"
#include "OnInterestedCustomersUpdatedDelegate.h"
#include "OnPressedBookedCustomerDismissDelegate.h"
#include "OnPressedInterestedCustomerAcceptDelegate.h"
#include "OnSummaryClaimedDelegate.h"
#include "RVSleepoverGuestData.h"
#include "RVSpecificCustomer.h"
#include "RvSummaryData.h"
#include "TimeStruct.h"
#include "RVBookingManager.generated.h"

class AGSSPlayerState;
class ARVCampManager;
class ARVCampSpot;
class URVBookingSettings;
class URVCamperComponent;
class URVCustomerData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GSS2_API URVBookingManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInterestedCustomersUpdated OnInterestedCustomersUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBookingViewUpdated OnBookingViewUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBookedCustomersUpdated OnBookedCustomersUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCheckOutNeeded OnCheckOutNeeded;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSummaryClaimed OnSummaryClaimed;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCustomerCheckedOut OnCustomerCheckedOut;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPressedInterestedCustomerAccept OnPressedInterestedCustomerAccept;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCustomerBookedIn OnCustomerBookedIn;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPressedBookedCustomerDismiss OnPressedBookedCustomerDismiss;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBookingActionError OnBookingActionError;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBookingCampSpotSelected OnBookingCampSpotSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInterestedCustomersRefreshTimeUpdated OnInterestedCustomersRefreshTimeUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URVCustomerData*> InterestedCustomers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentBookingLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSummaryWindowOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWereCustomerNamesLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasBookingToolInitiated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAutoCheckoutEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanAutorefreshcustomers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipDismissPopup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanGenerateNewCustomers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanGenerateNewCustomersAfterBooking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> CustomerNamePool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> FreedCustomerNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URVCustomerData* SummaryCustomerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARVCampSpot* SummaryCampSpot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimeStruct InterestedCustomersRefreshTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERVBookingView CurrentBookingView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARVCampManager* RVCampManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URVBookingSettings* BookingSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGSSPlayerState* PlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle AutoBookingLoopTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoBookingLoopInterval;
    
public:
    URVBookingManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TryRefreshInterestedCustomers(bool& Success);
    
    UFUNCTION(BlueprintCallable)
    void TryPerformCheckOut();
    
    UFUNCTION(BlueprintCallable)
    void TryInitBookingTool();
    
    UFUNCTION(BlueprintCallable)
    void TryDismissCustomer(URVCustomerData* CustomerData, ARVCampSpot* CampSpot, bool& Success, bool bSkipPenalty);
    
    UFUNCTION(BlueprintCallable)
    void TryDismissAllCustomers(bool& Success, bool bSkipPenalty);
    
    UFUNCTION(BlueprintCallable)
    void TryBookCustomer(URVCustomerData* CustomerData, ARVCampSpot* CampSpot, bool& Success);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentBookingView(ERVBookingView NewBookingView);
    
    UFUNCTION(BlueprintCallable)
    void SendAllCampersHome();
    
private:
    UFUNCTION(BlueprintCallable)
    void ScheduleCamperSpawn(URVCustomerData* CustomerData, ARVCampSpot* CampSpot);
    
    UFUNCTION(BlueprintCallable)
    void OnTimeUpdated(const FTimeStruct UpdatedTime);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDLCActivationStateChanged(EDLCName DLCName, bool bNewActivated);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCheckOutNeeded();
    
    UFUNCTION(BlueprintCallable)
    void HandleCamperLeft(URVCustomerData* CustomerData, ARVCampSpot* CampSpot, URVCamperComponent* Camper, ERVCamperLeftReason Reason);
    
    UFUNCTION(BlueprintCallable)
    void HandleCamperArrived(URVCustomerData* CustomerData, ARVCampSpot* CampSpot, URVCamperComponent* Camper);
    
    UFUNCTION(BlueprintCallable)
    void HandleBookingUpgraded();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERVBookingView GetCurrentBookingView();
    
    UFUNCTION(BlueprintCallable)
    TArray<URVCustomerData*> GenerateSpecificCustomers(TArray<FRVSpecificCustomer> SpecificCustomers, bool FillRandomCustomers);
    
    UFUNCTION(BlueprintCallable)
    URVCustomerData* GenerateSpecificCustomer(FRVSpecificCustomer SpecificCustomer);
    
    UFUNCTION(BlueprintCallable)
    TMap<ERVResource, int32> GenerateRandomResourceCosts(FRVSleepoverGuestData SleepoverGuestData);
    
    UFUNCTION(BlueprintCallable)
    TArray<FGameplayTag> GenerateRandomMusicTypes(int32 MusicCount);
    
    UFUNCTION(BlueprintCallable)
    TArray<FGameplayTag> GenerateRandomGuestServices(int32 ServiceCount);
    
    UFUNCTION(BlueprintCallable)
    void GenerateRandomCustomers();
    
    UFUNCTION(BlueprintCallable)
    URVCustomerData* GenerateRandomCustomer();
    
    UFUNCTION(BlueprintCallable)
    ERVGuestType GenerateGuestType();
    
private:
    UFUNCTION(BlueprintCallable)
    FName GenerateGuestName();
    
public:
    UFUNCTION(BlueprintCallable)
    void EnableDebugAutoBooking();
    
    UFUNCTION(BlueprintCallable)
    void DisableDebugAutoBooking();
    
    UFUNCTION(BlueprintCallable)
    void CollectSummaryData(FRvSummaryData& SummaryData, bool& IsSummaryValid);
    
    UFUNCTION(BlueprintCallable)
    void ClaimSummary(FRvSummaryData SummaryData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBookCustomer(URVCustomerData* CustomerData, ARVCampSpot* CampSpot);
    
private:
    UFUNCTION(BlueprintCallable)
    void AutoBookingLoop();
    
};

