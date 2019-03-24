#include <iostream>
#include"gyt3.12.h"

using namespace std;

int main()

{
    a a1(10000);
    a a2(10);
    a1.in(10000);
    cout<<a1.getbalance()<<endl;
    a1.out(100000000);
    cout<<a1.getbalance()<<endl;
    a2.in(10);
    cout<<a2.getbalance()<<endl;
    a2.out(10);
    cout<<a2.getbalance();

}
