#include<iostream>
#include<fstream>
using namespace std;

int second()
{
  int num;
  int count;
  int sum;
  int min;
  int max;
  float avg;
    
  ofstream file("data.txt");
    
  file>>num;
  while(!file.eof())
  {
    count++;
    sum=sum+num;
        
    if(num>max)
    {
      max=num;
    }    
      if(num<min)
      {
        min=num;
      }
      file>>num;
    }
    
  file<<"Total # of integers: "<<count<<endl;
  file<<"Min: "<<min<<endl;
  file<<"Max: "<<max<<endl;
  file<<"Sum:"<<sum<<endl;
  avg=sum/count;
  file<<"Average: "<<avg<<endl;
    
  file.close();
}