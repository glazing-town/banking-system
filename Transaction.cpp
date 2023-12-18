// Transaction.cpp

#include "Transaction.h"

void Transaction::displayInfo() const {
    std::cout << "Transaction ID: " << transactionId << std::endl;
    account.displayInfo();
    customer.displayInfo();
    std::cout << "Amount: $" << amount << std::endl;
}
