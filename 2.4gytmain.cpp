#include <iostream>//计算三个数的乘积

using namespace std;

int main()
{
    int x=0;
    int y=0;
    int z=0;
    int result=0;
    cout << "Enter three integers: ";
    cin>>x>>y>>z;
    result=x*y*z;
    cout <<"the product is "<<result<<endl;
    return 0;
}
