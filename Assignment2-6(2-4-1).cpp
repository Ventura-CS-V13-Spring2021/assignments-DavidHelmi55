#include<iostream>
#include<fstream>
#include<cstdlib>
#include<time.h>
using namespace std;

int main()
{
  srand(time(0));
  int N;

  ofstream file("data.txt");
  
  cout<<"How many integers would you like?: ";
  cin>>N;

  int i;
  for(i=0;i<N;i++)
  {
    file<<rand()%100<<endl;
  }
  file.close();
}