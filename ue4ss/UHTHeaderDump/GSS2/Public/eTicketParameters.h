#pragma once
#include "CoreMinimal.h"
#include "eTicketParameters.generated.h"

UENUM(BlueprintType)
enum class eTicketParameters : uint8 {
    DIGIT_ID,
    MOVIE_NAME,
    CINEMA_NAME,
    FILM_IMAGE,
    FILM_TIME,
    MAX,
};

