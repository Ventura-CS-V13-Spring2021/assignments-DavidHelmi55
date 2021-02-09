#include <iostream>
#include <iostream>
using namespace std;

int main(){
  const double rateA = 15.00;
  const double rateB = 12.00;
  const double rateC = 9.00;

  int soldA, soldB, soldC;

  cout  << "How many Class A tickets were sold?" << endl;
  cin >> soldA;
  cout  << "How many Class B tickets were sold?" << endl;
  cin >> soldB;
  cout  << "How many Class C tickets were sold?" << endl;
  cin >> soldC;

  double revenueA = rateA * soldA;
  double revenueB = rateB * soldB;
  double revenueC = rateC * soldC;
  double total = revenueA + revenueB + revenueC;

  cout << "The stadium generated $" << fixed << setprecision(2) << showpoint << total << " for all the seats sold this game." << endl;

}
