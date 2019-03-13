#include <iostream>

using namespace std;

int main()
{
    int x=0;
    int y=0;
    cout << "请输入两个整数  ";
    cin >> x >> y ;
    if(x>y)
    cout << "x is large";
    if(x<y)
    cout <<"y is large";
    if(x=y)
        cout<<"These number is equal";


    return 0;
}
