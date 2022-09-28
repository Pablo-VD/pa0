//
//  main.cpp
//  Student
//
//  Created by rick gessner on 3/23/22.
//  Modifier by vikash gilja on 9/21/22.
//

#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

#include "AboutMe.hpp"
#include "testing.hpp"

void forTest(size_t aCount, std::ostream &anOutput) {
  anOutput << "for " << aCount << "\n";
    //student -- add code here...
    for (int i = 0; i < aCount; i++)
        std::cout << "for " << i << "\n";


  
}

void whileTest(size_t aCount, std::ostream &anOutput) {
  anOutput << "while " << aCount << "\n";

  //student -- add code here...
  int i = 0;
  while (i != aCount) {
      std::cout << "while " << i << "\n";
      i++;
  }

}

void doWhileTest(size_t aCount, std::ostream &anOutput) {
  anOutput << "do " << aCount << "\n";

  //student -- add code here...
  int i = 0;
  do{
      std::cout << "do while " << i << "\n";
  }
  while(i < aCount);
}

int main(int argc, const char * argv[]) {

  if(argc>1) {
    
    std::string temp(argv[1]);
    ECE17::AboutMe theStudent;
    if("compile"==temp) {
      compileTest(theStudent);
    }
    else if("basic"==temp) {
      srand ((int)time(NULL));
      std::stringstream theOutput;
      forTest(rand() % 5, theOutput);
      whileTest(rand() % 10, theOutput);
      doWhileTest(rand() % 15, theOutput);
      basicTest(theOutput.str());
    }
  }
    
  return 0;
}
