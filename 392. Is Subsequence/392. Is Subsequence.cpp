#include <iostream>
using namespace std;

bool isSubsequence(string s, string t)
{
	int j = 0;
	for (int i = 0; i < t.size(); i++)
	{
		if (s[j] == t[i])
			j++;
	}

	return j == s.size();
}

int main()
{
	cout << isSubsequence("ab", "baac");
}