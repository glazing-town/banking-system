// Customer.h

#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>

class Customer {
public:
    int customerId;
    std::string name;
    std::string email;

    void displayInfo() const;
};

#endif
