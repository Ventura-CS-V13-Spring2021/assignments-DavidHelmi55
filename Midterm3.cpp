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
    
  srand((unsigned) time(0));
  int getRdnum;
  for (int index = 0; index < 3; index++) 
  {
    getRdnum = (rand() % 9) + 1;
    cout << getRdnum << endl;
  }
  
  
}