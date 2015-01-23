BigInteger
==================
BigInteger is a class implemented in C++ which support high precision operations between integers.

Simply adding BigInteger.cpp and BigInteger.h to your project, you can invoke the functionality like this:
```C++
BigInteger a = 0;
for (int i = 1; i <= n; i++)
{
	BigInteger b = i;
	b *= b;
	a += b;
	std::cout << a << std::endl;
}
```
> **Note:**
> - Besides `int`, `short`, `long`, `long long` and so on, BigInteger is also capable to accept string initialization like this:
```C++
const char *c = "92804912830912830128301928301928309182409832094281029381912038192";
BigInteger d(c, strlen(c));
```
