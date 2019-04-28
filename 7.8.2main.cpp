#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

int main()
{
    const size_t arraysize=1;
    int i;
    cin>>i;
    array < int,arraysize > grade={i};
    cout <<grade[0];
    return 0;
}
