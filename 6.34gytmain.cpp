#include<iostream>
#include<ctime>
#include<iomanip>
#include<cstdlib>
using namespace std;
int main()
{
    int s=0;
    int c=0;
    s=1+rand()%1000;
    c=s;
    int x=0;
    cout <<"i have a number between 1 and 1000"<<endl;
    cout  <<"canyou guess the number"<<endl;
    cout <<"please type your first guess"<<endl;
    while (x!=c )
    {
        cin>>x;
        if (x<c)
        {
            cout <<"too low try again"<<endl;
        }
        if (x>c)
        {
            cout <<"too large try again "<<endl;
        }
    }
    if (c==x)
        cout << "excellent you guess the number"<<endl;
}


