#include<bits/stdc++.h>
using namespace std;

class Student
{
  public:
  string name;
  int num_classes;
  string* class_List;

  Student()
  {
    cout<<"Default constructor called\n";
    name=" ";
    num_classes=0;
    class_List = NULL;
  }