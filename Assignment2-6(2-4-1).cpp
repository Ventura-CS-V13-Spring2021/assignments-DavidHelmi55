#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    
  ofstream file("employee.txt");

  int employees;
  int EmployeeID1, EmployeeID2, EmployeeID3;
  string EmployeeName1, EmployeeName2, EmployeeName3;
  string Department1, Department2, Department3;
  double Salary1, Salary2, Salary3;
    
  cout << "How many employees are there? ";
  cin >> employees;
    
  cout << "Enter all 3 eployyees ID's: ";
  cin >> EmployeeID1 >> EmployeeID2 >> EmployeeID3;
    
  cout << "Enter the employees names: ";
  cin >> EmployeeName1 >> EmployeeName2 >> EmployeeName3;
    
  cout << "Enter the employees departments: ";
  cin >> Department1 >> Department2 >> Department3;
  
  cout << "Enter the employees salary: ";
  cin >> Salary1 >> Salary2 >> Salary3;
    
  file.close();
}