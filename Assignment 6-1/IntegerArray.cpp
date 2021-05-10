#include "IntegerArray.hpp"
#include <stdlib.h>
#include <iostream>
using namespace std;

int IntegerArray::getLength()
{
  return length;
}
int IntegerArray::getLastelm()
{
  if(length==0)
  {
    cout<<"No Element in the array!"<<endl;
    return -1;
  }
  return numbers[length-1];
}
void IntegerArray::printAll()
{
  if(length==0)
  {
    cout<<"No Element in the array!"<<endl;
  }
  else
  {
    cout<<"Elements in the array: "<<endl;
  for(int i=0;i<length;i++)
  {
    cout<<numbers[i]<<" ";
  }     
    cout<<endl;
  }
}
void IntegerArray::fillUp()
{
  length = N;
  for(int i=0;i<N;i++)
  {
    numbers[i] = (rand()%100) +1;
  }
}
void IntegerArray::sortAsc()
{
  if(length==0)
  {
    cout<<"No Element in the array!"<<endl;
  }
  int ind=0,jnd = 0,var=0;
  while(ind<length-1)
  {
    jnd=0;
    while(jnd<length-1-ind)
    {
    if(numbers[jnd+1]<numbers[jnd])
    {
    var = numbers[jnd];
    numbers[jnd] = numbers[jnd+1];
    numbers[jnd+1] = var;
    }
    jnd++;
    }
    ind++;
    }
}
void IntegerArray::removeLastelm()
{
  if(length!=0)
  {
    length--;
  }else
  {
    cout<<"No Element in the array!"<<endl;
  }
}
void IntegerArray::appendElement(int v)
{
  if(length==N)
  {
    cout<<"Element can't be appended, List is Full!"<<endl;
    return;
  }
    numbers[length]=v;
    length += 1;
}