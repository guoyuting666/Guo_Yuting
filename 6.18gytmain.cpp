#include <iostream>

using namespace std;
int mi (int di,int zhi)
{
    int zhuan=1;
    while (zhi>0)
    {
        zhuan=zhuan*di;
        zhi=zhi-1;
    }
    return zhuan;
}
int main()
{
    int di;
    int zhi;
    int res;
    cin >> di >> zhi;
    res=mi(di,zhi);
    cout << "���Ϊ " << res << endl;
    return 0;

}
