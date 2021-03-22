#include <iostream>
using namespace std;
int main()
{
  int number1, number2, number3;
  cout << "Enter three integer values : " ;
  cin >> number1 >> number2 >> number3 ;
    
  if (number1 > 99 | number2 > 99 | number3 > 99)
    cout << "Enter a number less than 100 " << endl;
     
  if (number1 == number2 && number1 == number3)
    cout << number1;
  else if (number1 == number2)
    cout << "The duplicated numbers are " << number1;
  else if (number1 == number3)
    cout << "The duplicated numbers are " << number1;
  else if (number2 == number3)
    cout << "The duplicated numbers are " << number2;
  else
    cout << "There is no duplicated numbers";
  return 0;
}