#pragma once

typedef struct account {
    int id;
    float balance;
    char* owner;
} account_t;

void account_create(account_t*, char* owner);

int account_withdraw(account_t*, float amount);
int account_deposit(account_t*, float amount);

void account_print(account_t*);