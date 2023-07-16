#include <iostream>
#include <vector>
using namespace std;

bool isPalndrome(string s, int left, int right)
{
	while (left < right)
	{
		if (s[left++] != s[right--])
			return false;
	}

	return true;
}

void backtarck(vector<vector<string>>& ans, vector<string>& res, string& s, int index)
{
	if (index == s.size())
	{
		res.push_back(s);
		return;
	}

	for (int i = index; i < s.size(); i++)
	{
		if (isPalndrome(s, index, i))
		{
			res.push_back(s.substr(index, i - index + 1));
			backtarck(ans, res, s, i + 1);
			res.pop_back();
		}
	}
}

vector<vector<string>> partition(string s) {
	vector<vector<string>> ans;
	vector<string> res;

	backtarck(ans, res, s, 0);

	return ans;
}

int main()
{
}