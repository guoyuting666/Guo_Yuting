
//Ү�ɰ�͢�� 2019/4/11 18:20:03
#include <iostream>
#include <cmath>
using namespace std;
double huadaoshe(double huawen)
{
    double shewen;
    shewen=5*(huawen-32)/9;
    return shewen;
}
double shedaohua(double shewen)
{
    double huawen;
    huawen=shewen*9/5+32;
    return huawen;
}
int main()
{
    double huawen;
    double shewen;
    cin >> huawen;
    cin >> shewen;
    huawen=shedaohua(shewen);
    shewen=huadaoshe(huawen);
    cout <<" �����¶�Ϊ"<< shewen <<endl;
    cout <<" �����¶�Ϊ"<< huawen <<endl;
    double hua1=0;
    double she1=0;

    while(hua1<=100)
    {
    she1=huadaoshe(hua1);
    hua1=hua1+1;
    cout << "�����¶�" << hua1 << endl;
    cout << "�����¶�" << she1 << endl;
    }
    double she2=32;
    double hua2=0;
    while(she2>=32&&she2<=212)
    {
    hua2=shedaohua(she2);
    she2=she2+1;
    cout << "�����¶�" << she2 << endl;
    cout << "�����¶�" << hua2 << endl;
    }
    return 0;
}


