#include <iostream>
using namespace std;

int main()
{
	char c;

	c = 65;
	while (c < 91)
	{
		cout << c << " ";
		if (c % 5 == 4)
			cout << " " << endl;
		c++;
	}
}
