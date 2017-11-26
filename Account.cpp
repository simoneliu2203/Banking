#include "Account.h"

using namespace std;

Account::Account()
{
    acc_id = "";
    balance = 0;
    date = "";
    cust = Customer();
}

Account::Account(string a_id, double a_bal, string a_date, Customer a_cus)
{
    acc_id = a_id;
    balance = a_bal;
    date = a_date;
    cust = a_cus;
}

string Account::get_accountId()
{
    return acc_id;
}

double Account::get_balance()
{
    return balance;
}

string Account::get_date()
{
    return date;
}

Customer Account::get_customerAcc()
{
    return cust;
}

void Account::view_account()
{
    cout << "Account id: " << acc_id << endl;
    cout << "Account balance: " << balance << endl;
    cout << "Customer date: " << date << endl;
}

void Account::view_customer()
{
    cust.viewInfo();
}

