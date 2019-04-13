#include <iostream>
#include <cmath>
using namespace std;
int ise( int x)
{
    int y;
    y=x%2;

 return y;
}
int main()
{
    int z;
    int x;
    int y;
    cout << "输入任意一大于0的数开始执行，输入任意小鱼0的数关闭程序"<<endl;
    cout << "执行中输入任意小于等于0的数退出程序"<<endl;
    cout << "turn 代表是偶数 false则为奇数"<<endl;
    cin >> z;
while (z>0)
{
    cin >> x;
    y=ise(x);
    z=x;
    if (y==1)
        cout << "false" << endl;
    else
        cout << "ture" << endl;
}
    return 0;
}
