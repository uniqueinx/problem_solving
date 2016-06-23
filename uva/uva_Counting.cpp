/*
author: uniqueinx
uva: 10198 - Counting
*/
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <limits.h>
#include <stdlib.h>
using namespace std;

typedef int ELEM_TYPE;
typedef long long PRODUCT_TYPE;
static const ELEM_TYPE BASE = 1000000000;
static const ELEM_TYPE UPPER_BOUND = 999999999;
static const ELEM_TYPE DIGIT_COUNT = 9;
static const int powersOfTen[] = { 1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000 };
class InfInt
{
	friend std::ostream& operator<<(std::ostream &s, const InfInt &n);
	friend std::istream& operator>>(std::istream &s, InfInt &val);

public:
	/* some constants */
	static const InfInt zero;
	static const InfInt one;
	static const InfInt two;

	/* constructors */
	InfInt();
	InfInt(const char* c);
	InfInt(const std::string& s);
	InfInt(int l);
	/* assignment operators */
	const InfInt& operator=(const char* c);
	const InfInt& operator=(const std::string& s);
	const InfInt& operator=(int l);

	/* operations */
	InfInt operator+(const InfInt& rhs) const;

	/* relational operations */
	bool operator==(const InfInt& rhs) const;
	bool operator!=(const InfInt& rhs) const;
	bool operator<(const InfInt& rhs) const;
	bool operator<=(const InfInt& rhs) const;
	bool operator>(const InfInt& rhs) const;
	bool operator>=(const InfInt& rhs) const;
	/* string conversion */
	std::string toString() const;
private:
	static ELEM_TYPE dInR(const InfInt& R, const InfInt& D);
	static void multiplyByDigit(ELEM_TYPE factor, std::vector<ELEM_TYPE>& val);

	void correct(bool justCheckLeadingZeros = false, bool hasValidSign = false);
	void fromString(const std::string& s);
	void optimizeSqrtSearchBounds(InfInt& lo, InfInt& hi) const;
	void truncateToBase();
	bool equalizeSigns();
	void removeLeadingZeros();
	std::vector<ELEM_TYPE> val;
	bool pos;
};

const InfInt InfInt::zero = 0;
const InfInt InfInt::one = 1;
const InfInt InfInt::two = 2;

inline InfInt::InfInt() : pos(true)
{
	val.push_back((ELEM_TYPE) 0);
}

inline InfInt::InfInt(int l) : pos(l >= 0)
{
	if (!pos)
	{
		l = -l;
	}
	do
	{
		div_t dt = div(l, BASE);
		val.push_back((ELEM_TYPE) dt.rem);
		l = dt.quot;
	}
	while (l > 0);
}

inline InfInt::InfInt(const char* c)
{
	fromString(c);
}

inline InfInt::InfInt(const std::string& s)
{
	fromString(s);
}

inline const InfInt& InfInt::operator=(int l)
{
	pos = l >= 0;
	val.clear();
	if (!pos)
	{
		l = -l;
	}
	do
	{
		div_t dt = div(l, BASE);
		val.push_back((ELEM_TYPE) dt.rem);
		l = dt.quot;
	}
	while (l > 0);
	return *this;
}

inline const InfInt& InfInt::operator=(const char* c)
{
	fromString(c);
	return *this;
}

inline const InfInt& InfInt::operator=(const std::string& s)
{
	fromString(s);
	return *this;
}

inline InfInt InfInt::operator+(const InfInt& rhs) const
{
	InfInt result;
	result.val.resize(val.size() > rhs.val.size() ? val.size() : rhs.val.size(), 0);
	for (size_t i = 0; i < val.size() || i < rhs.val.size(); ++i)
	{
		result.val[i] = (i < val.size() ? (pos ? val[i] : -val[i]) : 0) + (i < rhs.val.size() ? (rhs.pos ? rhs.val[i] : -rhs.val[i]) : 0);
	}
	result.correct();
	return result;
}

inline bool InfInt::operator==(const InfInt& rhs) const
{
	if (pos != rhs.pos || val.size() != rhs.val.size())
	{
		return false;
	}
	for (int i = (int) val.size() - 1; i >= 0; --i)
	{
		if (val[i] != rhs.val[i])
		{
			return false;
		}
	}
	return true;
}

