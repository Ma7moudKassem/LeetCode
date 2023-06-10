#include <iostream>
using namespace std;

string makeSmallestPalindrome(string s) {
	int j = s.size() - 1;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] != s[j])
			s[i] > s[j] ? s[i] = s[j] : s[j] = s[i];

		j--;
	}

	return s;
}

int main()
{
	cout << makeSmallestPalindrome("abcd");
}