#include <iostream>
#include <stdlib.h>

using namespace std;

const int N = 10;
double n[N];

void makearray(double n[], int N)
{
  int i;
  for (i = 0; i < N; i++)
  {
    n[i] = (double)rand() / RAND_MAX * 100;
  }
}

void printarray(double n[], int N)
{
  cout << "Elements in array:" <<endl;
  for (int i = 0; i < N; i++)
  {
    cout<<n[i]<<" ";
  }
  cout << endl << endl;
}

int outOfOrder(double n[], int N)
{
  int index = 0,flag = 0;
  for (int i = 0; i < N-1; i++)
  {
    if(!(n[i] <= n[i+1]))
    {
      flag = 1;
      index = i+1;
      break;
    }
  }
  if(index == 0 && flag == 0)
  {
    return -1;
  }else
    {
      return index;
    }
}

void findminmax(double n[], int N)
{
  double min = INT_MAX;
  double max = INT_MIN;
  for (int i = 0; i < N; i++)
  {
    if(n[i]<min)
    {
      min = n[i];
    }if(n[i] > max)
    {
      max = n[i];
    }
  }
  cout <<"Minimun Element: " << min << endl;
  cout <<"Maximum Element: " << max << endl;
}

int main()
{
  makearray(n, N);
  printarray(n,N);

  int ans = outOfOrder(n,N);
  if(ans == -1)
    cout << "Elements are not out of order." << endl;
  else
    cout << "Elements are out of order at: " << ans << endl;
    
  findminmax(n,N);

  return 0;
}