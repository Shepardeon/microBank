#include <stdlib.h>
#include <string.h>
#include "bank.h"

void bank_realloc_accounts(bank_t* b) 
{
    account_t* newArr = malloc(b->capacity * EXPAND_FACTOR * sizeof(account_t));
    memcpy(newArr, b->accounts, b->capacity * sizeof(account_t));
    free(b->accounts);
    b->accounts = newArr;
    b->capacity *= EXPAND_FACTOR;
}

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
        bank_realloc_accounts(b);
    }

    memcpy(b->accounts + b->numAccounts * sizeof(account_t), a, sizeof(account_t));
    b->numAccounts++;
}

void bank_delete_account(bank_t* b, account_t* a) {
    return;
}