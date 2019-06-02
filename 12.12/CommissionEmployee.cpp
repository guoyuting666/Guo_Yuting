// Fig. 12.14: Commi sS ionEmployee . cpp
// Commi ssionEmp1oyee class member- function definitions.
#include_ <iostream>
#include
<stdexcept>
#include "CommissionEmployee.h" // Commiss ionEmployee class definition
using namespace std;
// constructor

CmmissionEmployee--CommissionEmplayee( const string &first,
const string &last, const string-&ssndouble-sales,double ate)
 Employee( first, last, ssn )
setGrossSales( sales );
n orierot oe cotr
, set gross sales amount
id CommissionEmployee:isetGrossSales( double sales )
o-aoosa as
 ar oancrao rog rosas s s o .
' return gross sales amount
uble Commi ssionEmplavee getGrossSales() const
hnm mss g csaes
 set commission rate
id CommissionEmployee: :setCommissionRate( doublerare)
1t ( rate > 0.0 && rate < 1.0 )
commTssTonRate  rate;
else
 omac cme cearts s a
ad0" )
/ return commi ssion rate
uble CommissionEmplayee:igetCommissiionRate() const
return commissionRate-
// end function getCommissionRate
/ calculate earnings; override pure vi rtual function earnings in Employee
uble CommissionEmployee::earnings)const-
/ aor acos ana n acossas
/ print Commi ssionEmployee's information
id Commi ssionEmployee: :print() const
oeror ce e
couE << ngross Sales
-9etGirossSalesO
 commission rate: getCommis
