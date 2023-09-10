#include <iostream>
#include <unordered_map>
using namespace std;

bool canConstruct(string ransomNote, string magazine) {
	unordered_map<char, int> map;

	for (int i = 0; i < magazine.size(); i++)
	{
		map[magazine[i]]++;
		if (i < ransomNote.size())
			map[ransomNote[i]]--;
	}

	for (auto m : map)
		if (m.second < 0)
			return false;

	return ransomNote.size() <= magazine.size();
}

int main()
{
}