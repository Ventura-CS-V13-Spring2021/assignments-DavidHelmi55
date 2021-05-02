#include<iostream>
#include<fstream>
#include<cstdlib>
#include<ctime>
using namespace std;

int getRdnum()
{
  return rand()%10;
}


int findMin(int num1, int num2, int num3)
{
  if(num1<=num2 && num1<=num3)
  {
    return num1;
  }
  if(num2<=num1 && num2<=num3)
  {
    return num2;
  }
  return num3;
}


int findMax(int num1, int num2, int num3)
{
  if(num1>=num2 && num1>=num3)
  {
    return num1;
  }
  if(num2>=num1 && num2>=num3)
  {
    return num2;
  }
  return num3;
}


int getDifference(int num1, int num2, int num3)
{
  return findMax(num1, num2, num3)-findMin(num1, num2, num3);
}


void fileWrite(int difference)
{
  ofstream file("question3.txt",ios::app);
  file<<difference<<endl;
  file.close();
}

int main()
{
  ofstream file("question3.txt");
  file.close();
    
  srand(time(NULL));
  int num1;
  int num2; 
  int num3;
  int min;
  int max;
  int diff=0;
    
  while(diff>=3);
  {
    num1=getRdnum();
    num2=getRdnum();
    num3=getRdnum();
        
    min=findMin(num1, num2, num3);
    max=findMax(num1, num2, num3);
    diff=getDifference(num1, num2, num3);
                
    cout<<"All: "<<num1<<", "<<num2<<", "<<num3<<endl;
    cout<<"Min: "<<min<<", Max: "<<max<<endl;
    cout<<"Difference between min and max: "<<diff<<endl;
                
    fileWrite(diff);    
  }
  return 0;
}