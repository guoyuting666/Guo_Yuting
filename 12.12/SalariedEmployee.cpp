
#include<iostream>
#include <stdexcept>
#include "SalariedEmployee.h" // SalariedEmployee class definition.
sing namespace std
/ constructor
alariedEmployeeSalariedEmployee( const string &first,
const string &last, const string ssn, doubTe salary )
: EmpToyee( first, last, ssn )
Cna ahfanr ocortrco
/ set salary
oid SalariedEmployee: :setweeklyalary( double salary )
if (salary >= 0.0 )
weeklySalary = salary;
alse
 oar romcn ceaengaesy ayas e o
/ return salary
louble, SalariedEmployee::getweeklysalary() const
return weeklySalary4
// end function getweekl ySalary
/ calculate earnings;
/ override pure virtual function earnings in Employee
ouble SalariedEmployee: :earnings) const
-return getWeeklysalary();
/ end function earnings
/ print SalariedEmployee's information
oid SalariedEmployee: :print const
cout << "sal aried emplovee;
mployee;:printO): // reuse abstract base-class print function
 getweekl

