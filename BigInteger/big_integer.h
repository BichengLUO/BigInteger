#ifndef _BIG_INTEGER_H
#define _BIG_INTEGER_H

#include <vector>
#include <ostream>

#define DIGIT 1000

class BigInteger
{
private:
	std::vector<int> digits;
public:
	BigInteger() :digits(){}
	BigInteger(long long i) :digits()
	{
		while (i > 0)
		{
			int k = i % DIGIT;
			i /= DIGIT;
			digits.push_back(k);
		}
	}
	BigInteger operator+(const BigInteger &a);
	BigInteger operator*(const BigInteger &a);
	friend std::ostream& operator<<(std::ostream &out, const BigInteger &a);
};

std::ostream& operator<<(std::ostream &out, const BigInteger &a);
#endif