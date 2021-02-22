#include <iostream>
using namespace std;
int main()
{
    int number1, number2, number3;
    cout << "Enter three integer values : " ;
    cin >> number1 >> number2 >> number3 ;
     
    if (number1 == number2 && number1 == number3)
        cout << "All numbers are the same";
    else if (number1 == number2)
        cout << "number1 is equal to number2";
    else if (number1 == number3)
        cout << "number1 is equal to number3";
    else if (number2 == number3)
        cout << "number2 is equal to number3";
    else
        cout << "None of the numbers are the same";
    return 0;
}