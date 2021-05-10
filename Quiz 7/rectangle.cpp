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
  return lb;
}

Coordinate Rectangle::getRT() const
{
  return lb;
}

double Rectangle::getArea()
{
  return area;
}

Coordinate Rectnagle::getCenter()
{
  return center;
}

void Rectangle::setLBRT(Coordinate lbval, Coordinate rtval)
{
  lb = lbval;
  rt = rtval;
  area = (rt.getX() - lbgetX()) * (rt.getY() - lb.getY());
  double c_x = (rt.getX() + lb.getX())/2;
  double c_y = (rt.getY() + lb.getY())/2;
  center.setXY(c_x,c_y);
}
