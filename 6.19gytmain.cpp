#include <iostream>
#include <cmath>
using namespace std;
double hypo (double zhibian1,double zhibian2)
{

    double hypo1=0;
    double pingfanghe1=0;
    double pingfanghe2=0;
    pingfanghe1=zhibian1*zhibian1;
    pingfanghe2=zhibian2*zhibian2;
    hypo1=pingfanghe1+pingfanghe2;
    return hypo1;
}
int main()
{
    double cnm;
    double x,y;
    double hypo1;
    cout << "输入两个直角边" << endl;
    cin >> x >> y;
    hypo1=hypo(x,y);
    cnm=sqrt ( hypo1);
    cout << "第三边为 " << cnm << endl;
    return 0;
}
