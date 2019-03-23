#include <iostream>
#include "gyt3.11.h"

using namespace std;

gradebook::gradebook(string name1,string name2)
  {
      setcoursename(name1);
      setteachername(name2);
  }
  void gradebook::setteachername(string name)
  {
    teachername=name;
  }
  void gradebook::setcoursename(string name)
  {
      coursename=name;
  }
  string gradebook::getteachername()const
  {
      return teachername;
  }
  string gradebook::getcoursename()const
  {
      return coursename;
  }
  void gradebook::displaymessage()const
  {
      cout<<"welcome to the grade book for \n"<<getcoursename()<<"\nthis course is present by : "<<getteachername()<<endl;
  }
