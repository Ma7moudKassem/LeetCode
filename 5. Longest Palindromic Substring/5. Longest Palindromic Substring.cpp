#include <iostream>
#include <string>

using namespace std;

string longestPalindrome(string s) {
	string ans = "";
	if (s.size() < 2)
		return s;

	for (int i = 0; i < s.size(); i++)
	{
		int j = s.size() - 1;
		while (j > i)
		{
			if (s[i] == s[j])
			{
				string str = s.substr(i, j - i + 1);
				string temp = str;
				reverse(temp.begin(), temp.end());
				if (str == temp && str.size() > ans.size())
				{
					ans = str;

					if (ans.size() == s.size())
						return ans;

					break;
				}
			}
			j--;
		}
	}

	return ans == "" ? s.substr(0, 1) : ans;
}

};
int main()
{
	cout << longestPalindrome("ac");
}