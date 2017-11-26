#include "Customer.h"
#include <iostream>
#include <string>


using namespace std;

Customer::Customer()
{
    id = "";
    name = "";
    address = "";
    phone = "";
    email = "";
}

Customer::Customer(string _id, string _name)
{
    id = _id;
    name = _name;
}

string Customer::get_id()
{
    return id;
}

string Customer::get_name()
{
    return name;
}

string Customer::get_address()
{
    return address;
}

string Customer::get_phone()
{
    return phone;
}

string Customer::get_email()
{
    return email;
}

void Customer::set_address(string addr)
{
    address = addr;
}

void Customer::set_email(string e_mail)
{
    email = e_mail;
}

void Customer::set_phone(string fone)
{
    phone = fone;
}
