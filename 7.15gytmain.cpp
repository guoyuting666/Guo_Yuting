#include <iostream>
#include <array>
using namespace std;
const size_t rows=2;
const size_t columns=3;
void printarray(const array<array<int,columns>,rows>&);
int main()
{
    array < array <int ,columns>,rows>array1={1,2,3,4,5,6};
    printarray(array1);
    cout << "���ֵ����з�ʽ��������ʼ��˳��" << endl;
}
void printarray(const array<array<int,columns>,rows>&a)
{
    for (auto const &row :a)
    {
        for (auto const &element : row )
            cout << element << " ";
        cout << endl;
    }
}
