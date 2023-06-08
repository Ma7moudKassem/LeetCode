#include <iostream>
#include <unordered_map>
using namespace std;

bool isSubsequence(string s, string t)
{
	int j = 0;
	for (int i = 0; i < t.size(); i++)
	{
		while (j < s.size())
		{
			if (s[j] == t[i])
				j++;
			break;
		}
	}

	return j == s.size();
}

int main()
{
	cout << isSubsequence("ab", "baac");
}

//ahbgdc
//abc