#include <iostream>
using namespace std;
#include "coordinate.hpp"
#include "rectangle.hpp"

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

Coordinate Rectangle::getCenter() 
{
  return center;
}

void Rectangle::setLBRT(Coordinate lbval, Coordinate rtval) 
{
  lb = lbval;
  rt = rtval;
  area = (rt.getX() - lb.getX())*(rt.getY() - lb.getY());

  double c_x = (rt.getX() + lb.getX())/2;
  double c_y = (rt.getY() + lb.getY())/2;
  center.setXY(c_x, c_y);
}

void Rectangle::printRectangle() const 
{
  cout << "Left bottom point: ";
  lb.printXY();
  cout << endl;
  cout << "Right Top point: ";
  rt.printXY();
  cout << endl;
  cout << "Center point: ";
  center.printXY();
  cout << endl;
  cout << "Area: " << area << endl;
}