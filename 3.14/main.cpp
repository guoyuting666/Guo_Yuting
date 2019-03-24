#include<iostream>
#include<string>
using namespace std;
class employee
{
    private:
    string employeename;
    string employeelastname;
    int employeepay;

public:
     employee (string name, string lastname,int pay)
  {
      employeename=name;
      employeelastname=lastname;
      employeepay=pay<0?0:pay;
  }
    string getemployeename()
    {
        return employeename;
    }

    string getemployeelastname()
    {
        return employeelastname;
    }

    int getemployeepay()
    {
        return employeepay;
    }
    void setemployeename(string name)
    {
        employeename=name;
    }
    void setemployeelastname(string lastname)
    {
        employeelastname=lastname;
    }
    void setemployeepay(int pay)
    {
        employeepay=pay<0?:pay;
    }

};
int main()
{

    employee man1("guo","yuting",99999),man2("huang","zhenyang",1500);
    cout<<man1.getemployeename()<<','<<man1.getemployeelastname()<<','<<man1.getemployeepay()*12<<endl;
    cout<<man2.getemployeename()<<','<<man2.getemployeelastname()<<','<<man1.getemployeepay()*12<<endl;
    cout<<man1.getemployeename()<<','<<man2.getemployeelastname()<<','<<man1.getemployeepay()*1.1<<endl;
    cout<<man2.getemployeename()<<','<<man2.getemployeelastname()<<','<<man2.getemployeepay()*1.1<<endl;
return 0;








}
