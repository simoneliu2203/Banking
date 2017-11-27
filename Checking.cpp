#include "Checking.h"
#include "ctime"
#include <windows.h>
#include "thread"


using namespace std;

Checking::Checking()
{
    charge_rate = 18;
    montly_charge();

}

Checking::Checking(string a_id, double a_bal, string a_date, Customer a_cus):Account(a_id, a_bal, a_date, a_cus)
{
    charge_rate = 18;
    montly_charge();
}

void Checking::montly_charge()
{
    int y = atoi(date.substr(0,4).c_str());
    int m = atoi(date.substr(5,2).c_str());
    int d = atoi(date.substr(8,2).c_str());

    tm dates = {};
    dates.tm_year = y-1900;
    dates.tm_mon  = m-1;
    dates.tm_mday = d;
    dates.tm_mday += 30;
    mktime(&dates);

    //cout << "timestamp = " << mktime(&dates) << endl;

    time_t  times;
    time(&times);
    //cout << "current timestamp = " << time(&times) << endl;

    if (time(&times)==mktime(&dates))
    {
        balance = balance - charge_rate;

    }


}


