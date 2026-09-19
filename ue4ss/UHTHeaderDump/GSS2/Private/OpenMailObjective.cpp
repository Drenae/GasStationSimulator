#include "OpenMailObjective.h"
#include "Templates/SubclassOf.h"

UOpenMailObjective::UOpenMailObjective() {
    this->MailClassToOpen = NULL;
}

void UOpenMailObjective::OnMailOpened(TSubclassOf<UGSSMail> MailClass) {
}


