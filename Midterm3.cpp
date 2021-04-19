#include<iostream>
#include<fstream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() 
{
  ofstream file("question3.txt");
  
  int num1;
  int num2;
  int num3;
  int difference;
    
  num1 = rand() % 10;
  num2 = rand() % 10;
  num3 = rand() % 10;
  
  if (num1 > num2)
  {
    if (num1 > num3)
      cout << "num1 is the largest, " << num1 << endl;
    else
      cout << "num2 is the largest, " << num2 << endl;
  }
    else{
        if (num2 > num3)
          cout << "num2 is the largest, " << num2 << endl;
    else
          cout << "num3 is the largest, " << num3 << endl;
    }
     
  if (num1 < num2 && num1 < num3)
  {
    cout << "num1 is the smallest, " << num1 << endl;
  }
  else if (num2 < num1 && num2 < num3)
  {
    cout << "num2 is the smallest, " << num1 << endl;
  }
  else
  {
    cout << "num3 is the smallest, " << num1 << endl;
  }
  return 0;
}