#include <iostream>

using namespace std;
int x=0;
int k=1;
int main()
{
    for(x=15;x>0;x=x-2)
    {
        k=k*x;
    }

    cout << "��Ϊ " << k << endl;
    return 0;
}
