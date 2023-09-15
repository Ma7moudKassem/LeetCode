#include <iostream>
#include <string>
using namespace std;

bool isDigit(char c)
{
	return c >= '0' && c <= '9';
}

int myAtoi(string s)
{
	int idx = 0, value = 1;
	string nums;
	bool isNegative;

	for (auto c : s)
	{
		if (isDigit(c))
		{
			if (c != '0' || (c == '0' && !nums.empty()))
			{
				nums.push_back(c);
				value *= 10;
				idx++;
			}

			if (idx >= 9)
			{
				if (isNegative) return INT_MIN;
				else return INT_MAX;
			}
		}
		else if (nums.empty() && c == '-')
			isNegative = true;
		else if (!nums.empty() && (c == '-' || c == '+'))
			return 0;
		else {
			break;
		}
	}

	int ans = 0;

	for (auto n : nums)
	{
		ans += (n - '0') * value;
		value /= 10;
	}

	return isNegative ? (-1 * ans) / 10 : ans / 10;
}

int main()
{
	cout << myAtoi("00000-42a1234");
}