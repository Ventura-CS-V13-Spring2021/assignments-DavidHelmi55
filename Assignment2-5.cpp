#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int num,i;
  int range1, range2;

  cout << "Enter the range to check for prime numbers: ";
  cin >> range1 >> range2;

  for(num=range1; num<=range2; num++)
  {
    for(i=2; i<num ; i++)
    {
      if(num %i==0)
      break;    
    }
    if ( i == num )
      cout << num << " is a prime number\n";
  }
}