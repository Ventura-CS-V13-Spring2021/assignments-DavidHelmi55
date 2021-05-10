#pragma once
#include <stdlib.h>
using namespace std;  

class IntegerArray 
{
  private:
    vector<int> arr;
  public:
    void fillUp();
    void fillUp(int);
    void addItem();
    void sortArray(int);
    int getLength();
    int getPrimenumbers();
    void printAll();
};