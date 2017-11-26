#include <vector>
#include <iostream>
#include <string>


#include "Customer.h"
#include "Account.h"
#include "Checking.h"


using namespace std;

int main()
{
    cout << "Hello Simone!" << endl;

    //hvector<Customer> Customers;
    Customer c1("12345", "Simone");
    c1.set_address("123 Market St.");
    c1.set_phone("910-000-123");
    c1.set_email("simone@gmail.com");
    cout << "Customer id: " << c1.get_id() << endl;
    cout << "Customer name: " << c1.get_name() << endl;
    cout << "Customer address: " << c1.get_address() << endl;
    cout << "Customer phone: " << c1.get_phone() << endl;


    cout << "-------------------------------------------" << endl;

    Checking checking1("A1234", 125.75, "2017-11-26", c1);
    Checking checking2("A4899", 85.55, "2017-11-26", c1);

    checking1.view_account();
    checking1.view_customer();

    c1.addAccount(&checking1);
    c1.addAccount(&checking2);
    c1.count_acc();

    return 0;
}
