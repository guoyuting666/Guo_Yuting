#include <iostream>

using namespace std;

int main()
{
    double x=0;
    double y=0;
    double z=0;
    double s=x+y;
    double c=x-y;
    cin >> x;
    cin >> y;
    cin >> z;
    if (s>z&&c<z)

        cout << "zheshiyigesanjiaoxing" << endl;
    else
        cout <<"zhebi=ushiyigesanijaoxing"<<endl;
    return 0;
}
