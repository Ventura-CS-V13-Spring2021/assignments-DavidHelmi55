#ifndef INTEGERARRAY_H
#define INTEGERARRAY_H

class IntegerArray
{
  private:
    static const int N = 10;
    int numbers[N];
    int length = 0;
  public:
    int getLength();
    int getLastelm();
    void printAll();
    void fillUp();
    void sortAsc();
    void removeLastelm();
    void appendElement(int v);
};
#endif