inline bool InfInt::operator!=(const InfInt& rhs) const
{
	if (pos != rhs.pos || val.size() != rhs.val.size())
	{
		return true;
	}
	for (int i = (int) val.size() - 1; i >= 0; --i)
	{
		if (val[i] != rhs.val[i])
		{
			return true;
		}
	}
	return false;
}

inline bool InfInt::operator<(const InfInt& rhs) const
{
	if (pos && !rhs.pos)
	{
		return false;
	}
	if (!pos && rhs.pos)
	{
		return true;
	}
	if (val.size() > rhs.val.size())
	{
		return pos ? false : true;
	}
	if (val.size() < rhs.val.size())
	{
		return pos ? true : false;
	}
	for (int i = (int) val.size() - 1; i >= 0; --i)
	{
		if (val[i] < rhs.val[i])
		{
			return pos ? true : false;
		}
		if (val[i] > rhs.val[i])
		{
			return pos ? false : true;
		}
	}
	return false;
}

inline bool InfInt::operator<=(const InfInt& rhs) const
{
	if (pos && !rhs.pos)
	{
		return false;
	}
	if (!pos && rhs.pos)
	{
		return true;
	}
	if (val.size() > rhs.val.size())
	{
		return pos ? false : true;
	}
	if (val.size() < rhs.val.size())
	{
		return pos ? true : false;
	}
	for (int i = (int) val.size() - 1; i >= 0; --i)
	{
		if (val[i] < rhs.val[i])
		{
			return pos ? true : false;
		}
		if (val[i] > rhs.val[i])
		{
			return pos ? false : true;
		}
	}
	return true;
}

inline bool InfInt::operator>(const InfInt& rhs) const
{
	if (pos && !rhs.pos)
	{
		return true;
	}
	if (!pos && rhs.pos)
	{
		return false;
	}
	if (val.size() > rhs.val.size())
	{
		return pos ? true : false;
	}
	if (val.size() < rhs.val.size())
	{
		return pos ? false : true;
	}
	for (int i = (int) val.size() - 1; i >= 0; --i)
	{
		if (val[i] < rhs.val[i])
		{
			return pos ? false : true;
		}
		if (val[i] > rhs.val[i])
		{
			return pos ? true : false;
		}
	}
	return false;
}

inline bool InfInt::operator>=(const InfInt& rhs) const
{
	if (pos && !rhs.pos)
	{
		return true;
	}
	if (!pos && rhs.pos)
	{
		return false;
	}
	if (val.size() > rhs.val.size())
	{
		return pos ? true : false;
	}
	if (val.size() < rhs.val.size())
	{
		return pos ? false : true;
	}
	for (int i = (int) val.size() - 1; i >= 0; --i)
	{
		if (val[i] < rhs.val[i])
		{
			return pos ? false : true;
		}
		if (val[i] > rhs.val[i])
		{
			return pos ? true : false;
		}
	}
	return true;
}

inline std::string InfInt::toString() const
{
	std::ostringstream oss;
	oss << *this;
	return oss.str();
}

inline void InfInt::truncateToBase()
{
	for (size_t i = 0; i < val.size(); ++i)
	{
		if (val[i] >= BASE || val[i] <= -BASE)
		{
			div_t dt = div(val[i], BASE);
			val[i] = dt.rem;
			if (i + 1 >= val.size())
			{
				val.push_back(dt.quot);
			}
			else
			{
				val[i + 1] += dt.quot;
			}
		}
	}
}

