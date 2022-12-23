#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int recursive(int n)
{
	if (n > 6)
	{
		int result = 0;
		string num_to_str = to_string(n);
		for (auto s : num_to_str)
		{
			string m(1, s);
			int num = stoi(m);
			result += (num * num);
		}
		return recursive(result);
	}
	else
	{
		if (n == 1)
			return 1;
		else
			return 0;
	}
}
bool isHappy(int n)
{
	return recursive(n) == 1;
}

int main()
{
	cout << isHappy(1);
}