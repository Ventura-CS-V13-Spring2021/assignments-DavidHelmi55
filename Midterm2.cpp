#include<iostream>
#include<fstream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() 
{
  ofstream file("numbers.txt");
    
  srand((unsigned) time(0));
  int getRdnumr;
  for (int index = 0; index < 10; index++) 
  {
    getRdnum = (rand() % 50) + 1;
    file << getRdnum << endl;
  }
  


}