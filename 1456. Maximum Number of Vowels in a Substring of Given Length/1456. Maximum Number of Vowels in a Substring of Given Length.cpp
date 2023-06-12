#include <iostream>
#include <unordered_set>
using namespace std;

int maxVowels(string s, int k) {

	string sub = s.substr(0, k);
	unordered_set<char> set = { 'a','e','i','o','u' };
	int count = 0;
	for (char s : sub)
	{
		if (set.count(s))
			count++;
	}
	int maxCount = count;
	for (int i = 0; i < s.size(); i++)
	{
		if (i + k < s.size())
		{
			if (set.count(sub[0]))
				count > 0 ? count-- : 0;

			sub.erase(sub.begin());

			if (set.count(s[i + k]))
				count++;

			sub.push_back(s[i + k]);
		}

		maxCount = max(maxCount, count);
	}

	return maxCount;
}

int main()
{

	maxVowels("abciiidef", 3);
}