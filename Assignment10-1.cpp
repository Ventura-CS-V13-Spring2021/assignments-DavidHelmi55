#include <iostream>
using namespace std;

class student
{
  public:
    string name;
    int numClasses;
    vector<string>classList;
    student()
    {
      name="",
      numClasses=0;
    }
    ~Student()
    {
      name;
      numClasses;
      classList;
    }
    void setName(string n)
    {
      name = n;
    }
    void setNumClasses(int sum)
    {
      numClasses = num;
    }
    string getName()
    {
      return name;
    }
    int getNumClasses()
    {
      return numClasses;
    }
    void input()
    {
      string name;
      int num;
      cout << "Enter student name: ";
      cin >> name;
      setName(name);
      cout << "Enter number of classes: "
      cin >> num;
      cout << "Enter class names (Type end to stop): ";
      string className;
      while(true)
      {
        cin>>className;
        if(className == "end")
          break;
        classList.push_back(className);
      }

    }
    void show_info()
    {
      cout<<"Name of student: " << getName() << "\n";
      cout<<"List of classes: \n";
      for(int i=0;i<classList.size();i++)
        cout << classList[i] << "\n";
    }
    void operator = (const Student &s)
    {
      name = s.name;
      numClasses = s.numClasses;
      classList = s.classList;
    }
    void reset()
    {
      setNumClasses(0);
      classList.empty();
    }
};

int main()
{
  Student s1;
  s1.input();
  s1.show_info();

  Student s2;
  s2.input();
  s2.show_info();
  s1 = s2
  s1.show_info();
}