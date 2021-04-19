#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;

int main()
{
  ifstream file("students.txt");

  string name;
  int score1;
  int score2;
  int sum;
  int avg;
  
  sum = score1 + score2;
  avg = sum/2;

  while (file >> name >> score1 >> score2)
  {
    cout << "Student name:" << name << " Score 1:"<< score1 << " Score 2:" << score2 << "\n";
  }

}