// Account.cpp

#include "Account.h"

void Account::deposit(double amount) {
    balance += amount;
}

bool Account::withdraw(double amount) {
    if (balance >= amount) {
        balance -= amount;
        return true;
    } else {
        return false; // Insufficient funds
    }
}

void Account::displayInfo() const {
    std::cout << "Account ID: " << accountId << std::endl;
    std::cout << "Balance: $" << balance << std::endl;
}
