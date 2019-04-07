#include <iostream>

using namespace std;
int x=0;
int counter=0;
int p=0;
int k=0;
int m=0;
int i;
int main()
{
    while (x!=5)
    {
      cin >> x ;
      m=x;
    }
    cout << "已确认执行" << endl;
        for (counter=0;counter<5;counter++)
        {
            cin >> p ;
            k=k+p;
        }
        cout << "k = " << k << endl;
    return 0;
}
