#include<bits/stdc++.h>
using namespace std;
const int SIZE=10; 

void findMaxSum(int result[],int *numbers,int row,int col) 
{
  int maxm=INT_MIN;
  int sum=0;           

  for(int i=0;i<row;i++) 
  {
    sum=0;
    for(int j=0;j<col;j++)
    {
      sum=sum+*((numbers+i*col)+j); 
    }
    if(sum>maxm)
    {
      maxm=sum;
      int k=0;
      for(int j=0;j<col;j++)
      {
        result[k++]=*((numbers+i*col)+j);
      }
    }
  }
}

void findMaxElm(int result[],int *numbers,int row,int col)
{
  int k=0;
  for(int i=0;i<row;i++)
  {          
    int maxm=*((numbers+i*col));
    for(int j=0;j<col;j++)
    {
      maxm=max(maxm,*((numbers+i*col)+j)); 
    }
    result[k++]=maxm; 
  }
}


void findMaxVal(int result[],int *numbers,int row,int col)
{
  int k=0;
  int maxm=INT_MIN;
  int maxm_row;
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<col;j++)
    {
      if(maxm<*((numbers+i*col)+j))
      {
        maxm=*((numbers+i*col)+j);
        maxm_row=i;           
      }
    }
  }
  for(int j=0;j<col;j++)
  {
    result[k++]=*((numbers+maxm_row*col)+j);
  }     
}

int main()
{
  const int NUM_ROWS=6;
  const int NUM_COLS=5;
  int result[SIZE]={0};
  int numbers[NUM_ROWS][NUM_COLS]={{2,7,9,6,4},
                                  {6,1,8,10,4},
                                  {4,3,7,2,9},
                                  {9,9,0,3,1},
                                  {8,8,7,8,9},
                                  {1,2,1,2,3}};

  findMaxSum(result,(int *)numbers,NUM_ROWS,NUM_COLS);
  cout<<"The row values are:";
  for(int i=0;i<NUM_COLS;i++)
  cout<<setw(5)<<result[i];
  cout<<endl;

  findMaxElm(result,(int *)numbers,NUM_ROWS,NUM_COLS);
  cout<<"The Max values in the rows are:";

  for(int i=0;i<NUM_ROWS;i++)
  cout<<setw(5)<<result[i];
  cout<<endl;

  findMaxVal(result,(int *)numbers,NUM_ROWS,NUM_COLS);
  cout<<"The row that has the max value ";
  for(int i=0;i<NUM_COLS;i++)
  cout<<setw(5)<<result[i];
  cout<<endl;  
}