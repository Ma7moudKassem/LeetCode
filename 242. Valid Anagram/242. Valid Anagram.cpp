#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

bool isAnagram(string s, string t) {

	if (s.size() != t.size())
		return false;

	unordered_map<char, int> map;

	for (int i = 0; i < s.size(); i++)
	{
		map[s[i]]++;
		map[t[i]]--;
	}

	for (auto m : map)
		if (map.count(m.second))
			return false;

	return true;
}

int main()
{
}