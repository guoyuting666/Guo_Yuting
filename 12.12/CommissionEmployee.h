
// Fiqg. 12.13: CommissionEmployee.h
// CommissionEmp loyee class derived from Employee.
#ifndef COMMISSION-H
#define COMMISSION-H
#include <string> // C++ standard string classi
#incl ude "Employee.h" // Employee class definition
class CommissionEmployee : publ ic Employee
public:
CommissionEmployee( const std::string &, const std::string &,
const std::string &, double = 0.0, double=0.0)
virtual -CommissionEmp loyee // virtual destructor
void setCommissionRate( double ); // set commission rate
double getCommi ssionRate const; ,
 return commission rate
void setGrossSales( double ); // set gross sales amount
double getGrossSales) const; /
 return gross sales amount
/ keyword virtual signals intent to override
virtual double earningsO) const override;
' calculate earnings
virtual void printO const override: ,
print obiect
private:
double grossSales; // gross weekly sales
double commissionRate;
 commission percentage
// end class CommissionEmployee
endif // COMMISSION-H
