#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <string>

#include "Customer.h"

class Account
{
    public:
        Account();


    private:
        string acc_id;
        double balance;
        string date;
        Customer cust;
};

#endif // ACCOUNT_H
