#pragma once

#include "account.h"

#define EXPAND_FACTOR 2
#define BASE_SIZE 1

typedef struct bank {
    int numAccounts;
    int capacity;
    account_t* accounts;
} bank_t;

void bank_create(bank_t*);

void bank_register_account(bank_t*, account_t*);
void bank_delete_account(bank_t*, account_t*);