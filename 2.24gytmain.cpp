#include <iostream>

using namespace std;

int main()
{
    int x=0;
    int y=0;

    cout<<"������һ������ ";
    cin>>x;
    y=x%2;
    if(y==1)
        cout<<"����һ������ ";
    if(y==0)
        cout<<"����һ��ż�� ";
    return 0;
}
