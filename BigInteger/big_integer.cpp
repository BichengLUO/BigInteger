#include "big_integer.h"
#include <iomanip>

BigInteger BigInteger::operator+(const BigInteger &a)
{
	BigInteger result;
	int add_in = 0;
	for (int i = 0; i < digits.size() + 1 || i < a.digits.size() + 1; i++)
	{
		int d1 = i < digits.size() ? digits[i] : 0;
		int d2 = i < a.digits.size() ? a.digits[i] : 0;
		int d3 = d1 + d2 + add_in;
		result.digits.push_back(d3 % DIGIT);
		add_in = d3 / DIGIT;
	}
	while (result.digits[result.digits.size() - 1] == 0)
		result.digits.pop_back();
	return result;
}

BigInteger BigInteger::operator*(const BigInteger &a)
{
	BigInteger result;
	result.digits.assign(digits.size() + a.digits.size() + 1, 0);
	int add_in = 0;
	for (int i = 0; i < digits.size(); i++)
	{
		for (int j = 0; j < a.digits.size(); j++)
		{
			int d3 = digits[i] * a.digits[j];
			result.digits[j + i] += d3 % DIGIT;
			result.digits[j + i + 1] += d3 / DIGIT;
		}
	}
	while (result.digits[result.digits.size() - 1] == 0)
		result.digits.pop_back();
	return result;
}

std::ostream& operator<<(std::ostream &out, const BigInteger &a)
{
	if (a.digits.size() > 0)
	{
		out << a.digits[a.digits.size() - 1];
		for (int i = a.digits.size() - 2; i >= 0; i--)
		{
			out << std::setfill('0') << std::setw(3) << a.digits[i];
		}
	}
	return out;
}