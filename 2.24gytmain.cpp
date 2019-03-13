#include <iostream>

using namespace std;

int main()
{
    int x=0;
    int y=0;

    cout<<"请输入一个整数 ";
    cin>>x;
    y=x%2;
    if(y==1)
        cout<<"这是一个奇数 ";
    if(y==0)
        cout<<"这是一个偶数 ";
    return 0;
}
