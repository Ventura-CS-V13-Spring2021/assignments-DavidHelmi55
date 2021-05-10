#include <iostream>
#include "coordinate.hpp"
using namespace std;

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
  x = yval;
  y = yval;
}

void Coordinate::printXY() const
{
  cout << "(" << X << "," << Y << ")" <<endl;
}