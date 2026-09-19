#include "CollisionProfile.h"

UCollisionProfile::UCollisionProfile() {
    this->Profiles.AddDefaulted(30);
    this->DefaultChannelResponses.AddDefaulted(15);
    this->EditProfiles.AddDefaulted(5);
    this->ProfileRedirects.AddDefaulted(8);
    this->CollisionChannelRedirects.AddDefaulted(8);
}


