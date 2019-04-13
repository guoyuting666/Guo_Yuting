#include<iostream>
#include<string>
using namespace std;
int zhishu (int shu)
{
 int x=2;
 int y=0;
if(shu==2)
{y=1;}
if(shu==1)
{y=1;}
if(shu==3)
{y=1;}
if(shu!=1&&shu!=2&&shu!=3)
{
while (x<=9&&x>=2)
 {
   y=shu%x;
   x=x+1;
  if (y==0)
  break;
  if (y!=0)
    continue;
 }
}
   return y;
}
int main()
{
 int x=0;

  cin >> x;
int y;
y=zhishu(x);
if(y==0)
cout << "这不是一个质数" << endl;
if(y==1)
cout << "这是一个质数" << endl;
cout << 2 ;
int l=2;
while (l<=20000)
{
    y=zhishu(l);
    l=l+1;
    if(y==1)
        cout<<  l  ;
    if (y==0)
        continue;
}
return 0;
}
