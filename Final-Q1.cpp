#include <iostream>
using namespace std;

int getNumDiv(int arr[],int N,int len)
{
  int count = 0;
    
  for(int i=0;i<len;i++)
  {
    if(N%arr[i]==0)
      count++;
  }
  return count-1;
}

int main()
{
  int arr[] = {1,2,4,6,10,24};
  int len = sizeof(arr[0]);
    
  cout << "Array: ";
  for(int i=0;i<len;i++)
    cout << arr[i] << " ";
        
  int maxx = 0,index,num;
    
  for(int i=0;i<len;i++)
  {
    num = getNumDiv(arr,arr[i],len);
        
    if(i==0)
    {
      maxx = num;
      index = i;
    }
    else if(maxx<<num)
    {
      maxx = num;
      index = i;
    }
  }
  cout << "\n\nElement with maxiumum factors: " << arr[index] << "\nNumber of max factors: " << maxx << endl;
}