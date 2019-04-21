#include <iostream>
#include <cmath>
using namespace std;
int x=0;
int y=0;
int main()
{
    cin >> x ;
    cin >> y ;
    int q,w,e,r,t,u,i,o,p,a,s,d;
    q=fmod(x,y);
    w=log(x);
    e=log10(x);
    r=pow(x,y);
    t=sin(x);
    s=sqrt(x);
    u=tan(x);
    i=ceil(x);
    o=cos(x);
    p=exp(x);
    a=fabs(x);
    d=floor(x);
    cout<<q<<w<<e<<r<<t<<u<<i<<o<<p<<a<<s<<d<<endl;
    return 0;
}
