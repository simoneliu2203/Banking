#include <vector>
#include <iostream>
#include <string>


#include "Customer.h"


using namespace std;

int main()
{
    cout << "Hello Simone!" << endl;

    //hvector<Customer> Customers;
    Customer c("12345", "Simone");
    c.set_address("123 Market St.");
    c.set_phone("910-000-123");
    cout << "Customer id: " << c.get_id() << endl;
    cout << "Customer name: " << c.get_name() << endl;
    cout << "Customer address: " << c.get_address() << endl;
    cout << "Customer phone: " << c.get_phone() << endl;
    return 0;
}
