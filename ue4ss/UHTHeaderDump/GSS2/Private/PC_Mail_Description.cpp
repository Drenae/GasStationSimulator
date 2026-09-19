#include "PC_Mail_Description.h"
#include "Templates/SubclassOf.h"

UPC_Mail_Description::UPC_Mail_Description() {
    this->Title_TXT = NULL;
    this->MAIL_DESCRIPTION = NULL;
}

void UPC_Mail_Description::SetDescription(TSubclassOf<UGSSMail> MailClass) {
}

void UPC_Mail_Description::NativeConstruct() {
}


