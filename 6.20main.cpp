#include <iostream>
#include <cmath>
using namespace std;
int mult (int x1,int x2)
{
    int yushu;
    yushu=x1%x2;
    return yushu;
}
int main()
{
    cout << "����������������Ϸ�ɣ��ף����������������������������ǲ��ǳɱ�����ϵ"<<endl;
    cout << "����ɱ�����ϵ�����ʤ���������һ�ʤ��" << endl;
    int x=0;
    int y=0;
    int z=0;
    cout << "�ף�����������������";
    cin >> x >> y;
    z=mult(x,y);
    if (z==0)
        cout << "��ϲ������";
    else
        cout << "�´�Ŭ����";
    return 0;
}
