#include <iostream>
#include <stdlib.h>

using namespace std;

void makearray(int n[ ], int N);
void printarray(int n[ ], int N);
void findminmax(int n[ ], int N);

int main() 
{
  const int N=10;
  int numbers[N];
  makearray(numbers,N);
  printarray(numbers,N);
  findminmax(numbers,N);
  return 0;
}

void makearray(int n[], int N){
    for(int i=0;i<N;i++){
        n[i]=rand() % 100; 
    }
}
void printarray(int n[], int N){
    
    cout<<"Array generated is :\n";
    for(int i=0;i<N;i++){
        cout<<n[i]<<"\n";
    }
}
void findminmax(int n[], int N){
    int min=n[0];
    int max=n[0];
    for(int i=0;i<N;i++){
        if(n[i]<min){
            min=n[i];
        }
        if(n[i]>max){
            max=n[i];
        }
    }
    cout<<"\n Minimum value is " << min;
    cout<<"\n Maximum value is " << max;
}