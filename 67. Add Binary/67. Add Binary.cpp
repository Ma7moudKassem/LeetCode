#include <iostream>
using namespace std;

string addBinary(string a, string b) {
	int i = a.size() - 1, j = b.size() - 1, carry = 0;
	string result;
	while (i >= 0 || j >= 0 || carry)
	{
		if (i >= 0)
		{
			carry += a[i] - '0';
			i--;
		}
		if (j >= 0)
		{
			carry += a[j] - '0';
			j--;
		}

		result.push_back(carry % 2 + '0');
		carry /= 2;
	}

	reverse(result.begin(), result.end());

	return result;
}

int main()
{
	cout << addBinary("1010", "1011");
}