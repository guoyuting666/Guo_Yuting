#ifndef GYT3_12_H_INCLUDED
#define GYT3_12_H_INCLUDED
#include<iostream>
#include<string>
using namespace std;

class a
{
public:
    explicit a(int );

    void in(int);
    void out(int);


    int getbalance ();
    void setgetbalance (int);


private:
    int money;
};



#endif // GYT3_12_H_INCLUDED
