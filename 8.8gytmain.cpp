//耶律阿廷机 2019/4/30 15:42:48
#include <iostream>

using namespace std;
int main()
{
    int size=5;
    unsigned int values[size]={2,4,6,8,10};
    unsigned int *vptr;

    cout <<"编号"<<" ------ "<<"相应值"<<endl;
    for (size_t i=1;i<=4;i++)
    {
        cout <<"---" << i << " ------ " << values[i]<<endl;
    }
    vptr=values;
    vptr=&values[0];
    cout <<"编号"<<" ------ "<<"相应值"<<endl;
    for (size_t j=0; j<size; ++j)
    {
        cout << *(vptr+j)<< "";
    }
    cout <<"编号"<<" ------ "<<"相应值"<<endl;
    for (size_t k=0;k<size; ++k)
    {
        cout <<*(values+k) <<"";
    }
    cout <<"编号"<<" ------ "<<"相应值"<<endl;
    for (size_t m=0;m<size;++m)
    {
        cout <<vptr[m]<<"";
    }
    values[4]
    *(values+4)
    vptr[4]
    *(vptr+4)
}
