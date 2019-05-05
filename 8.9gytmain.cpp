#include <iostream>

using namespace std;

int main()
{
    long *longptr;
longptr=&value1;
cout <<"is "<<*longptr<<endl;
value2=*longptr;
cout <<"is "<<value2<<endl;
cout <<" "<<&value1<<endl;
cout <<" "<<longptr<<endl;
    cout << "Hello world!" << endl;
    return 0;
}
