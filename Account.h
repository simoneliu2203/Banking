#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <string>

#include "Customer.h"
using namespace std;


class Account
{
    public:
        Account();
        Account(string a_id, double a_bal, string a_date, Customer a_cus);
        string get_accountId();
        double get_balance();
        string get_date();
        void get_customerAcc();

    private:
        string acc_id;
        double balance;
        string date;
        Customer cust;
};

#endif // ACCOUNT_H
