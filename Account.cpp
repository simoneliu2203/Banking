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

void Account::get_customerAcc()
{
    cust.viewInfo();
}

