
#ifndef SALARIED H
#define SALARIED.H
#include <string> // C++ standard string class
#incl ude "Employee.h" // Employee class definition
class SalariedEmployee : public Employee
public:
Sal ariedEmp loyee( const std::string &, const std::string &,
const std::string &, double = 0.0);
virtual -SalariedEmployee()
// virtual destructor
void setweeklySalary( double ); // set weekly salary
double getweeklySalary() const; //. return weekly salary
// keyword virtual signals intent to override
