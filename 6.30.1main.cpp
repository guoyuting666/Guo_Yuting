#include <iostream>

using namespace std;
int square ( int x)
{
   int q;
   int w;
   int e;
   int t;
   int y;
   int u;
   int sum;
   q=x/1000;
   t=x-q*1000;
   w=t/100;
   y=t-w*100;
   e=y/10;
   u=y-e*10;
   sum=u*1000+e*100+w*10+q;

   return sum;

}

int main()
{
    int b=0;
    int x;
    cin >> x ;
    b=square (x);
    cout << b;
    return 0;
}
