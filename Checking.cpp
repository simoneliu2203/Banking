#include "Checking.h"

using namespace std;

Checking::Checking()
{
    charge_rate = 18;
}

Checking::Checking(string a_id, double a_bal, string a_date, Customer a_cus):Account(a_id, a_bal, a_date, a_cus)
{
    charge_rate = 18;
}


