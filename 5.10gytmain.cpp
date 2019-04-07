#include <iostream>

using namespace std;
int x;
int number;
int k=1;

int main()
{
    cin>>number;
    for(x=number;x>0;x=x-1)
    {
        k=k*x;
    }
    cout << "½×³ËÎª " << k << endl;
    return 0;
}
