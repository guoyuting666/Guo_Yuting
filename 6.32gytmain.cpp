#include <iostream>

using namespace std;
int QP (int x)
{
    int y;
    if (x<=100&&x>=90)
        y=4;
    if (x<90&&x>=80)
        y=3;
    if (x<80&&x>=70)
        y=2;
    if (x<70&&x>=60)
        y=1;
    if (x<60)
        y=0;
    return y;
}

int main()
{
    int y;
    int b;
    cin >> b;
    y=QP(b);
    cout << y ;
    return 0;
}
