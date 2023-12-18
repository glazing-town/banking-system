// Account.h

#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>

class Account {
public:
    int accountId;
    double balance;

    void deposit(double amount);
    bool withdraw(double amount);
    void displayInfo() const;
};

#endif
