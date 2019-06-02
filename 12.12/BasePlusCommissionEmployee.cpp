
// Fig. 12.16: BaseP1usCommi ssionEmp1oyee. cpp
1 BasePiusCommissionEmployee member- function definitions.
#include <i ostream>
#include <stdexcept>
#inc1ude 'BasePlusCommiss ionEmployee .h"
using namespace std;
// constructor
BasePlusCommi ss ionEmployee : : BasePlusCommissi onEmp loyee(
const string &first, const string &last£¬const string &ssn,
double sales£¬ double rate£¬ doub1e salary )
: CommissionEmployee( first, last, ssn, sales, rate)
{
setBaseSalary( salary ); // validate and store base salary
} // end BasePlusCommi ssionEmployee constructor
// set base salary
void BasePlusCommi ssi onEmployee: :setBaseSalary( double salary )
if ( salary >= 0.0 )
baseSalary = salary;
else
throw invalid_ argument( "Salary must be >= 0.0" );
} // end function setBaseSalary
// return base salary
double BasePlusCommissionEmployee::getBaseSalaryO const
{
return baseSalary;
} // end function getBaseSalary
// calculate earnings;
1 override virtual function earnings in CommissionEmployee

// calculate earnings ;
// override virtual function earnings in Commi ssi onEmp1oyee
double BasePlusCommi ssionEmp loyee: :earnings() const
{
return getBaseSalary() + CommissionEmployee::earningsO;
} // end function earnings
我的手机 2019/6/2 10:08:15
// print BaseP1usCommi SS ionEmp1oyee's information
void BaseP1 usCommi ssi onEmp loyee: :print() const
{
cout << "base-salaried'
Commi ssionEmp7oyee: :print(); // code
reuse
罗
cout<<
"; base salary:
<< getBaseSalary() ;
} // end function print

