#include <iostream>

using namespace std;
int x=0;
int number1=0;
int k=0;
int t=0;
int y=0;
int m=0;

int main()
{
    cin>>number1;
    x=number1;
    for (x=number1;x!=0;x--)
    {
        k=x;
        cin>>y;
        t=y;
        if(t<k)
        {
            m=t;
            k=t;
        }
        if(t>k)
        {
            m=k;
        }
    }
    cout << "m is !" << m << endl;
    return 0;
}
