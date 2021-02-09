#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  double celcius, fehrenheit;
  cout << "What is the temperature in celcius?\n";
  cin >> celcius;

  fehrenheit = celcius * 9/5 + 32;

  cout << celcius << " degrees in celcius is " << fehrenheit << " degrees in fehrenheit." << endl;
}