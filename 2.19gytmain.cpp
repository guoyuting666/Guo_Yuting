#include <iostream>

using namespace std;

int main()
{
    int x=0;
    int y=0;
    int z=0;
    int sum=0;
    int average=0;
    int product=0;
    cout <<"Input three different integers ";
    cin >> x >> y >> z ;
    sum=x+y+z; average=(x+y+z)/3; product=x*y*z;
    cout<<"sum is "<<sum<<endl;
    cout<<"average is "<<average<<endl;
    cout<<"product is "<<product<<endl;
   if(x>y)
   if(x>z)
    cout<<"最大是 "<<x<<endl;
   if(y>x)
   if(y>z)
    cout<<"最大是 "<<y<<endl;
   if(z>y)
   if(z>x)
    cout<<"最大是 "<<z<<endl;
   if(y<x)
   if(y<z)
    cout<<"最小是 "<<y<<endl;
   if(x<y)
   if(x<z)
    cout<<"最小是 "<<x<<endl;
   if(z<y)
   if(z<x)
    cout<<"最小是 "<<z<<endl;

    return 0;
}
