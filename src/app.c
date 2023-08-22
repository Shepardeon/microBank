#include <stdio.h>
#include "account.h"
#include "bank.h"

int main() {

    account_t acc, acc2;
    bank_t bank;

    printf("Creating accounts\n");
    account_create(&acc, "John Doe");
    account_create(&acc2, "Paul Jack");

    printf("Creating bank\n");
    bank_create(&bank);
    printf("Bank capacity: %i | Account registered: %i\n", bank.capacity, bank.numAccounts);

    printf("Registering accounts\n");
    bank_register_account(&bank, &acc);
    printf("Bank capacity: %i | Account registered: %i\n", bank.capacity, bank.numAccounts);
    bank_register_account(&bank, &acc2);
    printf("Bank capacity: %i | Account registered: %i\n", bank.capacity, bank.numAccounts);

    account_print(&acc);
    account_print(&acc2);

    printf("Adding 3.14 euros\n");
    account_deposit(&acc, 3.14f);
    account_print(&acc);

    printf("Try to retrieve 10 euros\n");
    account_withdraw(&acc, 10.0f);
    account_print(&acc);

    printf("Try to retrieve 2.5 euros\n");
    account_withdraw(&acc, 2.5f);
    account_print(&acc);

    return 0;
}