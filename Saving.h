#ifndef SAVING_H
#define SAVING_H

#include "Customer.h"
#include "Account.h"

using namespace std;

class Saving:public Account
{
    public:
        Saving();
        Saving(string a_id, double a_bal, string a_date, Customer a_cus);
        void earn_interest();

    protected:

    private:
};

#endif // CHECKING_H
