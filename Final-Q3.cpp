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
    name="";
    num_classes=0;
    class_List = NULL;
  }

  Student(const Student &st1)
  {
    cout<<"Copy constructor called\n";
    name = st1.name;
    num_classes = st1.num_classes;
    class_List = st1.class_List;
  }

  Student(string n, int num)
  {
    cout<<"Parameterized constructor called\n";
    name=n;
    num_classes=num;
    class_List = new string[num_classes];
        
    for(int i=0;i<num_classes;++i)
    {
      cout<<"Enter the course name: ";
      cin>>class_List[i];
    }
  }

  void get_input()
  {
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter number of enrolled courses: ";
    cin>>num_classes;
    class_List = new string[num_classes];
        
    for(int i=0;i<num_classes;++i)
    {
      cout<<"Enter the course name: ";
      cin>>class_List[i];
    }
  }

  void Print()
  {
    cout<<"Name: "<<name<<"\n";
    cout<<"Enrolled Courses: \n";
        
    for(int i=0;i<num_classes;++i)
    {
      cout<<class_List[i]<<"\n";
    }
  }