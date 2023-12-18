// BankingSystem.cpp

#include "Account.h"
#include "Customer.h"
#include "Transaction.h"

int main() {
    // Create accounts
    Account account1{1, 1000.0};
    Account account2{2, 2000.0};

    // Create customers
    Customer customer1{101, "Alice", "alice@example.com"};
    Customer customer2{102, "Bob", "bob@example.com"};

    // Create transactions
    Transaction transaction1{1001, account1, customer1, 500.0};
    Transaction transaction2{1002, account2, customer2, 700.0};

    // Display information
    std::cout << "Transaction Information:" << std::endl;
    transaction1.displayInfo();
    std::cout << std::endl;
    transaction2.displayInfo();

    return 0;
}
