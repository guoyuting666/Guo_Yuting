
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<string>
class employee
{
    public:
        employee(const std::string&,const std::string&,const std::string&);
        virtual ~employee(){}
        void setfirstname(const std ::string&);
        std::string getfirstname()const;
        void setlastname(const std::string&);
        std::string getlastname()const;
        void setsocialsecuritynumber()const;
        std::string setsocialsecuritynumber()const;
        virtual double earnings()const=0;
        virtual void print() const;
    private:
        std::string firstname;
        std::string lastname;
        std::string socialsecuritynumber;
};

#endif // EMPLOYEE_H

