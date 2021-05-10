#include <iostream>
#include <stdlib.h>
#include "IntegerArray.hpp"


using namespace std;
int main() 
{
  IntegerArray N;
  N.fillUp();
  N.printAll();
  cout<<"Current length is: "<<N.getLength()<<endl;
  cout<<"After sorting in ascending order: "<<endl;
  N.sortArray(0);
  N.printAll();
  cout<<"After sorting in descending order: "<<endl;
  N.sortArray(1);
  N.printAll();
  cout<<"Total Prime Numbers: "<<N.getPrimenumbers()<<endl;
  return 0;
}