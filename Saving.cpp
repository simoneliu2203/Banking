#include "Saving.h"
#include "time.h"

using namespace std;


Saving::Saving()
{
    earn_interest();
}

Saving::Saving(string a_id, double a_bal, string a_date, Customer a_cus):Account(a_id, a_bal, a_date, a_cus)
{
    earn_interest();
}


void Saving::earn_interest()
{
    time_t currentTime = time(NULL);
    struct tm *aTime = localtime(&currentTime);
    int hour=aTime->tm_hour;
    int minute=aTime->tm_min;

    if(hour==23 && minute==59)
    {
        balance = balance + balance*0.05;
    }
    else
    {

    }
}


