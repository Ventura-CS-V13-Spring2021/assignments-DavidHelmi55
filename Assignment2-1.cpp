#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int number1, number2, number3;
    cout << "Enter three integer values : " ;
    cin >> number1 >> number2 >> number3 ;
     
    if (number1 > number2)
    {
        if (number1 > number3)
            cout << "number1 is the largest, " << number1 << endl;
        else
            cout << "number2 is the largest, " << number2 << endl;
    }
    else{
        if (number2 > number3)
            cout << "number2 is the largest, " << number2 << endl;
        else
            cout << "number3 is the largest, " << number3 << endl;
    }
     return 0;
}