
#include <iostream>

using namespace std;

int main()
{
    int x=0;
    int y=1;
    int e=0;
    int c=0;
    int k=0;
    int u=0;
    int p=0;
    int q=0;
    cin >> x ;
    cin >> u ;
    while (x>0)
    {
        y=x*y;
        e=1+1/x;
        x=x-1;
        c=c+1;
        p=u;
        u=u*u/y;
        k=u*p;
        q=1+k;
    }
    cout << "y= " << y << endl;
    cout << "e= " << e << endl;
    cout << "q= " << q << endl;

         return 0;
}
