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
    cout << "��������һ����0������ʼִ�У���������С��0�����رճ���"<<endl;
    cout << "ִ������������С�ڵ���0�����˳�����"<<endl;
    cout << "turn ������ż�� false��Ϊ����"<<endl;
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
