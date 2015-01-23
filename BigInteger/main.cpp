#include <iostream>
#include "big_integer.h"

int main()
{
	BigInteger a = 0;
	int n = 10000;
	for (int i = 1; i <= n; i++)
	{
		BigInteger b = i;
		b *= b;
		a += b;
		std::cout << a << "\n";
	}
	const char *c = "92804912830912830128301928301928309182409832094281029381912038192";
	BigInteger d(c, strlen(c));
	std::cout << c << "\n";
	return 0;
}