#include <iostream>
#include "coordinate.hpp"
#include "rectangle.hpp"
using namespace std;

Rectangle::Rectangle()
{
  Coordinate a;
  Coordinate b;
  setLBRT(a,b);
}

Rectangle::Rectangle(Coordinate lbval, Coordinate rtval)
{
  setLBRT(lbval, rtval);
}

Coordinate Rectangle::getLB() const
{
  
}