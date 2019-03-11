#include <iostream>

using namespace std;

int main()
{
    int x=0;
    int y=0;
    int z=0;
    int c=0;
    cout <<"请输入圆的半径 ";
    cin >>x;
    y=2*3.14159*x,z=2*x;c=3.14159*x*x;
    cout << "该圆的周长为 " << y;
    cout <<"该圆的面积为 "<<c;
    cout <<"该圆的直径为 "<<z<<endl;
    return 0;
}
