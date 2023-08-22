#include <stdio.h>
#include "account.h"

static int ACCOUNT_ID = 0;

void account_create(account_t* acc, char* owner)
{
    acc->id = ACCOUNT_ID++;
    acc->balance = 0;
    acc->owner = owner;
}

int account_withdraw(account_t* acc, float amount)
{
    if (amount < 0) return 0;
    if (acc->balance < amount) return 0;

    acc->balance -= amount;
    return amount;
}

int account_deposit(account_t* acc, float amount)
{
    if (amount < 0) return 0;

    acc->balance += amount;
    return 1;
}

void account_print(account_t* acc)
{
    printf("Account: %i (owner: %s) | current balance: %.2f$\n", acc->id, acc->owner, acc->balance);
}