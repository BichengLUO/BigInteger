#include <iostream>
#include "big_integer.h"

int main()
{
	BigInteger a(0);
	long long k = 0;
	int n = 10000;
	for (int i = 1; i <= n; i++)
	{
		BigInteger b(i);
		b = b * b;
		a = a + b;
		k += i * i;
		std::cout << a << "," << k << "\n";
	}
	return 0;
}