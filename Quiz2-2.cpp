#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;

int main()
{
  srand(time(0));
  int N;
  
  cout<<"How many integers would you like?: ";
  cin>>N;

  int i;
  for(i=0;i<N;i++)
  {
    cout<<rand()%99<<endl;
  }
}