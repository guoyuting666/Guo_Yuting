#include <iostream>
#include <iomanip>
#include <array>
using namespace std;
int main()
{
    int total=0;
    array <int ,100> n={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    for (size_t i=0;i<n.size();++i)
        total+=n[i];
    cout << total <<endl;
    return 0;
}
