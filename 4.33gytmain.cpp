#include <iostream>

using namespace std;
int x=0;
int y=0;
int z=0;
int p=0;
int q=0;

int main()
{
    cin >> x ;
    cin >> y ;
    cin >> z ;
    p=x+y;
    q=x-y;
    if (p>z&&q<z)
    {
        cout << "this is a sanjiaoxing " <<endl;
    }
    else
    {
        cout << "this is not a sanjiaoxing " << endl;
    }



    return 0;
}
