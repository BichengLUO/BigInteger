#ifndef _BIG_INTEGER_H
#define _BIG_INTEGER_H

#include <vector>
#include <ostream>

#define DLEN 3
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
	BigInteger(const char *s, int length) :digits()
	{
		for (int i = 0; i * 3 < length; i++)
		{
			int k = 0;
			for (int j = 0; j < 3; j++)
			{
				k *= 10;
				int n = length - i * 3 + j - 3;
				int d = n >= 0 ? s[n] - '0' : 0;
				k += d;
			}
			digits.push_back(k);
		}
	}
	BigInteger operator+(const BigInteger &a) const;
	BigInteger operator*(const BigInteger &a) const;
	BigInteger operator+(long long i) const;
	BigInteger operator*(long long i) const;
	BigInteger& operator=(long long i);
	BigInteger& operator=(const BigInteger &a);
	BigInteger& operator+=(const BigInteger &a);
	BigInteger& operator+=(long long i);
	BigInteger& operator*=(const BigInteger &a);
	BigInteger& operator*=(long long i);
	friend std::ostream& operator<<(std::ostream &out, const BigInteger &a);
};

std::ostream& operator<<(std::ostream &out, const BigInteger &a);
#endif