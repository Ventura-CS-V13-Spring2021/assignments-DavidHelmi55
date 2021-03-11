#include <iostream>
using namespace std;

int main()
{
	char c;
	//   int i =65;
	c = 65;
	while (c < 91)
	{
		cout << c << " ";
		if (c % 5 == 4)
			cout << " " << endl;
		c++;
	}
//   while (c < 91)
//   {
//       if (c % 5 == 4)
//       {
//           cout << c << " " << endl;
//       }
//       else
//       {
//           cout << static_cast<char>(i)<< " ";
//       }
        
//       i++;
        
//   }
}