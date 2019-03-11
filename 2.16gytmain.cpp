#include <iostream>

using namespace std;

int main()
{
    int x=0;
    int y=0;
    int z=0;
    int w=0;
    int d=0;
    int e=0;
    cout <<"请输入两个数字 ";
    cin >> x>> y;
    z=x+y,w=x*y,d=x-y,e=x/y;
    cout <<"和的结果为 "<<z;
    cout <<"差的结果为 "<<d;
    cout <<"乘积的结果为 "<<w;
    cout <<"商的结果为 "<<e<<endl;
    return 0;
}
