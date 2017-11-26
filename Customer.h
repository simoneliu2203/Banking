#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>
#include <string>


using namespace std;

class Customer
{
    public:
        Customer();
        Customer(string id, string name);
        string get_id();
        string get_name();
        string get_address();
        string get_phone();
        string get_email();
        void viewInfo();
        void set_address(string addr);
        void set_phone(string fone);
        void set_email(string e_mail);
    private:
        string id;
        string name;
        string address;
        string phone;
        string email;
};

#endif // CUSTOMER_H
