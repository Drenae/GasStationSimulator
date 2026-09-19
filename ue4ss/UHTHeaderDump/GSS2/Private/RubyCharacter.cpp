#include "RubyCharacter.h"

ARubyCharacter::ARubyCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNoShotGunIdle = false;
    this->bSleeping = false;
    this->bMegaphoneEquipped = false;
    this->Megaphone = NULL;
}


void ARubyCharacter::ResetRuby() {
}



