#include <stdlib.h>
#include <string.h>
#include "bank.h"

void bank_create(bank_t* b)
{
    b->accounts = malloc(BASE_SIZE * sizeof(account_t));
    b->capacity = BASE_SIZE;
    b->numAccounts = 0;
}

void bank_register_account(bank_t* b, account_t* a)
{
    if (b->capacity <= b->numAccounts)
    {
        b->accounts = realloc(b->accounts, b->capacity * EXPAND_FACTOR * sizeof(account_t));
        b->capacity *= EXPAND_FACTOR;
    }

    memcpy(b->accounts + b->numAccounts * sizeof(account_t), a, sizeof(account_t));
    b->numAccounts++;
}

void bank_delete_account(bank_t* b, account_t* a)
{
    return;
}