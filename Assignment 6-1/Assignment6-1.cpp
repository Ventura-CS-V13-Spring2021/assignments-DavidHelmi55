#include <iostream>
#include "IntegerArray.hpp"
using namespace std;


int main()
{
  srand(time(NULL));
  IntegerArray N;
  N.fillUp();
  N.printAll();
  cout << "Current length is: " << N.getLength() << endl;
  cout << "After sorting: \n";
  N.sortAsc();
  N.printAll();
  cout<<"Removing Last Element: "<<endl;
  N.removeLastelm();
  cout << "Current length is: " << N.getLength() << endl;
  N.printAll();
  return 0;
}