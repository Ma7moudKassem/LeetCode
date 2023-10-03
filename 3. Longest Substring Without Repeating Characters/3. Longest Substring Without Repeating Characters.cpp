#include <iostream>
#include <unordered_map>
using namespace std;

// Sliding Windows --->  O(N^2)

// p-w-w-k-e-w

int lengthOfLongestSubstring(string s) {
	unordered_map<char, int> map;

	int j = 0, ans = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (map[s[i]] > 0)
			j = max(j, map[s[i]]);

		ans = max(ans, i - j + 1);

		map[s[i]] = i + 1;
	}

	return ans;
}

int main()
{
	cout << lengthOfLongestSubstring("pwwkew");
}