inline bool InfInt::equalizeSigns()
{
	bool isPositive = true;
	int i = (int) ((val.size())) - 1;
	for (; i >= 0; --i)
	{
		if (val[i] != 0)
		{
			isPositive = val[i--] > 0;
			break;
		}
	}

	if (isPositive)
	{
		for (; i >= 0; --i)
		{
			if (val[i] < 0)
			{
				int k = 0, index = i + 1;
				for (; (size_t)(index) < val.size() && val[index] == 0; ++k, ++index);

				{
					val[index] -= 1;
					val[i] += BASE;
					for (; k > 0; --k)
					{
						val[i + k] = UPPER_BOUND;
					}
				}
			}
		}
	}
	else
	{
		for (; i >= 0; --i)
		{
			if (val[i] > 0)
			{
				int k = 0, index = i + 1;
				for (; (size_t)(index) < val.size() && val[index] == 0; ++k, ++index);

				{
					val[index] += 1;
					val[i] -= BASE;
					for (; k > 0; --k)
					{
						val[i + k] = -UPPER_BOUND;
					}
				}
			}
		}
	}

	return isPositive;
}

inline void InfInt::removeLeadingZeros()
{
	for (int i = (int) (val.size()) - 1; i > 0; --i)
	{
		if (val[i] != 0)
		{
			return;
		}
		else
		{
			val.erase(val.begin() + i);
		}
	}
}

inline void InfInt::correct(bool justCheckLeadingZeros, bool hasValidSign)
{
	if (!justCheckLeadingZeros)
	{
		truncateToBase();

		if (equalizeSigns())
		{
			pos = ((val.size() == 1 && val[0] == 0) || !hasValidSign) ? true : pos;
		}
		else
		{
			pos = hasValidSign ? !pos : false;
			for (size_t i = 0; i < val.size(); ++i)
			{
				val[i] = abs(val[i]);
			}
		}
	}

	removeLeadingZeros();
}

inline void InfInt::fromString(const std::string& s)
{
	pos = true;
	val.clear();

	val.reserve(s.size() / DIGIT_COUNT + 1);
	int i = (int) s.size() - DIGIT_COUNT;
	for (; i >= 0; i -= DIGIT_COUNT)
	{
		val.push_back(atoi(s.substr(i, DIGIT_COUNT).c_str()));
	}
	if (i > -DIGIT_COUNT)
	{
		std::string ss = s.substr(0, i + DIGIT_COUNT);
		if (ss.size() == 1 && ss[0] == '-')
		{
			pos = false;
		}
		else
		{
			val.push_back(atoi(ss.c_str()));
		}
	}
	if (val.back() < 0)
	{
		val.back() = -val.back();
		pos = false;
	}
	correct(true);
}

inline void InfInt::multiplyByDigit(ELEM_TYPE factor, std::vector<ELEM_TYPE>& val)
{
	ELEM_TYPE carry = 0;
	for (size_t i = 0; i < val.size(); ++i)
	{
		PRODUCT_TYPE pval = val[i] * (PRODUCT_TYPE) factor + carry;
		if (pval >= BASE || pval <= -BASE)
		{



			carry = (ELEM_TYPE) (pval / BASE);
			pval -= carry * BASE;
		}
		else
		{
			carry = 0;
		}
		val[i] = (ELEM_TYPE) pval;
	}
	if (carry > 0)
	{
		val.push_back(carry);
	}
}
inline std::istream& operator>>(std::istream &s, InfInt &n){
	std::string str;
	s >> str;
	n.fromString(str);
	return s;
}
inline std::ostream& operator<<(std::ostream &s, const InfInt &n){
	if (!n.pos){
		s << '-';
	}
	bool first = true;
	for (int i = (int) n.val.size() - 1; i >= 0; --i)
	{
		if (first)
		{
			s << n.val[i];
			first = false;
		}        else
		{
			s << std::setfill('0') << std::setw(DIGIT_COUNT) << n.val[i];
		}
	}
	return s;
}

void fib(InfInt* a, InfInt n, int size){
	a[0] = 0;
	a[1] = 1;
	int c = 1;
	while (a[c++] < n && c < size){
		a[c] = a [c - 1] + a [c - 2];
	}
}

#define SIZE 10001
int main(){
	ifstream inputfile ("input.txt");
	InfInt vec [SIZE];
	int n;
	vec[0] = 1;
	vec[1] = 2;
	vec[2] = 5;
	for(int i = 3; i < SIZE; i++){
		vec[i] = vec[i-1] + vec [i-1] + vec [i-2] + vec [i-3];
	}
	while(inputfile >> n){
		cout<<vec[n]<<endl;
	}
	return 0;
}
