#include <iostream>
#include <iomanip>
#include <array>
using namespace std;
const size_t rows=2;
const size_t col=3;
void printarray (const array <array <int ,col>,rows>&);
int main()
{
    int z,x,c,v,b,n;
    cin >>z;
    cin >>x;
    cin >>c;
    cin >>v;
    cin >>b;
    cin >>n;
    cout <<z+x+c;
    cout <<z+v;
    array <array <int ,col>,rows>array1={z,x,c,v,b,n};
    printarray(array1);
}
void printarray (const array <array <int ,col>,rows>&a)
{
    for (auto const &row :a)
{
    for (auto const &element:row)
        cout <<element ;
        cout <<endl;
}
}
