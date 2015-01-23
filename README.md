BigInteger
==================
BigInteger is a class implemented in C++ which support high precision operations between integers.

Simply adding BigInteger.cpp and BigInteger.h to your project, you can invoke the functionality like this:
	BigInteger a(0);
	for (int i = 1; i <= n; i++)
	{
		BigInteger b(i);
		b = b * b;
		a = a + b;
		std::cout << a << std::endl;
	}
