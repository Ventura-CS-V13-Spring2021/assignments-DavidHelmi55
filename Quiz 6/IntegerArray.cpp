#include "IntegerArray.hpp"
#include <stdlib.h>
using namespace std;

void IntegerArray::fillUp() 
{
  srand(time(0));
  arr.clear();
  for (int i = 0 ; i < 10 ; i++) 
  {
    int r = rand() % 100;
    arr.push_back(r);
  }
}
void IntegerArray::fillUp(int len) 
{
  if (len > 10) 
  {
    return;
  }
  srand(time(0));
  arr.clear();
  for (int i = 0 ; i < len ; i++) 
  {
    int r = rand() % 100;
    arr.push_back(r);
  }
}
void IntegerArray::addItem() 
{
  srand(time(0));
  if (arr.size() < 10) 
  {
    int r = rand() % 100;
    arr.push_back(r);
  }
  else 
  {
    return;
  }
}
void IntegerArray::sortArray(int flag) 
{
  if (flag == 0) 
  {
    sort(arr.begin(), arr.end());
  } 
  else if (flag == 1) 
  {
    sort(arr.begin(), arr.end(), greater<int>());
  }
}

int IntegerArray::getLength() 
{
  return arr.size();
}
int binarySearch(int arr[], int p, int r, int num) 
{
  if (p <= r) 
  {
    int mid = (p + r)/2;
    if (arr[mid] == num)
    return mid ;
    if (arr[mid] > num)
    return binarySearch(arr, p, mid-1, num);
    if (arr[mid] < num)
    return binarySearch(arr, mid+1, r, num);
  }
  return -1;
}

int IntegerArray::getPrimenumbers() 
{
  int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
  int sz = 25;
  int count = 0;
  for (int i = 0 ; i < arr.size() ; i++) 
  {
  if (binarySearch(primes,0,sz-1,arr[i]) >= 0) 
  {
    count+=1;
  }
}
return count;
}

void IntegerArray::printAll() 
{
  for (int i = 0 ; i < arr.size() ; i++) 
  {
    cout<<arr[i]<<" ";
  }
cout<<endl;
}