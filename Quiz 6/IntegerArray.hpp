#ifndef INTEGERARRAY_H
#define INTEGERARRAY_H

class IntegerArray
{
private:
  static const int N = 10;
  int numbers[N];
  int length = 0;

public:
  int getLength(void) const;
  void sortArray(void);
  void fillUp(void);
  void getPrimenumber(void) const;
  void printAll(void) const;
};

//for this part of the code I reffered to what I did in assignment 6-1 but I needed to add a new member function and change in the order in which they are listed.