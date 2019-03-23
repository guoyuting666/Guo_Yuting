
#include<iostream>
#include<string>
using namespace std;
class gradebook
{
public:
    explicit gradebook(string,string);

void setteachername(string name);
string getteachername()const;
void displaymessage () const;

void setcoursename(std::string);
string getcoursename()const;
private:
    std::string coursename;
    std::string teachername;
};


