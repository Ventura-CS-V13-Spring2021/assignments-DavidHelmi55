#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  srand(time(0));
  
  const int N = 10; 
  int numbers[N]; 

  int min = 0;
  int max = 99;
  int sum = 0;
  
  int random_number;
  float avg;

  for(int i = 0; i < N; ++i)
  {
    random_number = rand() % max + min;
    numbers[i] = random_number; 
  }
  cout<<"Random Generated Array Elements: ";

  for(int i = 0; i <= N; i++)
  {
    cout<<numbers[i]<<" ";
    sum = sum + numbers[i];
  }
  avg = (float) sum / N;

  cout<<endl<<"Sum of Random Generated Array Elements: "<<sum<<endl;
  cout<<"Average of Random Generated Array Elements: "<<avg;

  return 0;
}

