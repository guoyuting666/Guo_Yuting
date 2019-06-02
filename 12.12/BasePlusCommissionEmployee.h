我的手机 2019/6/2 10:05:07
/ Fig. 12.15: BasePl usCommissionEmployee.h
// BasePlusCommissionEmp loyee class derived from CommissionEmp loyee.
#ifndef BASEPLUS-H
#define BASEPLUS H
#include <string> // C++ standard string class
#incl ude "CommissionEmployee.h" // CommissionEmployee class definition.
class BasePlusCommissionEmployee : public CommissionEmployee
public:
BasePlusCommissionEmployee( const std: string &, const std::string &,
const std::string &, double = 0.0, double = 0.0, double = 0.0);
virtual -CommissionEmployee / virtual destructor
void setBaseSalary( double ); // set base salary
double getBaseSalaryO) const; // return base salary
// keyword virtual signals intent to override
virtual double earnings const override; // calculate earnings
virtual void print() const override; // print obiect:
private:
double baseSalary; // base salary per week
// end class BasePlusCommi ssionEmployee
#endif // BASEPLUS-H
