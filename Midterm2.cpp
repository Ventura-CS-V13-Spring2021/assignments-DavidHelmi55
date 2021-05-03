#include<iostream>
#include<fstream>
#include<cstdlib>
#include<ctime>
using namespace std;

int prevNum = 51;

int getRdnum()
{
  srand((unsigned) time(0));
  int getRdnum;
  for (int index = 0; index < 10; index++) 
  {
    getRdnum = (rand() % 50) + 1;
  }
}

int isGreater(int n)
{
  int prevNum = 51;
  if(n > prevNum)
  return 1; 
  else
  return 0;
}

int main () 
{
  ofstream file("numbers.txt");
  file.open ("numbers.txt");
    
  int n;
  for(int i=0; i<n; i++)
  {
    int currentNum = getRdnum(); 
    int check = isGreater(currentNum);
    prevNum = currentNum; 
    if (check == 1)
      {
        file.write(currentNum);
      }
  }
  file.close(); 
  return 0;
}