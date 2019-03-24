#include"gyt3.12.h"

a::a(int number)
{
    setgetbalance(number);
}
void a::setgetbalance(int number)
{
    if(number<0)
    {
        money=0;
        cout<<"erorr";
    }
    else
    money=number;
}

int a::getbalance()
{
    return money;
}
void a::in(int number)
{
    money=money+number;
}

void a::out(int number)
{
    if(number>money)
    {
        cout<<"Óà¶î²»×ã"<<endl;
    }
    else
    {
        money=money-number;
    }
}

