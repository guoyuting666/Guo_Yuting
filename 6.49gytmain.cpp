#include <iostream>
#include <cmath>
using namespace std;
inline double circlrarea(const double side)
{
    return 3.14*side*side;
}
int main()
{
    double x;
    cout <<"shu ru ban jing"<<endl;
    cin>>x;
    cout <<"s= "<<circlrarea(x)<<endl;
    return 0;
}
