
/ Fig. 12.17: fig12_17.cpp
/ Processing Employee derived-class objects individually
/ and polymorphi cally using dynamic binding.
include <iostream>
include <iomanip>
include <vector>
include "Employee.h".
include "Sal ariedEmployee. h"
include "CommissionEmployee.h"
incl ude "BasePl usCommissionEmployee. h"
sing namespace std;
id virtualViaPointer( const Employee * const ); // prototype
oid virtualViaReference( const Employee & ); // prototype
nt main()
// set floating-point output formatting
cout << fixed << setprecision( 2 );
// create derived-class objects
SalariedEmployee salariedEmployee (
"John", "Smith", "111-11-1111", 800 );
CommissionEmployee commi ssionEmployee(
"Sue", "'Jones", "333-33-3333", 10000, .06 );
BasePl usCommi ssionEmployee basePlusCommissionEmployee (
"Bob", "Lewis", "444-44-4444", 5000, .04, 300 );
cout << "Employees processed individually using static binding:\n\n";
// output each Employee's information and earnings using static bindin
cobnaiaecmcnarse Pneo3ai
and earnings usinq dynamic binding
"Virtual function calls made off base-class pointers: \n\n" ;
cout <<
ferai aorar o oer eieoe
call virtualViaReference to print each Employee's information
and earnings using dynamic binding
Virtual function calls made off base-class references:nn" ;
OL
for (const Emp loyee *employeeptr : emp loyees )
virtualViaReference ( *emp loyeeptr // note dereferencing
/ end main
call Employee virtual functions print and earnings off a
/ base-class pointer using dynamic binding
oid vi rtua]ViaPointer( const Employee * const baseClassPtr )
-baseClassPtr-zprint ();
nn";
assPtr->earninas(
neamne1
OuC4
 end function virtualViaPointer
call Employee virtual functions print and earnings off a
/ base-class reference using dynamic binding
dyirtualiaReferenee-eomst-tmplovee dbaseClassRef )
seClassRefrine();
cout << nearned .aseLassRet.earninqs() << "\n\n" ;
 end function virtualViaReference
