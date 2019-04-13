#include <iostream>

using namespace std;
double fmin (double x,double y,double z)
{
    double h=0;
    if (x<y&&x<z)
        h=x;
    if (y<x&&y<z)
        h=y;
    if (z<y&&z<x)
        h=z;
    return h;

}

int main()
{
    double x;
    double y;
    double z;
    double h;
    cin >> x >> y>> z;
    h=fmin(x,y,z);
    cout << "最小值为" << h << endl;
    return 0;
}
