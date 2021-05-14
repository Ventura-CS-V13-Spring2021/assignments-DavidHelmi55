#include <iostream>
using namespace std;
#include "coordinate.hpp"

Coordinate::Coordinate() 
{
  setXY(0,0);
}

Coordinate::Coordinate(double xval, double yval) 
{
  setXY(xval, yval);
}

int Coordinate::getX() const 
{
  return x;
}

int Coordinate::getY() const 
{
  return y;
}

void Coordinate::setXY(double xval, double yval) 
{
  x = xval;
  y = yval;
}

void Coordinate::printXY() const
{
  cout << "(" << x << "," << y << ")";
}