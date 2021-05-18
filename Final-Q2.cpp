#include <iostream>
using namespace std;

int main()
{
  int arr[]={-12, 3, -12, 4, 1, 1, -12, 1, -1, 1, 2, 3, 4, 2, 3, -12};
  int i;
  int j;
  int temp;
    
  int n = sizeof(arr)/sizeof(arr[0]);

  for (i = 0; i < n; ++i)
  {
    for (j = i + 1; j < n; ++j)
    {
      if (arr[i] < arr[j])
      {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }