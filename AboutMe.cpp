//
//  Student.cpp
//  Student
//
//  Created by rick Gessner on 3/23/22.
//

#include "AboutMe.hpp"

namespace ECE17 {

  
//update the following class to reflect your information...
  AboutMe::AboutMe() :
    name{"Pablo Valdez Diaz"}, pid{"A17122039"}, years_at_ucsd{1} {
    //other initializers would go here...
  }
  
  AboutMe::AboutMe(const AboutMe &aStudent) {
    *this=aStudent;
  }
  
  AboutMe& AboutMe::operator=(const AboutMe &aStudent) {
    name=aStudent.name;
    pid=aStudent.pid;
    years_at_ucsd=aStudent.years_at_ucsd;
    return *this;
  }
          
  bool AboutMe::operator==(const AboutMe &aStudent) const {
    return false;
  }

  const std::string& AboutMe::getPID() const {return pid;}
  const std::string& AboutMe::getName() const {return name;}

}
