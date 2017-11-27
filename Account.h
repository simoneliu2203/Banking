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
        Customer get_customerAcc();
        void view_account();
        void view_customer();
        void deposit(double amt, string des);

    protected:
        string acc_id;
        double balance;
        string date;
        Customer cust;
        string description;
};

#endif // ACCOUNT_H
