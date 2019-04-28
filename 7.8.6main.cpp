
#include <iostream>
#include <iomanip>
#include <array>
using namespace std;
int main()
{
    array <double ,11> a;
    array <double ,99> w;
    for (int i=0;i<99;i++)
    {
        for (int j;j<99-i;j++)
        {
            if(w[j]>w[j+1])
            {
                double pre=w[j];
                w[j]=w[j+1];
                w[j+1]=pre;
            }
        }
    }
    for(size_t i=0;i<w.size();i++)
    {
        cout <<w[i]<<"";
    }
    cout << "max is " <<a[0]<<"min is " <<a[98];
    return 0;
}
