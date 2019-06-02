
#include "employee.h"
#include<iostream>
using namespace std;
employee::employee(const string &first,const string &last,const string &ssn)
:firstname(first),lastname(last),socialsecuritynumer(ssn)
{
    //ctor
}
void employee::setfirstname(const string &first)
{
    firstname=first;
}
string employee::getfirstname()const
{
    return firstname;
}
void employee::setlastname(const&last)
{
    lastname=last;
}
string employee::getlastname()const
{
    return lastname;
}
void employee::setsocialsecuritynumber(const string &ssn)
{
    socialsecuritynumber=ssn;
}
string employee::getsocialsecuritynumber()const
{
    return socialsecuritynumber;
}
void employee :: print ()const
{
    cout <<get firstname () <<' '<<getlastname()<<"\nsocial security number :"<< getsocialsecuritynumber();
}
