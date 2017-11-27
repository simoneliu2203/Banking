#include <vector>
#include <iostream>
#include <string>


#include "Customer.h"
#include "Account.h"
#include "Checking.h"
#include "Saving.h"


using namespace std;

int main()
{
    cout << "Hello Simone!" << endl;

    Customer c1("12345", "Simone");
    c1.set_address("123 Market St.");
    c1.set_phone("910-000-123");
    c1.set_email("simone@gmail.com");
    //c1.viewInfo();

    cout << "-------------------------------------------" << endl;

    Customer c2("77488", "Will");
    c2.set_address("456 College St.");
    c2.set_phone("808-000-000");
    c2.set_email("will@gmail.com");
    //c2.viewInfo();

    cout << "-------------------------------------------" << endl;

    Checking checking1("A1234", 125.75, "2017-11-26", c1);
    Checking checking2("A4899", 85.55, "2017-11-22", c1);
    Saving saving3("S4811", 1000.25, "2017-11-20", c2);

    checking1.view_account();
    cout << "-------------------------------------------" << endl;
    checking1.view_customer();
    cout << "-------------------------------------------" << endl;
    saving3.view_account();
    cout << "-------------------------------------------" << endl;
    //checking2.view_account();
    //checking2.view_customer();

    c1.addAccount(&checking1);
    c1.addAccount(&checking2);
    c2.addAccount(&saving3);
    c1.count_acc();
    c2.count_acc();

    vector<Customer> Customers;
    Customers.push_back(c1);

    c1.allAccounts();
}
