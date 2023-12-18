// Transaction.h

#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <iostream>
#include "Account.h"
#include "Customer.h"

class Transaction {
public:
    int transactionId;
    Account account;
    Customer customer;
    double amount;

    void displayInfo() const;
};

#endif
