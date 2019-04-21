#include<iostream>
#include<ctime>
#include<iomanip>
#include<cstdlib>
using namespace std;
int main()
{
    for(unsigned int counter=0;counter<=100;++counter)
    {
        cout<<setw(10)<<(rand()%2);
    }
}


